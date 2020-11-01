/*
 * int8_teraction_layer.c
 *
 *  Created on: 2019. 9. 16.
 *      Author: kwon
 */
#include "interaction_layer.h"

#include <stdio.h>
#include "com_define.h"
#include "stdint.h"
#include "internal_osek_com_parameter.h"
extern uint8_t SendRawData(uint32_t id, uint8_t dlc, uint8_t *data);

void UserSendConfirm(uint32_t messageID)
{
	uint32_t index = 0;
	message_property_info_t *getMessage;
	getMessage = GetMessageInformation(SEND);

	for(index = 0;index < COM_SEND_MESSAGE_COUNT ;index++)
	{
		if(getMessage->sendConfirm == CHECK_SEND_CONFIRM)
		{
			getMessage->sendConfirm = NOT_CHECK_SEND_CONFIRM;
		}
		getMessage++;
	}
}


uint8_t BitOffSetValue(uint8_t length)
{
	uint8_t ret = 0;

	switch(length)
	{
	  case 1:
		  ret = 0x1;
          break;
	  case 2:
		  ret = 0x3;
          break;
	  case 3:
		  ret = 0x7;
          break;
	  case 4:
		  ret = 0xF;
          break;
	  case 5:
		  ret = 0x1F;
          break;
	  case 6:
		  ret = 0x3F;
          break;
	  case 7:
		  ret = 0x7F;
          break;

	  case 8:
          ret = 0xFF;
          break;

	  default:
		  ret = 0;
	}

	return ret;
}

void CallSendNotification(message_property_info_t* getMessage)
{
	uint8_t index = 0;

	signal_property_info_t *getSignal = NULL;

	for(index = 0; index < COM_SEND_MESSAGE_COUNT; index++)
	{
		getSignal = GetSignalInformationByHandle(SEND,index);
		if(getSignal->messageID == getMessage->messageID)
		{
			if(getSignal->transmissionNotification.notificationState == NOTIFICATION_ACTIVE)
			{
				if((getSignal->transmissionNotification.notificationType & NOTIFCATION_INDICATE) == NOTIFCATION_INDICATE)
				{
					ComSetSendSignalIndication(getSignal->signalHandle);

				}
				else
				{
					;
				}

				if((getSignal->transmissionNotification.notificationType & NOTIFCATION_CALLBACK) == NOTIFCATION_CALLBACK)
				{
					getSignal->transmissionNotification.notificationCallback();
				}
				else
				{
					;
				}
			}
			else
			{
				;
			}
		}
	}
}

void CallReceiveNotification(signal_property_info_t* getSignal)
{
	if(getSignal->receptionNotification.notificationState == NOTIFICATION_ACTIVE)
	{
		if((getSignal->receptionNotification.notificationType & NOTIFCATION_INDICATE) == NOTIFCATION_INDICATE)
		{
			//com_set_receive_signal_indication(getSignal->signal_handle);
			//com_receive_signal_indication_flag[getSignal->signal_handle] = INDICATION_FLAG_SET;
			ComSetReceiveSignalIndication(getSignal->signalHandle);
		}
		else
		{
		    ;
		}

		if((getSignal->receptionNotification.notificationType & NOTIFCATION_CALLBACK) == NOTIFCATION_CALLBACK)
		{

		    getSignal->receptionNotification.notificationCallback();
		}
		else
		{
	 	    ;
		}
		//getSignal->timeout_value = com_signal_property[getSignal->handle];
	}
	else
	{
		;
	}

}
//I-PDU
void SendDeadlineMonitoringCheck(message_property_info_t* getMessage)
{
	if(getMessage->deadlineMonitor.modeState == ACTIVE_DEADLINE_MONITORING)
	{
	    if(getMessage->deadlineMonitor.timeout > 0)
	    {
	    	getMessage->deadlineMonitor.timeout--;
	    	if(getMessage->deadlineMonitor.timeout == 0)
	    	{
	    		if(getMessage->transmissionErrorNotification.notificationState == NOTIFICATION_ACTIVE)
	    		{
	    			ComSetSendMessageErrorIndication(getMessage->messageHandle);
	    		}
	    		else
	    		{
	    		    ;
	    		}

	    		if((getMessage->transmissionErrorNotification.notificationType & NOTIFCATION_CALLBACK) == NOTIFCATION_CALLBACK)
	    		{

	    		    getMessage->transmissionErrorNotification.notificationCallback();
	    		}
	    		else
	    		{
	    	 	    ;
	    		}
	    		//getSignal->timeout_value = com_signal_property[getSignal->handle];
	    	}
	    }
	}
	else
	{
		;
	}

}

