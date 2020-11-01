/*
 * iso15765_TP.c
 *
 *  Created on: 2020. 4. 10.
 *      Author: kwon
 */
#include "stdint.h"
#include "iso15765_TP.h"
#include "string.h"
#include "isotp_define.h"

extern tpInfo_t tpConnectionInfo[TP_CONNECTION_COUNT];
extern uint8_t SendRawData(uint32_t id, uint8_t dlc, uint8_t *data);

//static
/*
static int16_t getHandleByTxID(uint32_t tpID,uint8_t addressMode)
{
    int16_t retHandle = INVALID_HANDLE;
    int16_t handleIndex;

    if(addressMode == NORMAL_ADDRESS)
    {
	    for(handleIndex = 0; handleIndex < TP_CONNECTION_COUNT; handleIndex++)
	    {
            if(tpConnectionInfo[handleIndex].sendID == tpID)
            {
           	    retHandle = handleIndex;
           	    break;
            }
	    }
    }

	return retHandle;
}
*/
static int16_t getHandleByRxID(int32_t tpID)
{
    int16_t retHandle = INVALID_HANDLE;
    int16_t handleIndex;

    for(handleIndex = 0; handleIndex < TP_CONNECTION_COUNT; handleIndex++)
    {
    	if(tpConnectionInfo[handleIndex].receiveID == tpID)
    	{
    		retHandle = handleIndex;
    	}
    }

    return retHandle;
}

//static

//API

//Delete API
uint8_t SetAddressMode(uint16_t tpHandle, uint32_t addressMode)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].addressMode = addressMode;
	}

	return ret;

}

//Delete API
uint8_t SetAddressType(uint16_t tpHandle, uint32_t addressMode)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].addressMode = addressMode;
	}

	return ret;
}

//Delete API
uint8_t SetSendID(uint16_t tpHandle, uint32_t sendID)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].sendID = sendID;
	}

	return ret;
}

//Delete API
uint8_t SetReceiveID(uint16_t tpHandle, uint32_t receiveID)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].receiveID = receiveID;
	}

	return ret;
}


uint8_t SetBaseAddress(uint16_t tpHandle, uint32_t baseAddress)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].baseAddress = baseAddress;
	}

	return ret;
}

uint8_t SetSourceAddress(uint16_t tpHandle, uint8_t sourceAddress)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].sourceAddress = sourceAddress;
	}

	return ret;

}

uint8_t SetTargetAddress(uint16_t tpHandle, uint8_t targetAddress)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].targetAddress = targetAddress;
	}

	return ret;

}

uint8_t SetAllAddressExtension(uint16_t tpHandle, uint8_t flag)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].allAddressExtension = flag;
	}

	return ret;

}

uint8_t SetAddressExtension(uint16_t tpHandle, uint8_t addressExtension)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].addressExtension = addressExtension;
	}

	return ret;
}

uint8_t SetTimeoutAs (uint16_t tpHandle, uint16_t timeoutAs)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadTimeoutAs = timeoutAs;
	}

	return ret;
}

uint8_t SetTimeoutAr(uint16_t tpHandle, uint16_t timeoutAr)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadTimeoutAr = timeoutAr;
	}

	return ret;
}

uint8_t SetTimeoutBs(uint16_t tpHandle, uint16_t timeoutBs)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadTimeoutBs = timeoutBs;
	}

	return ret;
}

uint8_t SetTimeoutCr(uint16_t tpHandle, uint16_t timeoutCr)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadTimeoutCr = timeoutCr;
	}

	return ret;
}

uint8_t SetPad(uint16_t tpHandle, uint8_t pad)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].pad = pad;
	}

	return ret;
}

uint8_t SetJ1939Priority(uint16_t tpHandle, uint8_t priority)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].priority = priority;
	}

	return ret;
}

uint8_t SetJ1939DataPage(uint16_t tpHandle, uint8_t dataPage)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].dataPage = dataPage;
	}

	return ret;
}

uint8_t SetJ1939ProtocolDataUnit(uint16_t tpHandle, uint8_t protocolDataUnit)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].protocolDataUnit = protocolDataUnit;
	}

	return ret;
}

uint8_t SetWaitMode(uint16_t tpHandle, uint8_t mode)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].waitingMode = mode;
	}

	return ret;
}

uint8_t SetWftMaxCount(uint16_t tpHandle, uint8_t wftmax)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].wftmax = wftmax;
	}

	return ret;
}

uint8_t SetWftMaxTime(uint16_t tpHandle, uint8_t wftMaxTime)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].wftMaxTime = wftMaxTime;
	}

	return ret;
}

uint8_t SetUseFlowControl(uint16_t tpHandle, uint8_t flag)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].useFlowControl = flag;
	}

	return ret;
}

uint8_t SetUseBlockSize(uint16_t tpHandle, uint8_t flag)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].useBlockSize = flag;
	}

	return ret;
}

uint8_t SetUseStmin(uint16_t tpHandle, uint8_t flag)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].useSTmin = flag;
	}

	return ret;
}

uint8_t SetSTmin(uint16_t tpHandle, uint8_t STmin)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadOwnSTmin = STmin;
	}

	return ret;
}

uint8_t SetBlockSize(uint16_t tpHandle, uint8_t bs)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].reloadOwnBlockSize = bs;
	}

	return ret;
}

uint8_t SetFirstSN(uint16_t tpHandle, uint8_t SN)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].firstSN = SN;
	}

	return ret;
}

uint8_t SetUseRxMask(uint16_t tpHandle, uint8_t flag)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].useRxMask = flag;
	}

	return ret;
}

uint8_t SetRxMask(uint16_t tpHandle, uint8_t mask)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].rxMask = mask;
	}

	return ret;
}

