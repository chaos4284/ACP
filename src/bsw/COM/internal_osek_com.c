/*
 * Internal_osek_com.c
 *
 *  Created on: 2019. 9. 4.
 *      Author: kwon
 */

//COMServiceIdType error_service_id;
#include "internal_osek_com.h"

#include "com_define.h"
#include <stdio.h>
#include "stdint.h"

#include "interaction_layer.h"
#include "internal_osek_com_parameter.h"
#include "osek_com.h"
static commumication_management_info_t com;
/*
static message_property_info_t *comSendMsgProperty;
static message_property_info_t *comReceiveMsgProperty;
static signal_property_info_t *comSendSignalProperty;
static signal_property_info_t *comReceiveSignalProperty;
*/
/*
static message_property_info_t comSendMsgProperty[COM_SEND_MESSAGE_COUNT];
static message_property_info_t comReceiveMsgProperty[COM_RECEIVE_MESSAGE_COUNT];
static signal_property_info_t comSendSignalProperty[COM_SEND_SIGNAL_COUNT];
static signal_property_info_t comReceiveSignalProperty[COM_RECEIVE_SIGNAL_COUNT];
*/



extern message_property_info_t comSendMsgProperty[COM_SEND_MESSAGE_COUNT];
extern message_property_info_t comReceiveMsgProperty[COM_RECEIVE_MESSAGE_COUNT];
extern signal_property_info_t comSendSignalProperty[COM_SEND_SIGNAL_COUNT];
extern signal_property_info_t comReceiveSignalProperty[COM_RECEIVE_SIGNAL_COUNT];

//extern uint8_t com_send_signal_indication_flag[COM_SEND_SIGNAL_COUNT];
//extern uint8_t com_send_msg_error_indication_flag[COM_SEND_MESSAGE_COUNT];

error_service_management_info_t ersm;
extern void UpdateBufferFromSignalData(uint8_t byteOrder,uint8_t *buffer, uint16_t startoffset,uint8_t length, uint64_t rawValue);

/////////////////////////////////////////////////////////
void DataMemset(void *dst,uint8_t value,uint32_t data_size)
{
	uint32_t index = 0;
	uint8_t *destination = (uint8_t*) dst;

	for(index = 0; index < data_size ;index++)
	{
		destination[index] = value;
	}
}

void *CopyInformationData(void* dst, const void* src, uint32_t data_length )
{
	uint32_t index = 0;
	uint8_t *destination = (uint8_t*) dst;
	unsigned const char *source = (uint8_t*) src;

	for(index = 0; index < data_length; index++)
	{
		*destination++ = *source++;
	}

	return dst;

}

int8_t CompareSignalData(uint32_t *compare1, uint32_t *compare2)
{
	int ret = E_OK;


	if(*compare1 != *compare2)
	{
		ret = E_OK;
	}
	else
	{
		ret = -1;

	}

	return ret;

}

uint8_t CheckPassedFilter(signal_property_info_t *signal, ApplicationDataRef data)
{
	uint8_t ret = E_OK;

	switch(signal->filterAlorigthm)
	{
		case F_ALWAYS:
			//ret = E_OK;
			//break;

		case F_NEWISDIFFRENT:

			if(CompareSignalData(&signal->signalData,(uint32_t*) data) == -1)
			{
				ret = E_COM_DISCARD;
			}
			else
			{
				ret = E_OK;
			}

			break;

	}

	return ret;
}
uint8_t CheckIsExistedMessageID(uint8_t direction, uint32_t messageID)
{
	uint8_t index;
	unsigned short int ret = E_COM_ID;

	index = 0;

	if(direction == SEND)
	{
		for(index = 0; index < COM_SEND_MESSAGE_COUNT; index++)
		{
			if(messageID == comSendMsgProperty[index].messageID)
			{
				ret = E_OK;
				break;
			}
			else
			{
				;
			}
		}
	}
	else if(direction == RECEIVE)
	{
		for(index = 0; index < COM_RECEIVE_MESSAGE_COUNT; index++)
		{
			if(messageID == comReceiveMsgProperty[index].messageID)
			{
				ret = E_OK;
				break;
			}
			else
			{
				;
			}
		}
	}
	else
	{
		printf("error state\r\n");
	}

	return ret;
}

