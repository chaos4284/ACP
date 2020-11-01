/*
 * internal_osek_com_parameter.h
 *
 *  Created on: 2019. 9. 4.
 *      Author: kwon
 */
//#pragma location ="RAM2"
#ifndef INTERNAL_OSEK_COM_PARAMETER_H_
#define INTERNAL_OSEK_COM_PARAMETER_H_
#include "stdio.h"
#include "com_configuration.h"
#include "stdint.h"

#include "osek_com.h"

/*Transmission Mode */
#define NON_SEND_MODE 0
#define DTM 1 /*Direct Transmission Mode */
#define PTM 2 /*Periodic Transmission Mode */
#define MTM 3 /*Mixed Transmission Mode */


/*Transmission Property */
#define NON_SEND_PROPERTY 0
#define TTP 1 /* Triggered Transfer Property */
#define TTPWR 2 /* Triggered Transfer Property Without Reptititon */
#define PTP 3 /* Pending Transfer Property */


/*Communication Interface */
#define COM_INTEFACE_CAN 1
#define COM_INTEFACE_ETHERNET 2

/*Communication Direction */
#define NON_DIRECTION
#define SEND 1
#define RECEIVE 2

/*FILTERE Mode*/
#define F_NEVER  0
#define F_ALWAYS 1
#define F_NEWISDIFFRENT 2

/*Byte Order */
#define BYTE_ORDER_LITTLE_ENDIAN 1
#define BYTE_ORDER_BIG_ENDIAN    2

/*Notification*/

/*notification  state*/
#define NOTIFICATION_DEACTIVE  0
#define NOTIFICATION_ACTIVE    1

/*notification  type*/
#define NOTIFICATION_INVALID   0
#define NOTIFCATION_INDICATE   1
#define NOTIFCATION_CALLBACK   2

/*notification  indication*/
#define INDICATION_FLAG_CLEAR 0
#define INDICATION_FLAG_SET 1

/*Deadline Monitoring State */
#define DEACTIVE_DEADLINE_MONITORING 0
#define ACTIVE_DEADLINE_MONITORING  1

#define NOT_OCCUR_TIMEOUT_ERROR 0
#define OCCUR_TIMEOUT_ERROR 1

/*OSEK COM State */
#define DEACTIVE_COM 0
#define ACTIVE_COM 1

/*Send Mode*/

#define DEACTIVE_PERIODIC_AND_MIX_SEND_OPERATION   0
#define ACTIVE_PERIODIC_AND_MIX_SEND_OPERATION     1




#define NOT_DIRECT_SEND_REQUEST		0
#define DIRECT_SEND_REQUEST			1


#define NON_MESSGE_SEND_REQUEST  0
#define MESSGE_SEND_REQUEST		 1

#define NON_OCCUR_DIRECT_SEND_EVENT  0
#define OCCUR_DIRECT_SEND_EVENT      1

#define NON_OCCUR_REPETITION_SEND_EVENT  0
#define OCCUR_REPETITION_SEND_EVENT      1


#define OSEK_COM_APP_MODE_MAX	250
#define OSEK_COM_INVALID_APP_MODE	251
#define COM_SHUTDOWN_IMMEDIATE 	1


#define START_OFFSET_DEACTIVE 0
#define START_OFFSET_ACTIVE 1


#define NOT_CHECK_SEND_CONFIRM 0
#define CHECK_SEND_CONFIRM 1


#define SEND_INITIAL_TIME_INVALID_TYPE 0
#define SEND_INITIAL_TIME_CYCLE_TYPE 1
#define SEND_INITIAL_TIME_REPETITION_TYPE 2
/* service id*/
#define COMServiceId_StartCOM					1
#define COMServiceId_StopCOM                    2
#define COMServiceId_GetCOMApplicationMode      3
#define COMServiceId_InitMessage                4
#define COMServiceId_StartPeriodic              5
#define COMServiceId_StopPeriodic               6
#define COMServiceId_SendMessage                7
#define COMServiceId_ReceiveMessage             8
#define COMServiceId_SendDynamicMessage         9
#define COMServiceId_ReceiveDynamicMessage      10
#define COMServiceId_SendZeroMessage            11
#define COMServiceId_GetMessageStatus           12

