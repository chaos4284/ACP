/*
 * osek_com.h
 *
 *  Created on: 2019. 9. 4.
 *      Author: kwon
 */

#ifndef OSEK_COM_H_
#define OSEK_COM_H_
#include "stdint.h"
enum condition
{
	COM_FALSE = 0,
	COM_TRUE = 1,
};

typedef unsigned char StatusType;
typedef unsigned char COMApplicationModeType;
typedef unsigned char COMShutdownModeType;
typedef unsigned int  MessageIdentifier;
typedef void     *ApplicationDataRef;
typedef unsigned int	 *LengthRef;
typedef unsigned char 	FlagValue;
typedef unsigned char CalloutReturnType;
typedef unsigned char COMServiceIdType;


StatusType StartCOM (COMApplicationModeType appMode);
StatusType StopCOM (COMShutdownModeType shutdownMode);
COMApplicationModeType GetCOMApplicationMode (void);
StatusType InitMessage (MessageIdentifier messageID,ApplicationDataRef data);
StatusType StartPeriodic (void);
StatusType StopPeriodic (void);
StatusType SendMessage (MessageIdentifier messageID,ApplicationDataRef data);
StatusType ReceiveMessage (MessageIdentifier messageID,ApplicationDataRef data);
StatusType SendDynamicMessage (MessageIdentifier messageID,ApplicationDataRef data,LengthRef length);
StatusType ReceiveDynamicMessage (MessageIdentifier messageID,ApplicationDataRef data,LengthRef length);
StatusType SendZeroMessage (MessageIdentifier messageID);
StatusType GetMessageStatus (MessageIdentifier messageID);

extern StatusType InternalStartComService(COMApplicationModeType appMode);
extern StatusType InternalStopComService (COMShutdownModeType shutdownMode);
extern COMApplicationModeType InternalGetApplicationModeService (void);
extern StatusType InternalInitializeMessageService (MessageIdentifier messageID,ApplicationDataRef data);
extern StatusType InternalStartPeriodicService(void);
extern StatusType InternalStopPeriodicService(void);
extern StatusType InternalSendMessageService (MessageIdentifier messageID,ApplicationDataRef data);
extern StatusType InternalReceiveMessageService (MessageIdentifier handle,ApplicationDataRef data);
extern StatusType InternalSendDynamicMessageService(MessageIdentifier messageID,ApplicationDataRef data,LengthRef length);
extern StatusType InternalReceiveDynamicMessageService(MessageIdentifier messageID,ApplicationDataRef data,LengthRef length);
extern StatusType InternalSendZeroMessageService (MessageIdentifier messageID);
extern StatusType InternalGetMessageStatusService (MessageIdentifier messageID);
void COMErrorHook ( StatusType error);


#endif /* OSEK_COM_H_ */
