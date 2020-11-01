/*
 * com_notification.c
 *
 * Generate Date: 2020-10-31  13:16:31
*/

#include "com_define.h"
#include "stdint.h"
uint8_t ComSetSendMessageErrorIndication(uint32_t messageHandle)
{
    uint8_t ret = 1;
    switch(messageHandle)
    {
        default:
            ret = 0;
        break;
    }
    return ret;
}

uint8_t ComSetSendSignalIndication(uint32_t signalHandle)
{
    uint8_t ret = 1;
    switch(signalHandle)
    {
        default:
            ret = 0;
        break;
    }
    return ret;
}

uint8_t ComSetReceiveMessageErrorIndication(uint32_t messageHandle)
{
    uint8_t ret = 1;
    switch(messageHandle)
    {
        default:
            ret = 0;
        break;
    }
    return ret;
}

uint8_t ComSetReceiveSignalIndication(uint32_t signalHandle)
{
    uint8_t ret = 1;
    switch(signalHandle)
    {
        default:
            ret = 0;
        break;
    }
    return ret;
}

