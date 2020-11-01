/*
 * osek_com.c
 *
 *  Created on: 2019. 8. 29.
 *      Author: kwon
 */

#include "osek_com.h"

#include "com_configuration.h"
#include "stdint.h"

#include "internal_osek_com_parameter.h"
#ifdef COM_ENABLE_START_COM_EXTENSION
extern StatusType StartCOMExtension(void);
#endif

StatusType StartCOM (COMApplicationModeType app_mode)
{
	StatusType ret = E_OK;
	ret = InternalStartComService(app_mode);
#ifdef COM_ENABLE_START_COM_EXTENSION
	StartCOMExtension();
#endif

	return ret;
}

StatusType StopCOM (COMShutdownModeType shutdown_mode)
{
	StatusType ret = E_OK;
	ret = InternalStopComService(shutdown_mode);
	return ret;
}

COMApplicationModeType GetCOMApplicationMode (void)
{
	COMApplicationModeType ret = 0;
	ret = InternalGetApplicationModeService();
	return ret;
}

StatusType InitMessage (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;
	ret = InternalInitializeMessageService(handle,data);
	//메시지 ID가 없거나, 내부통신, 0 길이의 메시지 일경우 E_COM_ID 반환
	return ret;
}

StatusType StartPeriodic (void)
{
	StatusType ret = E_OK;
	ret = InternalStartPeriodicService();
	return ret;
}

StatusType StopPeriodic (void)
{
	StatusType ret = E_OK;
	ret = InternalStopPeriodicService();
	return ret;
}

StatusType SendMessage (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;

	ret = InternalSendMessageService(handle,data);
	return ret;
}

StatusType ReceiveMessage (MessageIdentifier handle,ApplicationDataRef data)
{
	StatusType ret = E_OK;
	ret = InternalReceiveMessageService(handle,data);
	return ret;
}

/*Unqueud 메시지에서 가능 */
/*
StatusType SendDynamicMessage (MessageIdentifier message_id,ApplicationDataRef data,LengthRef length)
{
	StatusType ret = E_OK;
	ret = InternalSend_dynamicMessageService(message_id,data,length);
	return ret;
}

StatusType ReceiveDynamicMessage (MessageIdentifier message_id,ApplicationDataRef data,LengthRef length)
{
	StatusType ret = E_OK;
	ret = InternalReceive_dynamicMessageService(message_id,data,length);
	return ret;
}

StatusType SendZeroMessage (MessageIdentifier message_id)
{
	StatusType ret = E_OK;
	ret = InternalSend_zeroMessageService(message_id);
	return ret;
}

StatusType GetMessageStatus (MessageIdentifier message_id)
{
	StatusType ret = E_OK;
	ret = Internal_getMessageStatusService(message_id);
	return ret;
}
*/
