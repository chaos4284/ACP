/*
 * iso15765_TP.h
 *
 *  Created on: 2020. 4. 10.
 *      Author: kwon
 */

#ifndef BSW_TP_ISO15765_TP_H_
#define BSW_TP_ISO15765_TP_H_

#include "stdio.h"
#include "stdint.h"
#include "isotp_define.h"

#define INVALID_HANDLE    -1

#define INIT_STATUS        0
#define SF_SEND            1
#define SF_SEND_EXTENSION  2
#define FF_SEND            4
#define FF_SEND_EXTENSION  5
#define CF_SEND            7
#define CF_COMPLETE        8
#define FC_SEND            9
#define FC_READY           10
#define FC_WAIT            12
#define CF_WAIT            13

#define TP_DIRECTION_RX    0
#define TP_DIRECTION_TX    1

#define NORMAL_ADDRESS          0
#define EXTENDED_ADDRESS        1
#define NORMAL_FIXED_ADDRESS    2
#define MIXED_11BIT_ADDRESS     3
#define MIXED_29BIT_ADDRESS     4

#define PHYSICAL                0
#define FUNCTIONAL              1

#define SINGLE_FRAME            0
#define FIRST_FRAME             1
#define CONSECUTIVE_FRAME       2
#define FLOW_CONTROL            3
#define INVALID_FRAME           4

#define SINGLE_FRAME_TYPE_OFFSET       (0 << 4)
#define FIRST_FRAME_TYPE_OFFSET        (1 << 4)
#define COSECUTIVE_FRAME_TYPE_OFFSET   (2 << 4)
#define FLOW_CONTROL_OFFSET            (3 << 4)

#define SEND_REQUEST            1
#define RECEIVE_REQUEST         2

#define E_ISOTP_OK 0
#define E_ISOTP_INVALID_HANDLE  1
#define E_ISOTP_INVALID_ID 2
#define E_ISOTP_INVALID_SIZE 3

#define NOT_TRANSMIT_PROTOCOL_DATA  0x0
#define TRANSMIT_PROTOCOL_DATA  0x1


#define SEND_BUSY               0
#define NOT_SEND_ZERO_SIZE      1
#define CF_WAIT_TIMEOUT         2
#define FC_WAIT_TIMEOUT         3
#define UNEXPECTED_FRAME        4
#define FC_WAIT_OVERFLOW        5
#define FC_BUFFER_OVERFLOW      6
#define SIZE_WRONG_PARAMETER    7
#define FC_WRONG_STATUS         8

#define CTS                     0
#define WAIT                    1
#define OVERFLOW                2

enum tpCondition
{
	ISOTP_FALSE = 0,
	ISOTP_TRUE = 1,
};

#define FALSE                   0
#define TRUE                    1

#define TP_FRAME_TYPE_OFFSET(x)	 ((x & 0xF0) >> 4)
#define CONSECUTIVE_FRAME_SN_OFFSET(x) (x & 0x0F)

//COMMON
#define NORMAL_FLOW_CONTROL_BS_OFFSET		   1
#define NORMAL_FIXED_FLOW_CONTROL_BS_OFFSET    1
#define EXTENDED_FLOW_CONTROL_BS_OFFSET        2
#define MIXED_ADDRESSING_11BIT_BS_OFFSET       2
#define MIXED_ADDRESSING_29BIT_BS_OFFSET       2

#define NORMAL_FLOW_CONTROL_STMIN_OFFSET		                2//0(Flow)1(BS)2(STMIN)
#define NORMAL_FIXED_FLOW_CONTROL_STMIN_OFFSET                  2
#define EXTENDED_FLOW_CONTROL_STMIN_OFFSET                      3
#define MIXED_ADDRESSING_11BIT_FLOW_CONTROL_STMIN_OFFSET        3
#define MIXED_ADDRESSING_29BIT_FLOW_CONTROL_STMIN_OFFSET        3

#define NORMAL_CONSECUTIVE_FRAME_DATA_OFFSET						  1//0(CF/Sequence)
#define NORMAL_FIXED_CONSECUTIVE_FRAME_DATA_OFFSET                    1
#define EXTENDED_CONSECUTIVE_FRAME_DATA_OFFSET                        2
#define MIXED_ADDRESSING_11BIT_CONSECUTIVE_FRAME_DATA_OFFSET          2
#define MIXED_ADDRESSING_29BIT_CONSECUTIVE_FRAME_DATA_OFFSET          2