//I-PDU
void ReceiveDeadlineMonitoringCheck(message_property_info_t* getMessage)
{
	if(getMessage->deadlineMonitor.modeState == ACTIVE_DEADLINE_MONITORING)
	{
	    if(getMessage->deadlineMonitor.timeout > 0)
	    {
	    	getMessage->deadlineMonitor.timeout--;
	    	if(getMessage->deadlineMonitor.timeout == 0)
	    	{
	    		if(getMessage->receptionErrorNotification.notificationState == NOTIFICATION_ACTIVE)
	    		{
	    			ComSetReceiveMessageErrorIndication(getMessage->messageHandle);
	    		}
	    		else
	    		{
	    		    ;
	    		}

	    		if((getMessage->receptionErrorNotification.notificationType & NOTIFCATION_CALLBACK) == NOTIFCATION_CALLBACK)
	    		{

	    		    getMessage->receptionErrorNotification.notificationCallback();
	    		}
	    		else
	    		{
	    	 	    ;
	    		}

	    	}
	    }
	}
	else
	{
		;
	}
}
/*
void CovertRawValueToBitBuffer(uint8_t *covertBitBuffer,uint32_t rawValue, uint32_t bitLength)
{
	uint32_t bitPositionOffset = 0;
	uint32_t bitPositionIndex = 0;
	uint32_t bitPositionMax = 0;

	if((bitLength % 8) == 0)
	{
		bitPositionMax = (bitLength / 8);
	}
	else
	{
		bitPositionMax = (bitLength / 8) + 1;

	}

	for(bitPositionIndex = 0; bitPositionIndex < bitPositionMax; bitPositionIndex++ )
	{
		covertBitBuffer[bitPositionIndex] = ((rawValue >> bitPositionOffset) & 0xFF);
		bitPositionOffset = bitPositionOffset + 8;
	}
}
*/