uint8_t SetMessageCount(uint16_t tpHandle, uint8_t count)
{
	uint8_t ret = E_ISOTP_OK;

	if(tpHandle >= TP_CONNECTION_COUNT)
	{
		ret = E_ISOTP_INVALID_HANDLE;
	}
	else
	{
		tpConnectionInfo[tpHandle].messageCount = count;
	}

	return ret;
}

uint8_t TpInit(void)
{
  return 0;
}


uint8_t TpTransmit(uint8_t TpHandle, uint8_t* TpData, uint32_t TpDataSize)
{
	uint8_t ret = E_ISOTP_OK;
	if(TpHandle > TP_CONNECTION_COUNT)
	{
	    ret = E_ISOTP_INVALID_HANDLE;
	}
	else if(TpDataSize == 0)
	{
		ret = E_ISOTP_INVALID_SIZE;
	}
	else
	{
		tpConnectionInfo[TpHandle].sendFrameBuffer = TpData; //전송 버퍼 설정
		tpConnectionInfo[TpHandle].sendFrameSize = TpDataSize;
		tpConnectionInfo[TpHandle].totalSendFrameSize = TpDataSize;
		tpConnectionInfo[TpHandle].sendFrameOffset = 0;

		//일반 CAN Normal
		if(CAN_DL <= 8)
		{
			if(TpDataSize <= CAN_DL - 1)
			{
				tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = SINGLE_FRAME;
				tpConnectionInfo[TpHandle].sendSideInfo.status  = SF_SEND;
			}
			else
			{
				if(TpDataSize <= 4095)
				{
				    tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = FIRST_FRAME;
				    tpConnectionInfo[TpHandle].sendSideInfo.status  = FF_SEND;

				}
				else
				{
				    tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = FIRST_FRAME;
				    tpConnectionInfo[TpHandle].sendSideInfo.status  = FF_SEND_EXTENSION;
				}
			}
		}
		else // CAN FD
		{
			if(TpDataSize <= CAN_DL - 2)
			{
				tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = SINGLE_FRAME;
				tpConnectionInfo[TpHandle].sendSideInfo.status  = SF_SEND_EXTENSION;
			}
			else
			{
				if(TpDataSize <= 4095)
				{
				    tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = FIRST_FRAME;
				    tpConnectionInfo[TpHandle].sendSideInfo.status  = FF_SEND;
				}
				else
				{
				    tpConnectionInfo[TpHandle].sendSideInfo.sendFrameType = FIRST_FRAME;
				    tpConnectionInfo[TpHandle].sendSideInfo.status  = FF_SEND_EXTENSION;
				}
			}
		}
		ret = E_ISOTP_OK;
	}



	return ret;

}

void TimerTpTask()
{
	uint16_t handleIndex = 0;
    for(handleIndex = 0; handleIndex < TP_CONNECTION_COUNT; handleIndex++)
	{
	    if (tpConnectionInfo[handleIndex].timeoutAs > 0) //전송 처리 확인시간
	    {
	    	tpConnectionInfo[handleIndex].timeoutAs--;
	    	if(tpConnectionInfo[handleIndex].timeoutAs == 0)
	    	{
	    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].sendSideInfo.status = INIT_STATUS;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
	    	}
	    }

	    if (tpConnectionInfo[handleIndex].timeoutAr > 0) // FlowControl 전송확인시간
	    {
	    	tpConnectionInfo[handleIndex].timeoutAr--;
	    	if(tpConnectionInfo[handleIndex].timeoutAr == 0)
	    	{
	    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].sendSideInfo.status = INIT_STATUS;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
	    	}
	    }

	    if (tpConnectionInfo[handleIndex].timeoutBs > 0)//FlowControl 대기  timeout시간
	    {
	    	tpConnectionInfo[handleIndex].timeoutBs--;
	    	if(tpConnectionInfo[handleIndex].timeoutBs == 0)
	    	{
	    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].sendSideInfo.status = INIT_STATUS;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
	    	}
	    }

	    if (tpConnectionInfo[handleIndex].timeoutCr > 0) // Consecutive Frame 수신 Timeout시간
	    {
	    	tpConnectionInfo[handleIndex].timeoutCr--;
	    	if(tpConnectionInfo[handleIndex].timeoutCr == 0)
	    	{
	    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].sendSideInfo.status = INIT_STATUS;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
	    		tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
	    	}
	    }
	}

}


void SendTpConfirm(uint32_t tpSendID, uint8_t* tpData)
{
	uint16_t handleIndex = 0;
	uint8_t frameType;
	uint8_t tpHandle;

    //tpHandle = getHandleByTxID(tpSendID);
    //FrameType을 가져온다.

//
	frameType = TP_FRAME_TYPE_OFFSET(tpData[0]);

    for(handleIndex = 0; handleIndex < TP_CONNECTION_COUNT; handleIndex++)
	{
    	switch(frameType)
    	{
            case SINGLE_FRAME:
            case CONSECUTIVE_FRAME:
        	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
        	    {
        	    	if(tpSendID == tpConnectionInfo[handleIndex].sendID)
        	    	{
        	    		tpConnectionInfo[handleIndex].timeoutAs = 0;
        	    	}
        	    	else
        	    	{
        	    		;
        	    	}
        	    }
        	    else // 다른 어드레스
        	    {

        	    }
                break;

            case FLOW_CONTROL:
        	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
        	    {
        	    	if(tpSendID == tpConnectionInfo[handleIndex].sendID)
        	    	{
        	    		tpConnectionInfo[handleIndex].timeoutAr = 0;
        	    	}
        	    	else
        	    	{
                        ;
        	    	}
        	    }
        	    else//다른 어드레스
        	    {

        	    }
    		    break;

            default:
            	break;
    	}



	}
}