/*
uint8_t CheckIsExistedSignalHandle(uint8_t direction, MessageIdentifier handle)
{
	unsigned short int ret = E_COM_ID;

	if(direction == SEND)
	{

		for(index = 0; index < COM_SEND_SIGNAL_COUNT; index++)
		{
			if(handle == comSendSignalProperty[index].signalHandle)
			{
				ret = E_OK;
				break;
			}
			else
			{
				;
			}
		}

		if(handle < COM_SEND_SIGNAL_COUNT)
		{
			ret = E_OK;
		}
		else
		{
			ret = E_COM_ID;
		}
	}
	else if(direction == RECEIVE)
	{

		for(index = 0; index < COM_RECEIVE_SIGNAL_COUNT; index++)
		{
			if(handle == comReceiveSignalProperty[index].signalHandle)
			{
				ret = E_OK;
				break;
			}
			else
			{
				;
			}
		}

		if(handle < COM_RECEIVE_SIGNAL_COUNT)
		{
			ret = E_OK;
		}
		else
		{
			ret = E_COM_ID;
		}
	}

	return ret;
}
*/
void SetSendConfirm(uint32_t id)
{
	uint8_t index;
	for(index = 0 ;index < COM_SEND_MESSAGE_COUNT;index++ )
	{
		if(comSendMsgProperty[index].messageID == id)
		{
			if(comSendMsgProperty[index].sendConfirm == CHECK_SEND_CONFIRM)
			{
				comSendMsgProperty[index].sendConfirm = NOT_CHECK_SEND_CONFIRM;
			}
		}
	}
}
signal_property_info_t* GetSignalInformationByHandle(uint8_t direction, MessageIdentifier handle)
{
	signal_property_info_t* ret = NULL;

	if(direction == SEND)
	{

		ret = &comSendSignalProperty[handle];
	}
	else if(direction == RECEIVE)
	{
		ret = &comReceiveSignalProperty[handle];
	}
	return ret;
}
/*
signal_property_info_t* getSignalInformation_by_id(uint8_t direction, MessageIdentifier id)
{
	uint32_t index;
	signal_property_info_t* ret = NULL;


	if(direction == SEND)
	{
		for(index = 0; index < COM_SEND_SIGNAL_COUNT; index++)
		{
			if(id == comSendSignalProperty[index].messageID)
			{
				ret = &comSendSignalProperty[index];
				break;
			}
			else
			{
				;
			}
		}

	}
	else if(direction == RECEIVE)
	{
		for(index = 0; index < COM_RECEIVE_SIGNAL_COUNT; index++)
		{
			if(id == comSendSignalProperty[index].messageID)
			{
				ret = &comReceiveSignalProperty[index];
				break;
			}
			else
			{
				;
			}
		}

	}
	return ret;
}
*/
message_property_info_t* GetMessageInformationByID(uint8_t direction,MessageIdentifier messageID)
{
	uint8_t index = 0;
	message_property_info_t* ret = NULL;
	if(direction == SEND)
	{
		for(index = 0 ;index < COM_SEND_MESSAGE_COUNT;index++ )
		{
			if(comSendMsgProperty[index].messageID == messageID)
			{
				ret =  &comSendMsgProperty[index];
				break;

			}
		}

	}
	else if(direction == RECEIVE)
	{

		for(index = 0 ;index < COM_RECEIVE_MESSAGE_COUNT;index++ )
		{
			if(comReceiveMsgProperty[index].messageID == messageID)
			{
				ret =  &comReceiveMsgProperty[index];
				break;

			}
		}

	}
	return ret;
}
message_property_info_t* GetMesssageInformationByHandle(uint8_t direction,uint32_t messageHandle)
{

	message_property_info_t* ret = NULL;

	if(direction == SEND)
	{

		ret =  &comSendMsgProperty[messageHandle];

	}
	else if(direction == RECEIVE)
	{

		ret =  &comReceiveMsgProperty[messageHandle];
	}


	return ret;
}