void UpdateBufferFromSignalData(uint8_t byteOrder,uint8_t *buffer, uint16_t startoffset,uint8_t length, uint64_t rawValue)
{
	int8_t startBytePosition = 0;
	int8_t startBitPosition = 0;

	int8_t endBytePosition = 0;
	int8_t endBitPosition = 0;

	uint8_t remainLength = 0;
	uint32_t remainValue = 0;
	uint8_t remainBytePostion = 0;

	uint8_t currentBytePosition = 0;
	uint8_t currentBitPosition  = 0;
	uint8_t currentBitLength    = 0;
	uint8_t currentBitShift  = 0;

	uint32_t rawValueCacluator = 0;
	uint8_t clearBitOffset    = 0;
	int8_t resultBitPosition = 0;

    if(byteOrder == BYTE_ORDER_BIG_ENDIAN)
    {
    	endBytePosition = startoffset / 8;
    	endBitPosition = startoffset % 8;

    	//바이트내 모든 비트가 존재//
    	if((endBitPosition + 1) >= length)
    	{
			startBytePosition = endBytePosition;
    		startBitPosition = (endBitPosition + 1) - length;
    	}
    	else
    	{
			remainLength = (length - (endBitPosition + 1)); // 현재 바이트라인 길이 제거

			while(remainLength > 8)
			{
				remainBytePostion++;
				remainLength = remainLength - 8;
			}

            if(remainLength > 0)
			{
				remainBytePostion++;
			}

			startBytePosition = endBytePosition + remainBytePostion;
			startBitPosition = 8 - remainLength;

    	}
		currentBitLength = length; //현재 남은 비트 길이
		currentBitPosition = startBitPosition; //현재 바이트에서의 BIT 위치(범위 : 0 ~ 7)
		currentBytePosition = startBytePosition;  // 현재 위치한 바이트
		remainValue = rawValue;

		while(1)
		{


		    if(endBytePosition == currentBytePosition)
			{
				clearBitOffset = BitOffSetValue(currentBitLength);
				remainValue = (remainValue & (clearBitOffset << currentBitShift));
				buffer[currentBytePosition] &= ~(clearBitOffset << currentBitPosition); //마지막 바이트영역을 클리어 한다.
				buffer[currentBytePosition] |= ((remainValue << currentBitPosition) >> currentBitShift);
				if((startBytePosition < 0 ) || (endBytePosition < 0))
				{
					remainValue = rawValue;
				}
				break;
			}
			else
			{
				clearBitOffset = BitOffSetValue(8 - currentBitPosition);
				buffer[currentBytePosition] &= ~(clearBitOffset << currentBitPosition); // 현재 바이트내 비트영역 클리어
				rawValueCacluator = (remainValue & (clearBitOffset << currentBitShift)); // 적용값 계산
				buffer[currentBytePosition] |= (rawValueCacluator << currentBitPosition) >> currentBitShift; // 값 적용

				remainValue = remainValue - rawValueCacluator; // 기존 값 업데이트

				currentBytePosition = currentBytePosition - 1;
				currentBitShift = currentBitShift + 8 - currentBitPosition;
				currentBitLength = currentBitLength - ( 8 - currentBitPosition);
				currentBitPosition = 0;

			}
		}
    }
    else if(byteOrder == BYTE_ORDER_LITTLE_ENDIAN)
    {
	    startBytePosition = startoffset / 8; //0
	    startBitPosition = startoffset % 8; // 7
	    resultBitPosition = startoffset + length - 1;//14

	    endBytePosition = resultBitPosition / 8;
	    endBitPosition = resultBitPosition % 8;

		currentBitLength = length; //현재 남은 비트 길이
		currentBitPosition = startBitPosition; //현재 바이트에서의 BIT 위치(범위 : 0 ~ 7)
		currentBytePosition = startBytePosition;  // 현재 위치한 바이트
		remainValue = rawValue;

		while(1)
		{
		    if(endBytePosition == currentBytePosition)
			{
				clearBitOffset = BitOffSetValue(currentBitLength);
				remainValue = (remainValue & (clearBitOffset << currentBitShift));
				buffer[currentBytePosition] &= ~(clearBitOffset << currentBitPosition); //마지막 바이트영역을 클리어 한다.
				buffer[currentBytePosition] |= ((remainValue << currentBitPosition) >> currentBitShift);
				break;
			}
			else
			{
				clearBitOffset = BitOffSetValue(8 - currentBitPosition);
				buffer[currentBytePosition] &= ~(clearBitOffset << currentBitPosition); // 현재 바이트내 비트영역 클리어
				rawValueCacluator = (remainValue & (clearBitOffset << currentBitShift)); // 적용값 계산
				buffer[currentBytePosition] |= (rawValueCacluator << currentBitPosition) >> currentBitShift; // 값 적용

				remainValue = remainValue - rawValueCacluator; // 기존 값 업데이트

				currentBytePosition = currentBytePosition + 1;
				currentBitShift = currentBitShift + 8 - currentBitPosition;
				currentBitLength = currentBitLength - ( 8 - currentBitPosition);
				currentBitPosition = 0;

			}
		}

    }
    else
    {

    }

}