void SendTpTask()
{
	uint16_t handleIndex = 0;
	uint8_t status = 0;
    uint8_t getValue = 0;
    uint8_t sendDataOffset = 0;
    uint8_t sendDataStartPosition = 0;
    uint8_t frameRequest = 0;

    for(handleIndex = 0; handleIndex < TP_CONNECTION_COUNT; handleIndex++)
	{
    	if(tpConnectionInfo[handleIndex].totalSendFrameSize < tpConnectionInfo[handleIndex].sendFrameOffset)
    	{
            status = 1;
    	}

    	if(handleIndex >= TP_CONNECTION_COUNT)
    	{
            status = 1;
    	}

    	if(tpConnectionInfo[handleIndex].sendProtocolRequest == NOT_TRANSMIT_PROTOCOL_DATA)
    	{
            //전송을 요청 한다.
		    getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].sendProtocolBuffer);

		    //전송요청이 완료되면,
            if(getValue == TRUE)
            {
            	tpConnectionInfo[handleIndex].timeoutAs = tpConnectionInfo[handleIndex].reloadTimeoutAs;
            	tpConnectionInfo[handleIndex].sendProtocolRequest = TRANSMIT_PROTOCOL_DATA;
            }
            else
            {
            	tpConnectionInfo[handleIndex].sendProtocolRequest = NOT_TRANSMIT_PROTOCOL_DATA;
            }
    	}
    	else
    	{
		    switch(tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType)
		    {
		    	case SINGLE_FRAME:
                    //주소모드가 일반 주소 모드일 경우
                    //패드를 복사
                    memset(tpConnectionInfo[handleIndex].sendProtocolBuffer,tpConnectionInfo[handleIndex].pad,CAN_DL);

                    //일반 CAN Only일 경우
                    if(tpConnectionInfo[handleIndex].sendSideInfo.status == SF_SEND) //Normal CAN
                    {
    		    	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
    		    	    {
                    	    //싱글프레임 type을 설정하고 전송 사이지를 설정한다.
                    	    tpConnectionInfo[handleIndex].sendProtocolBuffer[0] = SINGLE_FRAME_TYPE_OFFSET | tpConnectionInfo[handleIndex].sendFrameSize;
                    	    //전송데이터를 복사한다.
                    	    memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[NORMAL_SINGLE_FRAME_DATA_OFFSET], tpConnectionInfo[handleIndex].sendFrameBuffer,tpConnectionInfo[handleIndex].sendFrameSize);
    		    	    }
    		    	    else
    		    	    {

    		    	    }

                    }
                    else if(tpConnectionInfo[handleIndex].sendSideInfo.status == SF_SEND_EXTENSION) // CAN_DL > 8, CAN FD
                    {
    		    	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
    		    	    {
                    	    //Byte 0: 0000, Byte 1 : SF_DL
                    	    //싱글프레임 type을 설정한다.
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[0] = SINGLE_FRAME_TYPE_OFFSET;
                      	    //전송 사이지를 설정한다.
                            tpConnectionInfo[handleIndex].sendProtocolBuffer[1] = tpConnectionInfo[handleIndex].sendFrameSize;
                            //전송 데이터를 복사한다.
                      	    memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[NORMAL_SINGLE_FRAME_DATA_OFFSET_EXTENSION], tpConnectionInfo[handleIndex].sendFrameBuffer,tpConnectionInfo[handleIndex].sendFrameSize);
    		    	    }
    		    	    else
    		    	    {

    		    	    }
                    }
		    	    //전송을 요청 한다.
		    		getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].sendProtocolBuffer);

		    		//전송요청이 완료되면,
		            if(getValue == TRUE)
		            {
		            	//AS Timeout값을 설정, 재요청을 방지하기 위해 FrameType 및 상태값을 초기화 한다.
		            	tpConnectionInfo[handleIndex].timeoutAs = tpConnectionInfo[handleIndex].reloadTimeoutAs;
		                tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
		                tpConnectionInfo[handleIndex].sendSideInfo.status  = INIT_STATUS;
		                TpSendConfirmHook(handleIndex,tpConnectionInfo[handleIndex].sendFrameBuffer,tpConnectionInfo[handleIndex].totalSendFrameSize);
		            }

		            break;

		    	case FIRST_FRAME:
                    //주소모드가 일반 주소 모드일 경우
                    memset(tpConnectionInfo[handleIndex].sendProtocolBuffer,tpConnectionInfo[handleIndex].pad,CAN_DL);
                    //일반 CAN Only일 경우
                    if(tpConnectionInfo[handleIndex].sendSideInfo.status == FF_SEND) //Normal CAN
                    {
    		    	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
    		    	    {
    		    	    	sendDataOffset = CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET; //6
                    	    //First Frame type을 설정하고 전송 사이지를 설정한다.
    		    	    	tpConnectionInfo[handleIndex].sendProtocolBuffer[0] = FIRST_FRAME_TYPE_OFFSET | ((tpConnectionInfo[handleIndex].sendFrameSize & 0xF00) >> 8);
                    	    tpConnectionInfo[handleIndex].sendProtocolBuffer[1] = (tpConnectionInfo[handleIndex].sendFrameSize & 0xFF);

                    	    //전송데이터를 복사한다.
                    	    tpConnectionInfo[handleIndex].sendSN = tpConnectionInfo[handleIndex].firstSN;

                    	    memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[NORMAL_FIRST_FRAME_DATA_OFFSET], tpConnectionInfo[handleIndex].sendFrameBuffer,sendDataOffset);

    		    	    }
    		    	    else
    		    	    {

    		    	    }

                    }
                    else if(tpConnectionInfo[handleIndex].sendSideInfo.status == FF_SEND_EXTENSION) // CAN_DL > 8, CAN FD
                    {
    		    	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
    		    	    {
                    	    sendDataOffset = CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION;//2

                    	    //First Frame type을 설정한다.
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[0] = FIRST_FRAME_TYPE_OFFSET;

                      	    //First Frame 전송사이즈를 설정한다.
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[1] = 0x00;
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[2] = (tpConnectionInfo[handleIndex].sendFrameSize & 0xFF000000) >> 24;
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[3] = (tpConnectionInfo[handleIndex].sendFrameSize & 0xFF0000) >> 16;
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[4] = (tpConnectionInfo[handleIndex].sendFrameSize & 0xFF00) >> 8 ;
                      	    tpConnectionInfo[handleIndex].sendProtocolBuffer[5] = (tpConnectionInfo[handleIndex].sendFrameSize & 0xFF);

                            //전송 데이터를 복사한다.
                      	    memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION], tpConnectionInfo[handleIndex].sendFrameBuffer,sendDataOffset);
    		    	    }
    		    	    else
    		    	    {

    		    	    }
                    }

                    //전송을 요청 한다.
                    getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].sendProtocolBuffer);
                    //전송요청이 완료되면,
                    if(getValue == TRUE)
                    {
                    	if(tpConnectionInfo[handleIndex].sendSideInfo.status == FF_SEND)
                    	{
                    		tpConnectionInfo[handleIndex].sendFrameOffset = tpConnectionInfo[handleIndex].sendFrameOffset + sendDataOffset;
                    		tpConnectionInfo[handleIndex].sendFrameSize = tpConnectionInfo[handleIndex].sendFrameSize - sendDataOffset;
                    	}
                    	else if (tpConnectionInfo[handleIndex].sendSideInfo.status == FF_SEND_EXTENSION)
                    	{
                    		tpConnectionInfo[handleIndex].sendFrameOffset = tpConnectionInfo[handleIndex].sendFrameOffset + sendDataOffset;
                    		tpConnectionInfo[handleIndex].sendFrameSize = tpConnectionInfo[handleIndex].sendFrameSize - sendDataOffset;
                    	}
                    	else
                    	{
                    		;
                    	}

                    	if(tpConnectionInfo[handleIndex].useFlowControl == TRUE)
                    	{
                    		tpConnectionInfo[handleIndex].sendSideInfo.status  = FC_WAIT;
                    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
                    		tpConnectionInfo[handleIndex].timeoutBs = tpConnectionInfo[handleIndex].reloadTimeoutBs;
                    	}
                    	else
                    	{
                    		tpConnectionInfo[handleIndex].sendSideInfo.status  = CF_SEND;
                    		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;

                    		tpConnectionInfo[handleIndex].reloadReceiveSTmin = tpConnectionInfo[handleIndex].reloadOwnSTmin / TP_TASK_TIME;
                    		tpConnectionInfo[handleIndex].receiveSTmin = tpConnectionInfo[handleIndex].reloadReceiveSTmin;


                    		tpConnectionInfo[handleIndex].receiveBlockSize = 0;
                    		tpConnectionInfo[handleIndex].reloadReceiveBlockSize = 0;
                    	}

                    	//AS Timeout값을 설정
                    	tpConnectionInfo[handleIndex].timeoutAs = tpConnectionInfo[handleIndex].reloadTimeoutAs;
                    }
		    		break;

		    	case CONSECUTIVE_FRAME:
                    //CF 전송 처리
		    	    if(tpConnectionInfo[handleIndex].sendSideInfo.status == CF_SEND)
		    		{
                        if(tpConnectionInfo[handleIndex].reloadReceiveSTmin == 0)
                        {
                        	//FlowControl을 사용하지 않거나, 수신받은 BlockSize값이 0일경우
                        	if(tpConnectionInfo[handleIndex].reloadReceiveBlockSize == 0)
                        	{
                        		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;
                        		tpConnectionInfo[handleIndex].sendSideInfo.status = CF_SEND;
                        		frameRequest = TRUE;
                        	}
                        	else
                        	{
                                if(tpConnectionInfo[handleIndex].receiveBlockSize > 0)
                                {
                                	tpConnectionInfo[handleIndex].receiveBlockSize--;
                                	frameRequest = TRUE;

                                	if(tpConnectionInfo[handleIndex].receiveBlockSize == 0)
                                	{
                                		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
                                		tpConnectionInfo[handleIndex].sendSideInfo.status = FC_WAIT;
                                		tpConnectionInfo[handleIndex].timeoutBs = tpConnectionInfo[handleIndex].reloadTimeoutBs;
                                	}
                                	else
                                	{
                                		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;
                                		tpConnectionInfo[handleIndex].sendSideInfo.status = CF_SEND;
                                	}
                                }
                        	}

                        }
                        else
                        {
                            if(tpConnectionInfo[handleIndex].receiveSTmin > 0)
                            {
                            	tpConnectionInfo[handleIndex].receiveSTmin--;
                            	if(tpConnectionInfo[handleIndex].receiveSTmin == 0)
                            	{
                                    if(tpConnectionInfo[handleIndex].reloadReceiveBlockSize == 0)
                                    {
                                    	tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;
                                    	tpConnectionInfo[handleIndex].sendSideInfo.status = CF_SEND;
                                    	tpConnectionInfo[handleIndex].receiveSTmin = tpConnectionInfo[handleIndex].reloadReceiveSTmin;
                                    	frameRequest = TRUE;
                                    }
                                    else
                                    {
                                         if(tpConnectionInfo[handleIndex].receiveBlockSize > 0)
                                         {
                                         	tpConnectionInfo[handleIndex].receiveBlockSize--;
                                         	if(tpConnectionInfo[handleIndex].receiveBlockSize == 0)
                                         	{
                                         		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
                                         		tpConnectionInfo[handleIndex].sendSideInfo.status = FC_WAIT;
                                         		tpConnectionInfo[handleIndex].timeoutBs = tpConnectionInfo[handleIndex].reloadTimeoutBs;
                                         	}
                                         	else
                                         	{
                                         		tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;
                                         		tpConnectionInfo[handleIndex].sendSideInfo.status = CF_SEND;
                                         		tpConnectionInfo[handleIndex].receiveSTmin = tpConnectionInfo[handleIndex].reloadReceiveSTmin;
                                         	}
                                         	frameRequest = TRUE;
                                         }
                                    }
                            	}
                            }
                        }
		    		}

		    	    if(frameRequest == TRUE)
		    	    {
		    	    	frameRequest = FALSE;

		    	    	memset(tpConnectionInfo[handleIndex].sendProtocolBuffer,tpConnectionInfo[handleIndex].pad,CAN_DL);

		    	    	if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
		    		    {
                            tpConnectionInfo[handleIndex].sendProtocolBuffer[0] = COSECUTIVE_FRAME_TYPE_OFFSET | tpConnectionInfo[handleIndex].sendSN;
                            sendDataOffset = CAN_DL - NORMAL_CONSECUTIVE_FRAME_DATA_OFFSET;//7
                            sendDataStartPosition = NORMAL_CONSECUTIVE_FRAME_DATA_OFFSET;//1
		    		    }
		    	    	else
		    	    	{

		    	    	}

                        if(tpConnectionInfo[handleIndex].sendFrameSize > sendDataOffset)
                        {
                            memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[sendDataStartPosition], &tpConnectionInfo[handleIndex].sendFrameBuffer[tpConnectionInfo[handleIndex].sendFrameOffset],sendDataOffset);
                            tpConnectionInfo[handleIndex].sendFrameOffset =  tpConnectionInfo[handleIndex].sendFrameOffset + sendDataOffset;
                            tpConnectionInfo[handleIndex].sendFrameSize = tpConnectionInfo[handleIndex].sendFrameSize - sendDataOffset;

                            tpConnectionInfo[handleIndex].sendSN++;
                            if(tpConnectionInfo[handleIndex].sendSN > 0xF)
                            {
                            	tpConnectionInfo[handleIndex].sendSN = 0x0;
                            }
                            else
                            {

                            }
                        }
		    	        else
		    	        {
		    	        	memcpy(&tpConnectionInfo[handleIndex].sendProtocolBuffer[sendDataStartPosition], &tpConnectionInfo[handleIndex].sendFrameBuffer[tpConnectionInfo[handleIndex].sendFrameOffset],tpConnectionInfo[handleIndex].sendFrameSize);
                            tpConnectionInfo[handleIndex].sendFrameOffset = 0;
                            tpConnectionInfo[handleIndex].sendFrameSize = 0;
                            tpConnectionInfo[handleIndex].sendSideInfo.sendFrameType = INVALID_FRAME;
                            tpConnectionInfo[handleIndex].sendSideInfo.status = INIT_STATUS;

                            TpSendConfirmHook(handleIndex,tpConnectionInfo[handleIndex].sendFrameBuffer,tpConnectionInfo[handleIndex].totalSendFrameSize);
		    	        }
                        //전송을 요청 한다.
		    		    getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].sendProtocolBuffer);

		    		    //전송요청이 완료되면,
		                if(getValue == TRUE)
		                {
		                	tpConnectionInfo[handleIndex].timeoutAs = tpConnectionInfo[handleIndex].reloadTimeoutAs;
		                	tpConnectionInfo[handleIndex].sendProtocolRequest = TRANSMIT_PROTOCOL_DATA;
		                }
		                else
		                {
		                	tpConnectionInfo[handleIndex].sendProtocolRequest = NOT_TRANSMIT_PROTOCOL_DATA;
		                }
		    	    }

		    		break;
                    //주소모드가 일반 주소 모드일 경우
		    }
    	}

    	if(tpConnectionInfo[handleIndex].receiveProtocolRequest == NOT_TRANSMIT_PROTOCOL_DATA)
    	{
            //전송을 요청 한다.
		    getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].receiveProtocolBuffer);

		    //전송요청이 완료되면,
            if(getValue == TRUE)
            {
            	tpConnectionInfo[handleIndex].timeoutAr = tpConnectionInfo[handleIndex].reloadTimeoutAr;
            	tpConnectionInfo[handleIndex].receiveProtocolRequest = TRANSMIT_PROTOCOL_DATA;
            }
            else
            {
            	tpConnectionInfo[handleIndex].receiveProtocolRequest = NOT_TRANSMIT_PROTOCOL_DATA;
            }
    	}
    	else
    	{
		    switch(tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType)
		    {
		        case FLOW_CONTROL:
                    if(tpConnectionInfo[handleIndex].receiveSideInfo.status == FC_SEND)
                    {
                        if(tpConnectionInfo[handleIndex].receiveFrameSize > tpConnectionInfo[handleIndex].receiveBufferMaxSize)
                    	{
                    		status = OVERFLOW;
                    		frameRequest = TRUE;
                    		tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
                    		tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
                    	}
                        else if((tpConnectionInfo[handleIndex].waitingMode == TRUE) && (tpConnectionInfo[handleIndex].reloadWftmax > 0))
                    	{
                    		if(tpConnectionInfo[handleIndex].wftmax == tpConnectionInfo[handleIndex].reloadWftmax)
                    		{
                    			tpConnectionInfo[handleIndex].wftmax--;
                   				tpConnectionInfo[handleIndex].waitTime = tpConnectionInfo[handleIndex].wftMaxTime;
       	    					tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = FLOW_CONTROL;
       	    					tpConnectionInfo[handleIndex].receiveSideInfo.status = FC_SEND;
       	    					status = WAIT;
                   				frameRequest = TRUE;
                    		}
                    		else
                    		{
                    			if(tpConnectionInfo[handleIndex].wftmax > 0)
                    			{
                       				if(tpConnectionInfo[handleIndex].waitTime > 0)
                       				{
                       					tpConnectionInfo[handleIndex].waitTime--;
                       					if(tpConnectionInfo[handleIndex].waitTime == 0)
                       					{
                       						tpConnectionInfo[handleIndex].wftmax--;
                       						tpConnectionInfo[handleIndex].waitTime = tpConnectionInfo[handleIndex].wftMaxTime;
                       						tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = FLOW_CONTROL;
                       						tpConnectionInfo[handleIndex].receiveSideInfo.status = FC_SEND;
                       						status = WAIT;
                       						frameRequest = TRUE;
                       					}
                       				}
                    			}
                    			else
                    			{
                       				if(tpConnectionInfo[handleIndex].waitTime > 0)
                       				{
                       					tpConnectionInfo[handleIndex].waitTime--;
                       					if(tpConnectionInfo[handleIndex].waitTime == 0)
                       					{
                       						tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
                       						tpConnectionInfo[handleIndex].receiveSideInfo.status = INIT_STATUS;
                       						//call ErrorCallback()
                       					}
                       				}
                    			}
                    		}
                    	}
                        else
                        {
                        	status = CTS;
                        	frameRequest = TRUE;
       						tpConnectionInfo[handleIndex].receiveSideInfo.sendFrameType = INVALID_FRAME;
       						tpConnectionInfo[handleIndex].receiveSideInfo.status = CF_WAIT;
       						tpConnectionInfo[handleIndex].timeoutCr = tpConnectionInfo[handleIndex].reloadTimeoutCr;
                        }

                        if(frameRequest == TRUE)
                        {
                        	frameRequest = FALSE;
	        	    	    memset(tpConnectionInfo[handleIndex].receiveProtocolBuffer,tpConnectionInfo[handleIndex].pad,CAN_DL);

	        	    	    if(tpConnectionInfo[handleIndex].addressMode == NORMAL_ADDRESS)
	        	    	    {
	        	    	    	tpConnectionInfo[handleIndex].receiveProtocolBuffer[0] = FLOW_CONTROL_OFFSET | status;
	        	    	    	tpConnectionInfo[handleIndex].receiveProtocolBuffer[1] = tpConnectionInfo[handleIndex].reloadOwnBlockSize;
	        	    	    	tpConnectionInfo[handleIndex].receiveProtocolBuffer[2] = tpConnectionInfo[handleIndex].reloadOwnSTmin;
	        	    	    }
	        	    	    else
	        	    	    {

	        	    	    }

	        	            //전송을 요청 한다.
	        			    getValue = SendRawData(tpConnectionInfo[handleIndex].sendID, CAN_DL, tpConnectionInfo[handleIndex].receiveProtocolBuffer);

	        			    //전송요청이 완료되면,
	        	            if(getValue == TRUE)
	        	            {
	        	            	tpConnectionInfo[handleIndex].timeoutAr = tpConnectionInfo[handleIndex].reloadTimeoutAr;
	        	            	tpConnectionInfo[handleIndex].receiveProtocolRequest = TRANSMIT_PROTOCOL_DATA;
	        	            }
	        	            else
	        	            {
	        	            	tpConnectionInfo[handleIndex].receiveProtocolRequest = NOT_TRANSMIT_PROTOCOL_DATA;
	        	            }
                        }

                    }
	        	    break;
		    }
    	}

	}
}

