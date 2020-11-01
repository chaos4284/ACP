/*
 * interface_hook.c
 *
 * Generate Date: 2020-10-31  13:16:31
*/

#include "stdint.h"
#include "interface_hook.h"
#include "internal_osek_com_parameter.h"

/*Call from CAN receive ISR or Polling. */
void ReceiveRawData (uint32_t msgID, uint8_t *protocolData)
{
    ProcessComReceive(msgID,protocolData);
    ReceiveTpTask(msgID,protocolData);
}

/*Implement the CAN transmission function. */
uint8_t SendRawData(uint32_t msgID, uint8_t protocolDLC, uint8_t *protocolData)
{
    uint8_t ret = 0;
    /*Implement Transmit Code(Return Success = 1, Fail = 0)*/
    ret = setSendRequest(msgID,protocolDLC,protocolData);
    return ret;
}

/*Call from CAN sent ISR or Polling.*/
void SendRawDataConfirm(uint32_t msgID, uint8_t *protocolData)
{
    UserSendConfirm(msgID);
    SendTpConfirm(msgID,protocolData);
}