signal_property_info_t* GetSignalInformation(uint8_t direction)
{
	signal_property_info_t* ret = NULL;
	if(direction == SEND)
	{
		ret = comSendSignalProperty;
	}
	else if(direction == RECEIVE)
	{
		ret = comReceiveSignalProperty;
	}


	return ret;
}

message_property_info_t* GetMessageInformation(uint8_t direction)
{
	message_property_info_t* ret = NULL;

	if(direction == SEND)
	{
		ret = comSendMsgProperty;
	}
	else if(direction == RECEIVE)
	{
		ret = comReceiveMsgProperty;
	}
	return ret;
}

commumication_management_info_t* GetCommunicationManagementInformation(void)
{
	commumication_management_info_t* ret = NULL;
	ret = &com;

	return ret;
}

/////////////////////////////////////////////////////////
StatusType InternalStartComService(COMApplicationModeType appMode)
{
	StatusType ret = E_OK;
	uint32_t index = 0;

	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	ersm.serviceID = COMServiceId_StartCOM;
	ersm.appMode = appMode;

	com.operationState = ACTIVE_COM;
	com.periodicModeState = DEACTIVE_PERIODIC_AND_MIX_SEND_OPERATION;

	/*Set signal data in message*/
	/*send process*/
	for(index = 0 ; index < COM_SEND_SIGNAL_COUNT; index++ )
	{
		getSignal = GetSignalInformationByHandle(SEND,index);
		getMessage = GetMesssageInformationByHandle(SEND,getSignal->messageHandle);

		if((getSignal != NULL) || (getMessage != NULL))
		{
            UpdateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->startValue);
		}
		else
		{
			ret = E_COM_GENERATION;
		}
	}


	/*receive process*/
	for(index = 0 ; index < COM_RECEIVE_SIGNAL_COUNT; index++ )
	{
		getSignal = GetSignalInformationByHandle(RECEIVE,index);
		getMessage = GetMesssageInformationByHandle(RECEIVE,getSignal->messageHandle);

		if((getSignal != NULL) || (getMessage != NULL))
		{
			UpdateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->startValue);
		}
		else
		{
			ret = E_COM_GENERATION;
		}
	}

	if( appMode > OSEK_COM_APP_MODE_MAX )
	{
		ret = E_COM_ID;
	}
	else
	{
		com.applicationMode = appMode;
	}
	return ret;
}

StatusType InternalStopComService (COMShutdownModeType shutdownMode)
{
	StatusType ret = E_OK;
	uint32_t index = 0;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	ersm.serviceID = COMServiceId_StopCOM;
	ersm.shutMode = shutdownMode;

	com.operationState = DEACTIVE_COM;
	com.periodicModeState = DEACTIVE_PERIODIC_AND_MIX_SEND_OPERATION;

	/*Set signal data in message*/
	/*send process*/
	for(index = 0 ; index < COM_SEND_SIGNAL_COUNT; index++ )
	{
		getSignal = GetSignalInformationByHandle(SEND,index);
		printf("Send StopComService Call\r\n");
		getMessage = GetMesssageInformationByHandle(SEND,getSignal->messageHandle);
        //1. 메시지 초기화

		//2. 시그널 초기화
		if((getSignal != NULL) || (getMessage != NULL))
		{
			updateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->startValue);
		}
		else
		{
			ret = E_COM_GENERATION;
		}


	}


	/*receive process*/
	for(index = 0 ; index < COM_RECEIVE_SIGNAL_COUNT; index++ )
	{
		getSignal = GetSignalInformationByHandle(RECEIVE,index);
		printf("Receive StopComService Call\r\n");
		getMessage = GetMesssageInformationByHandle(SEND,getSignal->messageHandle);

		if((getSignal != NULL) || (getMessage != NULL))
		{
			updateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->signalData);
		}
		else
		{
			ret = E_COM_GENERATION;
		}
	}

	if(shutdownMode != COM_SHUTDOWN_IMMEDIATE)
	{
		ret = E_COM_ID;
	}
	else
	{
		com.applicationMode = OSEK_COM_INVALID_APP_MODE;
	}

	return ret;
}