uint32_t UpdateSignalDataFromBuffer(uint8_t byteOrder,uint8_t *buffer, uint16_t startoffset,uint8_t length)
{
	int8_t startBytePosition = 0;
	int8_t startBitPosition = 0;

	int8_t endBytePosition = 0;
	int8_t endBitPosition = 0;

	uint8_t remainLength = 0;
	//uint32_t remainValue = 0;
	uint32_t resultValue = 0;
	uint8_t remainBytePostion = 0;

	uint8_t currentBytePosition = 0;
	uint8_t currentBitPosition  = 0;
	uint8_t currentBitLength    = 0;
	uint8_t currentBitShift  = 0;

	uint32_t rawValueCacluator = 0;
	uint8_t clearBitOffset    = 0;
	int8_t resultBitPosition = 0;


    if(byteOrder == BYTE_ORDER_BIG_ENDIAN)
    {
    	endBytePosition = startoffset / 8;
    	endBitPosition = startoffset % 8;

    	//바이트내 모든 비트가 존재//
    	if((endBitPosition + 1) >= length)
    	{
			startBytePosition = endBytePosition;
    		startBitPosition = (endBitPosition + 1) - length;
    	}
    	else
    	{
			remainLength = (length - (endBitPosition + 1)); // 현재 바이트라인 길이 제거

			while(remainLength > 8)
			{
				remainBytePostion++;
				remainLength = remainLength - 8;
			}

            if(remainLength > 0)
			{
				remainBytePostion++;
			}

			startBytePosition = endBytePosition + remainBytePostion;
			startBitPosition = 8 - remainLength;

    	}
		currentBitLength = length; //현재 남은 비트 길이
		currentBitPosition = startBitPosition; //현재 바이트에서의 BIT 위치(범위 : 0 ~ 7)
		currentBytePosition = startBytePosition;  // 현재 위치한 바이트

		while(1)
		{
		    if(endBytePosition == currentBytePosition)
			{
				clearBitOffset = BitOffSetValue(currentBitLength);
				rawValueCacluator = (buffer[currentBytePosition] >> currentBitPosition) & clearBitOffset;
				resultValue = resultValue + (rawValueCacluator << currentBitShift);
				break;
			}
			else
			{
				clearBitOffset = BitOffSetValue(8 - currentBitPosition) << currentBitPosition; // 시그널 값의 &연산을 위한 offset값을 구한다.
				rawValueCacluator = (buffer[currentBytePosition] & clearBitOffset) >> currentBitPosition; //현재 바이트라인에 속한 시그널값을 구한다.
				resultValue = resultValue + (rawValueCacluator << currentBitShift);
				currentBytePosition = currentBytePosition - 1;
				currentBitShift = currentBitShift + 8 - currentBitPosition;
				currentBitLength = currentBitLength - ( 8 - currentBitPosition);
				currentBitPosition = 0;
			}
		}
    }
    else if(byteOrder == BYTE_ORDER_LITTLE_ENDIAN)
    {
	    startBytePosition = startoffset / 8; //0
	    startBitPosition = startoffset % 8; // 7
	    resultBitPosition = startoffset + length - 1;//14

	    endBytePosition = resultBitPosition / 8;
	    endBitPosition = resultBitPosition % 8;

		currentBitLength = length; //현재 남은 비트 길이
		currentBitPosition = startBitPosition; //현재 바이트에서의 BIT 위치(범위 : 0 ~ 7)
		currentBytePosition = startBytePosition;  // 현재 위치한 바이트

		while(1)
		{
		    if(endBytePosition == currentBytePosition)
			{
				clearBitOffset = BitOffSetValue(currentBitLength);
				rawValueCacluator = (buffer[currentBytePosition] >> currentBitPosition) & clearBitOffset;
				resultValue = resultValue + (rawValueCacluator << currentBitShift);
				break;
			}
			else
			{
				clearBitOffset = BitOffSetValue(8 - currentBitPosition) << currentBitPosition; // 시그널 값의 &연산을 위한 offset값을 구한다.
				rawValueCacluator = (buffer[currentBytePosition] & clearBitOffset) >> currentBitPosition; //현재 바이트라인에 속한 시그널값을 구한다.
				resultValue = resultValue + (rawValueCacluator << currentBitShift);
				currentBytePosition = currentBytePosition + 1;
				currentBitShift = currentBitShift + 8 - currentBitPosition;
				currentBitLength = currentBitLength - ( 8 - currentBitPosition);
				currentBitPosition = 0;
			}
		}
	}
	return resultValue;
}
StatusType UpdateReceivedData(uint8_t *buffer,message_property_info_t *getMessage,signal_property_info_t *getSignal)
{
	StatusType ret = E_OK;
	uint64_t receivedSignalValue = 0;

	receivedSignalValue = UpdateSignalDataFromBuffer(getSignal->byteOrder, buffer,getSignal->startOffsetBit,getSignal->signalLength);

	if(CheckPassedFilter(getSignal,&receivedSignalValue) == E_OK)
	{
		getSignal->signalData = receivedSignalValue;
		UpdateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,receivedSignalValue);
	}
	else
	{
		ret = E_COM_DISCARD;
	}

	return ret;
}


