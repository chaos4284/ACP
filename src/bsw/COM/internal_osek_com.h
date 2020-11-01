/*
 * Internal_osekCom.h
 *
 *  Created on: 2019. 9. 9.
 *      Author: kwon
 */

#ifndef Internal_OSEKCom_H_
#define Internal_OSEKCom_H_
#include "stdint.h"
#include "osek_com.h"
#include "internal_osek_com_parameter.h"
StatusType InternalStartComService(COMApplicationModeType app_mode);
StatusType InternalStopComService (COMShutdownModeType shutdown_mode);
COMApplicationModeType InternalGet_application_modeService (void);
StatusType Internal_initializeMessageService (MessageIdentifier message_id,ApplicationDataRef data);
StatusType InternalStartPeriodicService(void);
StatusType InternalStopPeriodicService(void);
StatusType InternalSendMessageService (MessageIdentifier message_id,ApplicationDataRef data);
StatusType InternalReceiveMessageService (MessageIdentifier handle,ApplicationDataRef data);
StatusType InternalSendDynamicMessageService (MessageIdentifier message_id,ApplicationDataRef data,LengthRef length);
StatusType InternalReceiveDynamicMessageService (MessageIdentifier message_id,ApplicationDataRef data,LengthRef length);
StatusType InternalSend_zeroMessageService (MessageIdentifier message_id);
StatusType InternalGetMessageStatusService (MessageIdentifier message_id);

signal_property_info_t* GetSignalInformationByHandle(unsigned char direction, MessageIdentifier handle);
#endif /* Internal_OSEKCom_H_ */