#define COMErrorGetServiceId					ersm.serviceID
/*OS Service return value */
enum com_retvalue
{
	E_OK = 0,                               /*Service call has succeeded.*/
	E_COM_ID = 10,                         /*Given message or mode identifier is out of range or invalid.*/
	E_COM_LENGTH,                          /*Given data length is out of range.*/
	E_COM_LIMIT,                           /*Overflow of message queue.*/
	E_COM_NOMSG,                           /*Message queue is empty*/
	E_COM_SYS_FILTEROUT,                   /*Flitering Out */
	E_COM_SYS_ALREADY_START_PERIODIC,      /*Already called  StartPerioicAPI*/
	E_COM_SYS_NO_CALL_START_PERIODIC,      /*Not a called StartPerioicAPI */
	E_COM_SYS_UNKNOWN_APP_MODE,            /*Not a called StartCom */
	E_COM_DISCARD,						   /*Discard send or receive data*/
	E_COM_GENERATION,
};



typedef struct data_buffer
{
	uint8_t mode;
	uint32_t size;
	uint32_t count;
	uint8_t *buffer;
	uint32_t start_offset;
	uint32_t end_offset;

}data_buffer_t;


typedef struct monitor_info
{
	uint8_t modeState;
	uint32_t timeout;
	uint32_t reloadtimeout;
}monitor_info_t;

//typedef struct notification_info
//{
//#ifdef NOTIFICATION_CLASS1 /*Message Recption signal*/
//	uint8_t receive_notify_indication_state;
//	void (*receive_notify_callback)(void);
//#endif
//
//#ifdef NOTIFICATION_CLASS2 /*Message Transmission signal*/
//	uint8_t send_notify_indication_state;
//	void (*send_notify_callback)(void);
//#endif
//
//#ifdef NOTIFICATION_CLASS3 /*Message Rception Error IPDUs*/
//	uint8_t receive_error_notify_indication_state;
//	void (*receive_error_notify_callback)(void);
//#endif
//
//#ifdef NOTIFICATION_CLASS4 /*Message Transmission Error signal*/
//	uint8_t send_error_notify_indication_state;
//	void (*send_error_notify_callback)(void);
//#endif
//}notification_info_t;

typedef struct notification_info
{
	uint8_t notificationState;
	uint8_t notificationType;
	void (*notificationCallback)(void);

}notification_info_t;

typedef struct communication_interface_info
{
	uint8_t comInterface;
	uint8_t comChannel;

}communication_interface_info_t;

typedef struct internal_buf_info
{
	uint8_t mode;
	unsigned short int size;
	unsigned short int currentMessageCount;

	unsigned short int firstOffset;
	unsigned short int lastOffset;

}internal_buf_info_t;


typedef struct signal_property_info
{
	char* signalName;
	unsigned short int signalHandle;
	uint16_t signalLength;
	uint32_t messageID;
	uint32_t messageHandle;
	uint8_t sendProperty;
	uint8_t filterAlorigthm;
	uint8_t byteOrder;
	uint16_t startOffsetBit;
	uint32_t  startValue;
	uint32_t  signalData;
	uint32_t  timeoutValue;
	notification_info_t transmissionNotification;
	notification_info_t receptionNotification;


}signal_property_info_t;

typedef struct message_property_info
{
	uint16_t messageHandle;
	uint16_t messageLength;
	uint16_t cycleTime;
	uint16_t reloadCycleTime;
	uint16_t repetitionCycleTime;
	uint16_t reloadRepetitionCycleTime;
	uint8_t repetitionNumber;
	uint8_t  reloadRepetitionNumber;
	uint16_t messageDelayTime;
	uint16_t reloadMessageDelayTime;
	uint8_t sendMode;
	uint8_t messageDirection;
	char *messageName;
	uint32_t messageID;
	monitor_info_t deadlineMonitor;
	uint16_t  startOffsetDelay;
	uint16_t  reloadStartOffsetDelay;
	uint8_t  startOffsetState;
	uint8_t sendConfirm;
	uint8_t sendInitialTimeType;
	uint8_t directSendEvent;
	uint8_t messageSendRequest;
	uint8_t *currentMessageObject;
	notification_info_t transmissionErrorNotification;
	notification_info_t receptionErrorNotification;
}message_property_info_t;


typedef struct commumication_management_info
{
	uint8_t applicationMode;
	uint8_t operationState;
	uint8_t periodicModeState;

}commumication_management_info_t;

typedef struct error_service_management_info
{
	unsigned short int serviceID;
    COMApplicationModeType  appMode;
    COMShutdownModeType     shutMode;
	MessageIdentifier handle;
    LengthRef lengthRef;
	ApplicationDataRef dataRef;

}error_service_management_info_t;

#endif /* INTERNAL_OSEK_COM_PARAMETER_H_ */