COMApplicationModeType InternalGetApplicationModeService (void)
{
	COMApplicationModeType ret = E_OK;

	ersm.serviceID = COMServiceId_GetCOMApplicationMode;

	if(com.operationState == ACTIVE_COM)
	{
		ret = com.applicationMode;
	}
	else
	{
		ret = OSEK_COM_INVALID_APP_MODE;
	}

	return ret;
}

StatusType InternalInitializeMessageService (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;
	ersm.serviceID = COMServiceId_InitMessage;
	ersm.handle = handle;
	ersm.dataRef = data;


	getSignal = GetSignalInformationByHandle(SEND, handle);
	getMessage = GetMesssageInformationByHandle(SEND,getSignal->messageHandle);

	if(handle < COM_SEND_SIGNAL_COUNT)
	{
		if((getSignal != NULL) || (getMessage != NULL))
		{
			getSignal->signalData = *((uint32_t*) data);
			updateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->signalData);

		}
		else
		{
			ret = E_COM_GENERATION;
		}
	}
	else
	{
		ret = E_COM_ID;
	}
	return ret;
}

StatusType InternalStartPeriodicService(void)
{
	StatusType ret = E_OK;

	ersm.serviceID = COMServiceId_StartPeriodic;

	if(com.periodicModeState == ACTIVE_PERIODIC_AND_MIX_SEND_OPERATION)
	{
		ret = E_COM_SYS_ALREADY_START_PERIODIC;
	}
	else
	{
		com.periodicModeState = ACTIVE_PERIODIC_AND_MIX_SEND_OPERATION;
	}

	return ret;
}

StatusType InternalStopPeriodicService(void)
{
	StatusType ret = E_OK;

	ersm.serviceID = COMServiceId_StopPeriodic;

	if(com.periodicModeState == DEACTIVE_PERIODIC_AND_MIX_SEND_OPERATION)
	{
		ret = E_COM_SYS_NO_CALL_START_PERIODIC;
	}
	else
	{
		com.periodicModeState = DEACTIVE_PERIODIC_AND_MIX_SEND_OPERATION;
	}

	return ret;
}

StatusType InternalSendMessageService (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;
	ersm.serviceID = COMServiceId_SendMessage;
	ersm.handle = handle;
	ersm.dataRef = data;

	getSignal = GetSignalInformationByHandle(SEND,handle);
	getMessage = GetMesssageInformationByHandle(SEND, getSignal->messageHandle);

	if((getSignal != NULL) || (getMessage != NULL))
	{
		if(getMessage->messageDirection == SEND)
		{
			if(CheckPassedFilter(getSignal,data) == E_OK)
			{
				if(getSignal->signalData == *((uint32_t*) data))
				{
					ret = E_COM_ID;
				}
				getSignal->signalData = *((uint32_t*) data);
				if(getSignal->sendProperty == TTPWR)
				{
					getMessage->directSendEvent = OCCUR_DIRECT_SEND_EVENT;
				}
				else if(getSignal->sendProperty == TTP)
				{
					getMessage->directSendEvent = OCCUR_REPETITION_SEND_EVENT;
					getMessage->repetitionNumber = comSendMsgProperty[getMessage->messageHandle].reloadRepetitionNumber;
				}
				UpdateBufferFromSignalData(getSignal->byteOrder,getMessage->currentMessageObject,getSignal->startOffsetBit,getSignal->signalLength,getSignal->signalData);

			}
			else
			{
				ret = E_COM_DISCARD;
			}

		}
		else
		{
			ret = E_COM_ID;
		}

	}
	else
	{
		ret = E_COM_ID;
	}

	return ret;
}