void ProcessComSend(void)
{
	uint32_t index = 0;
	uint8_t getValue = 0;
	message_property_info_t *getMessage;
	commumication_management_info_t* getCom = NULL;

	getCom = GetCommunicationManagementInformation();

	if(getCom->operationState == ACTIVE_COM)
	{
		if(getCom->periodicModeState == ACTIVE_PERIODIC_AND_MIX_SEND_OPERATION)
		{
			getMessage = GetMessageInformation(SEND);

			for(index = 0;index < COM_SEND_MESSAGE_COUNT ;index++)
			{
				/* Cycle Process*/
				/* Start Offset Process*/
				if(getMessage->startOffsetState == START_OFFSET_DEACTIVE)
				{
					/* Send Mode = Periodic Transfer Mode, Mixed Transfer Mode*/
					if((getMessage->sendMode == PTM) || (getMessage->sendMode == MTM))
					{
						if(getMessage->startOffsetDelay > 0 )
						{
							getMessage->startOffsetDelay--;
						}
						else
						{
							if(getMessage->startOffsetDelay == 0)
							{
								getMessage->messageSendRequest = MESSGE_SEND_REQUEST;
								getMessage->startOffsetState = START_OFFSET_ACTIVE;
							}
						}
					}
					else
					{
						getMessage->startOffsetState = START_OFFSET_ACTIVE;
					}
				}
				else /*START_OFFSET_ACTIVE */
				{
					/*Cycle Process*/

					if(getMessage->cycleTime > 0)
					{
						getMessage->cycleTime--;
						if(getMessage->cycleTime == 0)
						{
							getMessage->sendInitialTimeType = SEND_INITIAL_TIME_CYCLE_TYPE;
							getMessage->messageSendRequest = MESSGE_SEND_REQUEST;

						}
						else
						{
							;
						}
					}
					else
					{
						;
					}
					/* Event Process*/

					if(getMessage->messageSendRequest == NON_MESSGE_SEND_REQUEST)
					{
					    if(getMessage->directSendEvent == OCCUR_REPETITION_SEND_EVENT)
					    {
					    	//getMessage->directSendEvent = NON_OCCUR_DIRECT_SEND_EVENT;
					    	if(getMessage->repetitionNumber > 0)
					    	{
					    		if(getMessage->repetitionNumber == comSendMsgProperty[index].reloadRepetitionNumber)
					    		{
					    			getMessage->messageSendRequest = MESSGE_SEND_REQUEST;
					    			getMessage->sendInitialTimeType = SEND_INITIAL_TIME_REPETITION_TYPE;
					    			getMessage->repetitionNumber--;
					    		}
					    		else
					    		{
					    			if(getMessage->repetitionCycleTime > 0 )
					    			{
					    				getMessage->repetitionCycleTime--;
					    				if(getMessage->repetitionCycleTime == 0)
					    				{
					    					getMessage->sendInitialTimeType = SEND_INITIAL_TIME_REPETITION_TYPE;
					    					getMessage->messageSendRequest = MESSGE_SEND_REQUEST;
					    					getMessage->repetitionNumber--;

					    					if(getMessage->repetitionNumber == 0)
					    					{
					    						getMessage->directSendEvent = NON_OCCUR_REPETITION_SEND_EVENT;
					    					}
					    					else
					    					{
					    						;
					    					}

					    				}

					    			}

					    		}
					    	}
					    }
					    else
					    {
					    	if(getMessage->directSendEvent == OCCUR_DIRECT_SEND_EVENT)
					    	{
					    		getMessage->directSendEvent = NON_OCCUR_DIRECT_SEND_EVENT;
					    		getMessage->messageSendRequest = MESSGE_SEND_REQUEST;
					    	}

					    }
					}
				}

				if(getMessage->messageDelayTime > 0)
				{
					getMessage->messageDelayTime--;
				}
				else
				{
					getMessage->messageDelayTime = 0;
				}

				/*A message transfer request has occurred.  */
				if((getMessage->messageSendRequest == MESSGE_SEND_REQUEST) && (getMessage->sendConfirm == NOT_CHECK_SEND_CONFIRM))
				{
					/*The delay between message met condition.*/
					if(getMessage->messageDelayTime == 0)
					{
						getValue = SendRawData(getMessage->messageID,getMessage->messageLength,getMessage->currentMessageObject);

						if(getValue == 0x1)
						{
							/*Update deadline timeout */
							getMessage->deadlineMonitor.timeout = comSendMsgProperty[getMessage->messageHandle].deadlineMonitor.reloadtimeout;

							if(getMessage->sendInitialTimeType == SEND_INITIAL_TIME_CYCLE_TYPE)
							{
								getMessage->cycleTime = comSendMsgProperty[index].reloadCycleTime;
								getMessage->sendInitialTimeType = SEND_INITIAL_TIME_INVALID_TYPE;
							}
							else if(getMessage->sendInitialTimeType == SEND_INITIAL_TIME_REPETITION_TYPE)
							{
								getMessage->repetitionCycleTime = comSendMsgProperty[getMessage->messageHandle].reloadRepetitionCycleTime;
								getMessage->sendInitialTimeType = SEND_INITIAL_TIME_INVALID_TYPE;
							}
							else
							{
								getMessage->sendInitialTimeType = SEND_INITIAL_TIME_INVALID_TYPE;
							}

							getMessage->messageDelayTime = comSendMsgProperty[index].reloadMessageDelayTime;
							getMessage->messageSendRequest = NON_MESSGE_SEND_REQUEST;
							getMessage->sendConfirm = CHECK_SEND_CONFIRM;
						}
						else
						{

						}

						CallSendNotification(getMessage);
					}
					else
					{
						;
					}
				}
				else /*A message transfer request has not occurred.  */
				{
					;
				}
				getMessage++;

			}

		}
		else
		{

		}

	}
	else
	{
		;
	}
}