void ReceiveTpTask(uint32_t tpReceiveID, uint8_t *tpBuffer)
{
	uint8_t error = 0;
	int16_t tpHandle = 0;
    uint8_t frameType = 0;
    uint8_t getSN = 0;
    uint8_t blockSize = 0;
    uint8_t stmin = 0;
    uint8_t fcStatus = 0;
    uint8_t receiveDataOffset;
    uint8_t receiveDataStartPosition = 0;
    //수신 ID에 해당하는 Handle값을 가져 온다. 핸들 존재여부 루틴을 추가
    tpHandle = getHandleByRxID(tpReceiveID);
    //FrameType을 가져온다.


    if(tpHandle != INVALID_HANDLE)
    {
    	if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
    	{
    		frameType = TP_FRAME_TYPE_OFFSET(tpBuffer[0]);
    	}

	    switch(frameType)
	    {
            case SINGLE_FRAME:
            	//수신데이터플 보관할 수신버퍼를 사용자에게 설정하도록 Callback 함수를 호출한다.
            	tpConnectionInfo[tpHandle].receiveFrameBuffer = TpBufferHook(tpHandle);

                //CAN FD일 경우 Byte 0: 0000, Byte 1 : SF_DL
                if(CAN_DL > 8)
                {
                    if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
                    {
                	    //tpConnectionInfo[tpHandle].receiveSideInfo.receiveFrameType = SINGLE_FRAME;
                	    tpConnectionInfo[tpHandle].receiveFrameSize = tpBuffer[1];
                	    tpConnectionInfo[tpHandle].totalReceiveFrameSize = tpBuffer[1];
                	    memcpy(tpConnectionInfo[tpHandle].receiveFrameBuffer, &tpBuffer[NORMAL_SINGLE_FRAME_DATA_OFFSET_EXTENSION],tpConnectionInfo[tpHandle].receiveFrameSize);
                    }
                    else
                    {

                    }

                }
                else if(CAN_DL == 8) // 일반 CAN 일경우
                {
                    if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
                    {
                	    //tpConnectionInfo[tpHandle].receiveSideInfo.receiveFrameType = SINGLE_FRAME;
                	    tpConnectionInfo[tpHandle].receiveFrameSize = (tpBuffer[0] & 0x0F);
                	    tpConnectionInfo[tpHandle].totalReceiveFrameSize = (tpBuffer[0] & 0x0F);
                	    memcpy(tpConnectionInfo[tpHandle].receiveFrameBuffer, &tpBuffer[NORMAL_SINGLE_FRAME_DATA_OFFSET],tpConnectionInfo[tpHandle].receiveFrameSize);
                    }
                    else
                    {

                    }
                }

                // callback
                TpReceiveConfirmHook(tpHandle,tpConnectionInfo[tpHandle].receiveFrameBuffer,tpConnectionInfo[tpHandle].totalReceiveFrameSize);
            	break;

            case FIRST_FRAME:

            	tpConnectionInfo[tpHandle].receiveFrameBuffer = TpBufferHook(tpHandle);

            	if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
                {
                    if(((tpBuffer[0] & 0xF) == 0) && (tpBuffer[1] == 0)) // FF_DL > 4095 일 경우
                    {
                        tpConnectionInfo[tpHandle].receiveFrameSize = (tpBuffer[2] << 24) | (tpBuffer[3] << 16) | (tpBuffer[4] << 8) | (tpBuffer[5]);
                        tpConnectionInfo[tpHandle].totalReceiveFrameSize = (tpBuffer[2] << 24) | (tpBuffer[3] << 16) | (tpBuffer[4] << 8) | (tpBuffer[5]);

                        tpConnectionInfo[tpHandle].receiveFrameOffset = CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION;
                        tpConnectionInfo[tpHandle].receiveFrameSize = tpConnectionInfo[tpHandle].receiveFrameSize - (CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION + 1);

                        memcpy(tpConnectionInfo[tpHandle].receiveFrameBuffer,&tpBuffer[NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION],CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION);
                    }
                    else
                    {
                        tpConnectionInfo[tpHandle].receiveFrameSize = (((tpBuffer[0] & 0xF) << 8) | (tpBuffer[1]));
                        tpConnectionInfo[tpHandle].totalReceiveFrameSize = (((tpBuffer[0] & 0xF) << 8) | (tpBuffer[1]));

                        tpConnectionInfo[tpHandle].receiveFrameOffset = CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET;
                        tpConnectionInfo[tpHandle].receiveFrameSize = tpConnectionInfo[tpHandle].receiveFrameSize - (CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET);

                        memcpy(tpConnectionInfo[tpHandle].receiveFrameBuffer,&tpBuffer[NORMAL_FIRST_FRAME_DATA_OFFSET],CAN_DL - NORMAL_FIRST_FRAME_DATA_OFFSET);
                    }


                }
            	else
            	{

            	}

                if(tpConnectionInfo[tpHandle].useFlowControl == TRUE)
                {
                    tpConnectionInfo[tpHandle].receiveSideInfo.sendFrameType = FLOW_CONTROL;
                    tpConnectionInfo[tpHandle].receiveSideInfo.status = FC_SEND;
                    tpConnectionInfo[tpHandle].ownBlockSize = tpConnectionInfo[tpHandle].reloadOwnBlockSize;
                    if(tpConnectionInfo[tpHandle].waitingMode == TRUE)
                    {
                    	tpConnectionInfo[tpHandle].wftmax = tpConnectionInfo[tpHandle].reloadWftmax;
                    }
                    else
                    {
                    	tpConnectionInfo[tpHandle].wftmax = 0;
                    }
                }
                else
                {
                	tpConnectionInfo[tpHandle].timeoutCr = tpConnectionInfo[tpHandle].reloadTimeoutCr;
                	tpConnectionInfo[tpHandle].receiveSideInfo.status = CF_WAIT;
                }

                tpConnectionInfo[tpHandle].receiveSN = tpConnectionInfo[tpHandle].firstSN;

                break;

            case FLOW_CONTROL:
            	if(tpConnectionInfo[tpHandle].sendSideInfo.status == FC_WAIT)
            	{
            	    if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
                    {
            	        blockSize = tpBuffer[1];
            	        stmin = tpBuffer[2];
            	        fcStatus = tpBuffer[0] & 0x0F;
                    }
            	    else
            	    {

            	    }

            	    if(fcStatus == OVERFLOW)
            	    {
            	    	tpConnectionInfo[tpHandle].sendSideInfo.status = INIT_STATUS;
            	    	tpConnectionInfo[tpHandle].sendSideInfo.sendFrameType = INVALID_FRAME;
            	    	//call ErrorCallback()
            	    }
            	    else if(fcStatus == CTS)
            	    {
                        tpConnectionInfo[tpHandle].receiveBlockSize = blockSize;
                        tpConnectionInfo[tpHandle].reloadReceiveBlockSize = blockSize;

                        if(stmin <= 0x7F)
                        {
						    tpConnectionInfo[tpHandle].receiveSTmin = stmin;
						    tpConnectionInfo[tpHandle].reloadReceiveSTmin = stmin;
                        }
                        else if((stmin >= 0x80) && (stmin <= 0xF0))
                        {
                        	tpConnectionInfo[tpHandle].receiveSTmin = 0x7F;
                        	tpConnectionInfo[tpHandle].reloadReceiveSTmin = 0x7F;
                        }
                        else if((stmin >= 0xF1) && (stmin <= 0xF9))
                        {
                        	tpConnectionInfo[tpHandle].receiveSTmin = 0;
                        	tpConnectionInfo[tpHandle].reloadReceiveSTmin = 0;
                        }
                        else
                        {
                        	tpConnectionInfo[tpHandle].receiveSTmin = 0x7F;
                        	tpConnectionInfo[tpHandle].reloadReceiveSTmin = 0x7F;
                        }
                        //TaskTime에 따라 계산

                        tpConnectionInfo[tpHandle].reloadReceiveSTmin = tpConnectionInfo[tpHandle].reloadReceiveSTmin / TP_TASK_TIME;
                        tpConnectionInfo[tpHandle].receiveSTmin = tpConnectionInfo[tpHandle].reloadReceiveSTmin + 1;

            	    	tpConnectionInfo[tpHandle].sendSideInfo.status = CF_SEND;
            	    	tpConnectionInfo[tpHandle].sendSideInfo.sendFrameType = CONSECUTIVE_FRAME;
            	    	tpConnectionInfo[tpHandle].timeoutBs = 0;
            	    }
            	    else if(fcStatus == WAIT)
            	    {
            	    	tpConnectionInfo[tpHandle].timeoutBs = 0;
            	    	if(tpConnectionInfo[tpHandle].waitingMode == TRUE)
            	    	{
                	    	tpConnectionInfo[tpHandle].sendSideInfo.status = FC_WAIT;
                	    	tpConnectionInfo[tpHandle].sendSideInfo.sendFrameType = INVALID_FRAME;
                	    	tpConnectionInfo[tpHandle].timeoutBs = tpConnectionInfo[tpHandle].reloadTimeoutBs;
            	    	}
            	    	else
            	    	{
                	    	tpConnectionInfo[tpHandle].sendSideInfo.status = INIT_STATUS;
                	    	tpConnectionInfo[tpHandle].sendSideInfo.sendFrameType = INVALID_FRAME;
            	    	}

            	    }
            	}
            	break;

            case CONSECUTIVE_FRAME:
            	if(tpConnectionInfo[tpHandle].receiveSideInfo.status == CF_WAIT)
            	{
            	    if(tpConnectionInfo[tpHandle].addressMode == NORMAL_ADDRESS)
                    {
            	    	getSN = (tpBuffer[0] & 0x0F);
            	    	receiveDataOffset = CAN_DL - NORMAL_CONSECUTIVE_FRAME_DATA_OFFSET;
            	    	receiveDataStartPosition = NORMAL_CONSECUTIVE_FRAME_DATA_OFFSET;
                    }
            	    else
            	    {

            	    }

            	    if(getSN == tpConnectionInfo[tpHandle].receiveSN)
                    {
                        if(tpConnectionInfo[tpHandle].useFlowControl == TRUE)
                        {
                        	if(tpConnectionInfo[tpHandle].receiveSN == 0xF)
                        	{
                        		tpConnectionInfo[tpHandle].receiveSN = 0x0;
                        	}
                        	else
                        	{
                        		tpConnectionInfo[tpHandle].receiveSN++;
                        	}

                        	if(tpConnectionInfo[tpHandle].ownBlockSize > 0)
                        	{
                        		tpConnectionInfo[tpHandle].ownBlockSize--;
                        		if(tpConnectionInfo[tpHandle].ownBlockSize == 0)
                        		{
                        			tpConnectionInfo[tpHandle].receiveSideInfo.sendFrameType = FLOW_CONTROL;
                        			tpConnectionInfo[tpHandle].receiveSideInfo.status = FC_SEND;
                        			tpConnectionInfo[tpHandle].ownBlockSize = tpConnectionInfo[tpHandle].reloadOwnBlockSize;
                        			tpConnectionInfo[tpHandle].timeoutCr = 0; // 현재 FC-CF 사이클에서   Consecutive 수신이 끝났으므로 crTimeout값을 초기화 해야 한다.
                        		}
                        		else
                        		{
                        			tpConnectionInfo[tpHandle].receiveSideInfo.sendFrameType = INVALID_FRAME;
                        			tpConnectionInfo[tpHandle].receiveSideInfo.status = CF_WAIT;
                        			tpConnectionInfo[tpHandle].timeoutCr = tpConnectionInfo[tpHandle].reloadTimeoutCr;
                        		}
                        	}
                        }
                        else // not use Flow Control
                        {
            	    		tpConnectionInfo[tpHandle].receiveSideInfo.sendFrameType = INVALID_FRAME;
            	    		tpConnectionInfo[tpHandle].receiveSideInfo.status = CF_WAIT;
            	    		tpConnectionInfo[tpHandle].timeoutCr = tpConnectionInfo[tpHandle].reloadTimeoutCr;
                        }

                        if(tpConnectionInfo[tpHandle].receiveFrameSize > receiveDataOffset)// FRAME  is remained
                        {
                            memcpy(&tpConnectionInfo[tpHandle].receiveFrameBuffer[tpConnectionInfo[tpHandle].receiveFrameOffset], &tpBuffer[receiveDataStartPosition],receiveDataOffset);
                            tpConnectionInfo[tpHandle].receiveFrameOffset = tpConnectionInfo[tpHandle].receiveFrameOffset + receiveDataOffset;
                            tpConnectionInfo[tpHandle].receiveFrameSize = tpConnectionInfo[tpHandle].receiveFrameSize - receiveDataOffset;
                        }
                        else
                        {
                        	memcpy(&tpConnectionInfo[tpHandle].receiveFrameBuffer[tpConnectionInfo[tpHandle].receiveFrameOffset], &tpBuffer[receiveDataStartPosition],tpConnectionInfo[tpHandle].receiveFrameSize);
                            tpConnectionInfo[tpHandle].receiveFrameOffset = 0;
                            tpConnectionInfo[tpHandle].receiveFrameSize = 0;
                            tpConnectionInfo[tpHandle].timeoutCr = 0;
                            tpConnectionInfo[tpHandle].receiveSideInfo.sendFrameType = INVALID_FRAME;
                            tpConnectionInfo[tpHandle].receiveSideInfo.status = INIT_STATUS;
                            TpReceiveConfirmHook(tpHandle,tpConnectionInfo[tpHandle].receiveFrameBuffer);
                        }

                    }
            	    else // incorret SN
            	    {
            	    	//call ErrorCallback()
            	    	error = 0;
            	    }
            	}
            	else
            	{
            		error = 0; // status isn't  CF_WAIT.
            	}
            	break;

            default:
            	error = 0;
	    }
    }
    else
    {
    	error =0;
    }
}
