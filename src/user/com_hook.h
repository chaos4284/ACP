/*
 * com_hook.h
 *
 * Generate Date: 2020-10-31  13:16:31
*/


#ifndef COM_HOOK_H_
#define COM_HOOK_H_

#include "internal_osek_com_parameter.h"

StatusType StartCOMExtension(void);
void COMErrorHook (StatusType error);

extern void COMErrorHook (StatusType error);

#endif /* COM_HOOK_H_ */
