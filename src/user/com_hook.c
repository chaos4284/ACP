/*
 * com_hook.c
 *
 * Generate Date: 2020-10-31  13:16:31
*/

#include "osek_com.h"
#include "com_hook.h"
#include "stdint.h"

extern error_service_management_info_t ersm;
StatusType StartCOMExtension(void)
{
    int ret = 0;
    ret = StartPeriodic();
    return ret;
}
void COMErrorHook(StatusType error)
{
	uint16_t errorType = 0;
	errorType = COMErrorGetServiceId;

    while(1)
    {
        ;
    }
}