//COMMON
//normal
#define NORMAL_SINGLE_FRAME_DATA_OFFSET						    1
#define NORMAL_FIXED_SINGLE_FRAME_DATA_OFFSET                   1
#define EXTENDED_SINGLE_FRAME_DATA_OFFSET                       2
#define MIXED_ADDRESSING_11BIT_SINGLE_FRAME_DATA_OFFSET         2
#define MIXED_ADDRESSING_29BIT_SINGLE_FRAME_DATA_OFFSET         2

#define NORMAL_FIRST_FRAME_DATA_OFFSET						    2
#define NORMAL_FIXED_FIRST_FRAME_DATA_OFFSET                    2
#define EXTENDED_FIRST_FRAME_DATA_OFFSET                        3
#define MIXED_ADDRESSING_11BIT_FIRST_FRAME_DATA_OFFSET          3
#define MIXED_ADDRESSING_29BIT_FIRST_FRAME_DATA_OFFSET          3

//extension
#define NORMAL_SINGLE_FRAME_DATA_OFFSET_EXTENSION                         2
#define NORMAL_FIXED_SINGLE_FRAME_DATA_OFFSET_EXTENSION                   2
#define EXTENDED_SINGLE_FRAME_DATA_OFFSET_EXTENSION                       3
#define MIXED_ADDRESSING_11BIT_SINGLE_FRAME_DATA_OFFSET_EXTENSION         3
#define MIXED_ADDRESSING_29BIT_SINGLE_FRAME_DATA_OFFSET_EXTENSION         3

#define NORMAL_FIRST_FRAME_DATA_OFFSET_EXTENSION						  6
#define NORMAL_FIXED_FIRST_FRAME_DATA_OFFSET_EXTENSION                    6
#define EXTENDED_FIRST_FRAME_DATA_OFFSET_EXTENSION                        7
#define MIXED_ADDRESSING_11BIT_FIRST_FRAME_DATA_OFFSET_EXTENSION          7
#define MIXED_ADDRESSING_29BIT_FIRST_FRAME_DATA_OFFSET_EXTENSION          7


typedef struct SequenceInfo{
uint8_t sendFrameType;
uint8_t status;
}SequenceInfo_t;

typedef struct tpInfo{
    uint32_t sendID;
    uint32_t receiveID;
    uint32_t baseAddress;
    uint8_t addressMode;
    uint8_t addressType;
    uint8_t sourceAddress;
    uint8_t targetAddress;
    uint8_t receiveTargetAddress;
    uint8_t allAddressExtension;
    uint8_t addressExtension;
    uint8_t receiveAddressExtension;
    uint16_t timeoutAs;
    uint16_t reloadTimeoutAs;
    uint16_t timeoutAr;
    uint16_t reloadTimeoutAr;
    uint16_t timeoutBs;
    uint16_t reloadTimeoutBs;
    uint16_t timeoutCr;
    uint16_t reloadTimeoutCr;
    uint16_t wftMaxTime;
    SequenceInfo_t sendSideInfo;
    SequenceInfo_t receiveSideInfo;
    uint8_t sendProtocolRequest;
    uint8_t sendProtocolBuffer[CAN_DL];
    uint8_t receiveProtocolRequest;
    uint8_t receiveProtocolBuffer[CAN_DL];
    uint8_t *sendFrameBuffer;
    uint8_t *receiveFrameBuffer;
    uint32_t sendFrameSize;
    uint32_t totalSendFrameSize;
    uint32_t receiveFrameSize;
    uint32_t totalReceiveFrameSize;
    uint32_t sendFrameOffset;
    uint32_t receiveFrameOffset;
    uint32_t receiveBufferMaxSize;
    uint8_t pad;
    uint8_t priority;
    uint8_t dataPage;
    uint8_t reserved;
    uint8_t protocolDataUnit;
    uint8_t waitingMode;
    uint8_t wftmax;
    uint8_t reloadWftmax;
    uint8_t useFlowControl;
    uint8_t useBlockSize;
    uint8_t useSTmin;
    uint8_t ownBlockSize;
    uint8_t reloadOwnBlockSize;
    uint8_t reloadOwnSTmin;
    uint8_t receiveBlockSize;
    uint8_t reloadReceiveBlockSize;
    uint8_t receiveSTmin;
    uint8_t reloadReceiveSTmin;
    uint8_t firstSN;
    uint8_t sendSN;
    uint8_t receiveSN;
    uint8_t useRxMask;
    uint32_t waitTime;
    uint16_t rxMask;
    uint16_t messageCount;
}tpInfo_t;

extern uint8_t TpSendConfirmHook(uint32_t tpHandle, uint8_t *tpData, uint32_t tpSize);


#endif /* BSW_TP_ISO15765_TP_H_ */