StatusType InternalReceiveMessageService (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	ersm.serviceID = COMServiceId_ReceiveMessage;
	ersm.handle = handle;
	ersm.dataRef = data;

	getSignal = GetSignalInformationByHandle(RECEIVE,handle);
	getMessage = GetMesssageInformationByHandle(RECEIVE,getSignal->messageHandle);

	if((getSignal != NULL) || (getMessage != NULL))
	{

		if((getMessage->messageDirection == RECEIVE))
		{
			if(CheckPassedFilter(getSignal,data) == E_OK)
			{
			   *(uint32_t *)data = getSignal->signalData;
			}
			else
			{
				ret = E_COM_DISCARD;
			}
		}
		else
		{
			ret = E_COM_ID;
		}
	}
	else
	{
		ret = E_COM_ID;
	}

	return ret;
}
/*
StatusType Internal_send_dynamic_message_service (MessageIdentifier handle,ApplicationDataRef data,LengthRef length)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	ersm.serviceID = COMServiceId_SendDynamicMessage;
	ersm.handle = handle;
	ersm.dataRef = data;
	ersm.lengthRef = length;

	getSignal = GetSignalInformationByHandle(handle);
	getMessage = GetMesssageInformationByHandle(getSignal);

	if((check_is_existed_handle(handle) == E_OK) || (getMessage != NULL))
	{
		if((getSignal->signal_length_type == NORMAL_LENGTH_TYPE) || (getMessage->messageDirection == SEND))
		{
			if((*length > 0 ) || (*length < getSignal->signal_dynamic_max_length))
			{
				//CopyInformationData((void*)getMessage->ipdu,data,*length);
				getMessage->direct_send_event = OCCUR_DIRECT_SEND_EVENT;
			}
			else
			{
				ret = E_COM_LENGTH;
			}
		}
		else
		{
			ret = E_COM_ID;
		}

	}
	else
	{
		ret = E_COM_ID;
	}

	return ret;
}

StatusType InternalReceive_dynamic_message_service (MessageIdentifier handle,ApplicationDataRef data,LengthRef length)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;

	ersm.serviceID = COMServiceId_ReceiveDynamicMessage;
	ersm.handle = handle;
	ersm.dataRef = data;
	ersm.lengthRef = length;

	getSignal = GetSignalInformationByHandle(handle);
	getMessage = GetMesssageInformationByHandle(getSignal);

	if((check_is_existed_handle(handle) == E_OK) || (getSignal != NULL))
	{
		if((getSignal->signal_length_type == NORMAL_LENGTH_TYPE) || (getMessage->messageDirection == RECEIVE))
		{
			CopyInformationData(data,(void*)getMessage->currentMessageObject,*length);
		}
		else
		{
			ret = E_COM_ID;
		}
	}
	else
	{
		ret = E_COM_ID;
	}

	return ret;
}

StatusType Internal_send_zero_message_service (MessageIdentifier handle)
{
	StatusType ret = E_OK;
	signal_property_info_t *getSignal = NULL;
	message_property_info_t *getMessage = NULL;
	ersm.serviceID = COMServiceId_ReceiveDynamicMessage;
	ersm.handle = handle;

	getSignal = GetSignalInformationByHandle(handle);
	getMessage = GetMesssageInformationByHandle(getSignal);
	if((check_is_existed_handle(handle) == E_OK) || (getMessage != NULL))
	{
		if((getSignal->signal_length_type == ZERO_LENGTH_TYPE) || (getMessage->messageDirection == SEND))
		{
			getMessage->direct_send_event = OCCUR_DIRECT_SEND_EVENT;
		}
		else
		{
			ret = E_COM_ID;
		}

	}
	else
	{
		ret = E_COM_ID;
	}

	return ret;
}

StatusType Internal_get_message_status_service (MessageIdentifier handle)
{
	StatusType ret = E_OK;

	ersm.serviceID = COMServiceId_GetMessageStatus;
	ersm.handle = handle;

	ret = E_COM_ID;

	return ret;
}
*/