void ProcessComReceive(uint32_t ipduID,uint8_t* data)
{
	uint32_t index = 0;

	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	if(CheckIsExistedMessageID(RECEIVE,ipduID) == E_OK)
	{
		getSignal = GetSignalInformation(RECEIVE);
		getMessage = GetMessageInformationByID(RECEIVE,ipduID);

		getMessage->deadlineMonitor.timeout = comReceiveMsgProperty[getMessage->messageHandle].deadlineMonitor.reloadtimeout;

		for(index = 0; index < COM_RECEIVE_SIGNAL_COUNT; index++)
		{
			if(getSignal->messageID == ipduID)
			{
				//getMessage = get_messsage_information_by_signal(RECEIVE,getSignal->signal_handle);
				if(UpdateReceivedData(data, getMessage, getSignal) == E_OK)
				{
					CallReceiveNotification(getSignal);
				}
				else
				{
					;
				}
			}
			getSignal++;
		}
	}
	else
	{
		;
	}

}

void ProcessDeadlineMonitoring(uint8_t direction)
{
	uint32_t index = 0;
	message_property_info_t *getMessage;
	commumication_management_info_t* getCom = NULL;

	getCom = GetCommunicationManagementInformation();

	if(getCom->operationState == ACTIVE_COM)
	{
		if(direction == SEND)
		{
			getMessage = GetMessageInformation(SEND);
            for(index = 0; index < COM_SEND_MESSAGE_COUNT;index++)
		    {
	  	    	SendDeadlineMonitoringCheck(getMessage);
		    }
		  	getMessage++;
        }
		else if(direction == RECEIVE)
		{
			getMessage = GetMessageInformation(RECEIVE);
		    for(index = 0; index < COM_RECEIVE_MESSAGE_COUNT;index++)
			{
                ReceiveDeadlineMonitoringCheck(getMessage);
				getMessage++;
			}
		}
		else
		{
		    printf("Invalid direction Error\n");
		}
	}
}

void ProcessComTask()
{
	ProcessComSend();
	ProcessDeadlineMonitoring(SEND);
	ProcessDeadlineMonitoring(RECEIVE);
}

