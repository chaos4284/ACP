/*
 * interaction_layer.h
 *
 *  Created on: 2019. 9. 16.
 *      Author: kwon
 */

#ifndef INTERACTION_LAYER_H_
#define INTERACTION_LAYER_H_
#include "com_define.h"
#include "stdint.h"
#include "internal_osek_com_parameter.h"
void ProcessComTask();
void ProcessComReceive(uint32_t ipduID,uint8_t* data);

void SendDeadlineMonitoringCheck(message_property_info_t* getMessage);
void ReceiveDeadlineMonitoringCheck(message_property_info_t* getMessage);

extern signal_property_info_t* GetSignalInformationByHandle(uint8_t direction,MessageIdentifier handle);
extern message_property_info_t* GetMessageInformation(uint8_t direction);
extern signal_property_info_t* GetSignalInformation(uint8_t direction);
extern commumication_management_info_t* GetCommunicationManagementInformation(void);
extern uint8_t UserSendIpdu(message_property_info_t *getMessage);
extern uint8_t CheckPassedFilter(signal_property_info_t *signal, ApplicationDataRef data);
extern message_property_info_t* GetMesssageInformationBySignal(uint8_t direction,uint32_t signalHandle);

extern message_property_info_t comSendMsgProperty[COM_SEND_MESSAGE_COUNT];
extern signal_property_info_t comSendSignalProperty[COM_SEND_SIGNAL_COUNT];
extern message_property_info_t comReceiveMsgProperty[COM_RECEIVE_MESSAGE_COUNT];
extern signal_property_info_t comReceiveSignalProperty[COM_RECEIVE_SIGNAL_COUNT];

extern uint8_t ComSetSendMessageErrorIndication(uint32_t messageHandle);
extern uint8_t ComSetReceiveMessageErrorIndication(uint32_t messageHandle);
extern uint8_t ComSetSendSignalIndication(uint32_t signalHandle);
extern uint8_t ComSetReceiveSignalIndication(uint32_t signalHandle);
extern void UpdateBufferFromSignalData(uint8_t byteOrder,uint8_t *buffer, uint16_t startoffset,uint8_t length, uint64_t rawValue);
extern message_property_info_t* GetMesssageInformationByID(uint8_t direction,MessageIdentifier messageID);
extern uint8_t CheckIsExistedMessageID(uint8_t direction, uint32_t messageID);
extern message_property_info_t* GetMessageInformationByID(uint8_t direction,MessageIdentifier messageID);

extern void ProcessComTask();
extern void ProcessComReceive(uint32_t ipduID,uint8_t* data);
extern void DataMemset(void *dst,uint8_t value,uint32_t data_size);

#endif /* INTERACTION_LAYER_H_ */
