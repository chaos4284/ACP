/*
 * interface_hook.h
 *
 * Generate Date: 2020-10-31  13:16:31
*/


#ifndef INTERFACE_HOOK_H_
#define INTERFACE_HOOK_H_

extern void ProcessComReceive(uint32_t ipduID,uint8_t* data);
extern void ReceiveTpTask(uint32_t tpReceiveID, uint8_t *tpBuffer);
extern void UserSendConfirm(uint32_t messageID);
extern void SendTpConfirm(uint32_t tpSendID, uint8_t* tpData);

#endif /* INTERFACE_HOOK_H_ */
