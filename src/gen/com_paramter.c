/*
 * com_parameter.c
 *
 * Generate Date: 2020-10-31  13:16:31
*/

#include "internal_osek_com_parameter.h"
#include "com_define.h"
#include "stdint.h"

/*Send Message Notification Callback*/

/*Send Signal Notification Callback*/

/*Receive Message Notification Callback*/

/*Receive Signal Notification Callback*/

/*Send Message Buffer*/
uint8_t HU_AMP_E_01_MessageBuffer[8];
uint8_t HU_AMP_E_02_MessageBuffer[8];
uint8_t HU_AMP_E_03_MessageBuffer[8];
uint8_t HU_AMP_E_05_MessageBuffer[8];
uint8_t HU_AMP_E_06_MessageBuffer[8];
uint8_t HU_AMP_E_07_MessageBuffer[8];
uint8_t HU_AMP_E_08_MessageBuffer[8];
uint8_t HU_AMP_E_09_MessageBuffer[8];
uint8_t HU_AMP_E_13_MessageBuffer[8];
uint8_t HU_AMP_P_01_MessageBuffer[8];
uint8_t HU_BLE_E_05_MessageBuffer[8];
uint8_t HU_Car_PE_01_MessageBuffer[8];
uint8_t HU_CLOCK_PE_02_MessageBuffer[8];
uint8_t HU_CLU_P_01_MessageBuffer[8];
uint8_t HU_CLU_P_03_MessageBuffer[8];
uint8_t HU_CLU_P_04_MessageBuffer[8];
uint8_t HU_CLU_PE_02_MessageBuffer[8];
uint8_t HU_CLU_PE_04_MessageBuffer[8];
uint8_t HU_CLU_PE_05_MessageBuffer[8];
uint8_t HU_CLU_PE_06_MessageBuffer[8];
uint8_t HU_CLU_PE_07_MessageBuffer[8];
uint8_t HU_CLU_PE_10_MessageBuffer[8];
uint8_t HU_CLU_PE_11_MessageBuffer[8];
uint8_t HU_CLU_PE_12_MessageBuffer[8];
uint8_t HU_CLU_PE_13_MessageBuffer[8];
uint8_t HU_CLU_PE_14_MessageBuffer[8];
uint8_t HU_CNTL_E_01_MessageBuffer[8];
uint8_t HU_DATC_E_01_MessageBuffer[8];
uint8_t HU_DATC_E_02_MessageBuffer[8];
uint8_t HU_DATC_E_03_MessageBuffer[8];
uint8_t HU_DATC_PE_00_MessageBuffer[8];
uint8_t HU_ECALL_P_00_MessageBuffer[8];
uint8_t HU_GW_E_02_MessageBuffer[8];
uint8_t HU_GW_PE_00_MessageBuffer[8];
uint8_t HU_GW_PE_01_MessageBuffer[8];
uint8_t HU_GW_PE_02_MessageBuffer[8];
uint8_t HU_MON_PE_01_MessageBuffer[8];
uint8_t HU_NAVI_PE_00_MessageBuffer[8];
uint8_t HU_NAVI_STD_META_E_MessageBuffer[8];
uint8_t HU_NAVI_STD_POS_PE_MessageBuffer[8];
uint8_t HU_NAVI_STD_PROLONG_E_MessageBuffer[8];
uint8_t HU_NAVI_STD_PROSHORT_E_MessageBuffer[8];
uint8_t HU_NAVI_STD_PROSHORT_E_01_MessageBuffer[8];
uint8_t HU_NAVI_STD_SEG_E_MessageBuffer[8];
uint8_t HU_NAVI_STD_STUB_E_MessageBuffer[8];
uint8_t HU_Navi_Theme_E_01_MessageBuffer[8];
uint8_t HU_RVM_E_00_MessageBuffer[8];
uint8_t HU_TMU_E_01_MessageBuffer[8];
uint8_t HU_TMU_E_02_MessageBuffer[8];
uint8_t HU_USM_E_01_MessageBuffer[8];
uint8_t HU_USM_E_02_MessageBuffer[8];
uint8_t HU_USM_E_04_MessageBuffer[8];
uint8_t HU_USM_E_05_MessageBuffer[8];
uint8_t HU_USM_E_06_MessageBuffer[8];
uint8_t HU_USM_E_08_MessageBuffer[8];
uint8_t HU_USM_E_10_MessageBuffer[8];

/*Receive Message Buffer*/
uint8_t AMP_HU_E_01_MessageBuffer[8];
uint8_t AMP_HU_E_03_MessageBuffer[8];
uint8_t AMP_HU_E_04_MessageBuffer[8];
uint8_t AMP_HU_E_05_MessageBuffer[8];
uint8_t AMP_HU_E_06_MessageBuffer[8];
uint8_t AMP_HU_E_08_MessageBuffer[8];
uint8_t AMP_HU_E_09_MessageBuffer[8];
uint8_t AMP_HU_E_10_MessageBuffer[8];
uint8_t AMP_HU_E_11_MessageBuffer[8];
uint8_t AMP_HU_P_01_MessageBuffer[8];
uint8_t AMP_HU_P_02_MessageBuffer[8];
uint8_t AMP_HU_PE_01_MessageBuffer[8];
uint8_t AMP_HU_PE_02_MessageBuffer[8];
uint8_t AMP_HU_PE_03_MessageBuffer[8];
uint8_t CLU_HU_E_00_MessageBuffer[8];
uint8_t CLU_HU_P_06_MessageBuffer[8];
uint8_t CLU_HU_PE_00_MessageBuffer[8];
uint8_t CLU_HU_PE_01_MessageBuffer[8];
uint8_t CLU_HU_PE_02_MessageBuffer[8];
uint8_t CLU_HU_PE_05_MessageBuffer[8];
uint8_t CLU_HU_PE_06_MessageBuffer[8];
uint8_t DATC_PE_02_MessageBuffer[8];
uint8_t DATC_PE_03_MessageBuffer[8];
uint8_t DATC_PE_04_MessageBuffer[8];
uint8_t DATC_PE_05_MessageBuffer[8];
uint8_t DATC_PE_06_MessageBuffer[8];
uint8_t ECALL_HU_E_01_MessageBuffer[8];
uint8_t GW_AMP_PE_01_MessageBuffer[8];
uint8_t GW_BLE_E_03_MessageBuffer[8];
uint8_t GW_CarInfo_PE_MessageBuffer[8];
uint8_t GW_CHASSIS_PE_1_MessageBuffer[8];
uint8_t GW_CLU_P_MessageBuffer[8];
uint8_t GW_CLU_PE_MessageBuffer[8];
uint8_t GW_HU_E_00_MessageBuffer[8];
uint8_t GW_HU_E_03_MessageBuffer[8];
uint8_t GW_HU_P_02_MessageBuffer[8];
uint8_t GW_HU_P_03_MessageBuffer[8];
uint8_t GW_HU_P_04_MessageBuffer[8];
uint8_t GW_HU_PE_00_MessageBuffer[8];
uint8_t GW_HU_PE_01_MessageBuffer[8];
uint8_t GW_HU_PE_02_MessageBuffer[8];
uint8_t GW_HU_PE_06_MessageBuffer[8];
uint8_t GW_HU_PE_07_MessageBuffer[8];
uint8_t GW_HU_PE_09_MessageBuffer[8];
uint8_t GW_HU_PE_10_MessageBuffer[8];
uint8_t GW_PDW_PE_00_MessageBuffer[8];
uint8_t GW_PSM_PE_00_MessageBuffer[8];
uint8_t GW_RVM_PE_00_MessageBuffer[8];
uint8_t GW_USM_PE_01_MessageBuffer[8];
uint8_t GW_USM_PE_02_MessageBuffer[8];
uint8_t GW_USM_PE_03_MessageBuffer[8];
uint8_t GW_USM_PE_04_MessageBuffer[8];
uint8_t GW_USM_PE_05_MessageBuffer[8];
uint8_t GW_USM_PE_06_MessageBuffer[8];
uint8_t GW_WARNING_PE_01_MessageBuffer[8];
uint8_t NM_CGW_MessageBuffer[8];
uint8_t NM_CLU_MessageBuffer[8];
uint8_t NM_TMU_MessageBuffer[8];
uint8_t TMU_HU_E_01_MessageBuffer[8];

/*Send Notification Flag Object */

/*Receive Notification Flag Object */

/* Send Message Property Information*/
message_property_info_t comSendMsgProperty[COM_SEND_MESSAGE_COUNT] =
{
    {
     0, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_01", /* messageName */
     8, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     1, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_02", /* messageName */
     9, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     2, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_03", /* messageName */
     10, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     3, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_05", /* messageName */
     12, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     4, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_06", /* messageName */
     13, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     5, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_07", /* messageName */
     14, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_07_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     6, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_08", /* messageName */
     15, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_08_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     7, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_09", /* messageName */
     112, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_09_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     8, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_E_13", /* messageName */
     78, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_E_13_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     9, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_AMP_P_01", /* messageName */
     1284, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     24, /* startOffsetDelay */
     24, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_AMP_P_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     10, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_BLE_E_05", /* messageName */
     121, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_BLE_E_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     11, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_Car_PE_01", /* messageName */
     369, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     24, /* startOffsetDelay */
     24, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_Car_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     12, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLOCK_PE_02", /* messageName */
     303, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     110, /* startOffsetDelay */
     110, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLOCK_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     13, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_P_01", /* messageName */
     1287, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     22, /* startOffsetDelay */
     22, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_P_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     14, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_P_03", /* messageName */
     1289, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_P_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     15, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_P_04", /* messageName */
     676, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     26, /* startOffsetDelay */
     26, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_P_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     16, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_02", /* messageName */
     277, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     34, /* startOffsetDelay */
     34, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     17, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_04", /* messageName */
     406, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     36, /* startOffsetDelay */
     36, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     18, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_05", /* messageName */
     407, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     112, /* startOffsetDelay */
     112, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     19, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_06", /* messageName */
     290, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     36, /* startOffsetDelay */
     36, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     20, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_07", /* messageName */
     291, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     34, /* startOffsetDelay */
     34, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_07_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     21, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_10", /* messageName */
     286, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     38, /* startOffsetDelay */
     38, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_10_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     22, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_11", /* messageName */
     485, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     28, /* startOffsetDelay */
     28, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_11_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     23, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_12", /* messageName */
     486, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     20, /* startOffsetDelay */
     20, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_12_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     24, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_13", /* messageName */
     487, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     34, /* startOffsetDelay */
     34, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_13_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     25, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CLU_PE_14", /* messageName */
     488, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     18, /* startOffsetDelay */
     18, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CLU_PE_14_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     26, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_CNTL_E_01", /* messageName */
     56, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_CNTL_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     27, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_DATC_E_01", /* messageName */
     34, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_DATC_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     28, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_DATC_E_02", /* messageName */
     52, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_DATC_E_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     29, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_DATC_E_03", /* messageName */
     54, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_DATC_E_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     30, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_DATC_PE_00", /* messageName */
     448, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     44, /* startOffsetDelay */
     44, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_DATC_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     31, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_ECALL_P_00", /* messageName */
     1393, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     40, /* startOffsetDelay */
     40, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_ECALL_P_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     32, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_GW_E_02", /* messageName */
     61, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_GW_E_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     33, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_GW_PE_00", /* messageName */
     270, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     20, /* startOffsetDelay */
     20, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_GW_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     34, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_GW_PE_01", /* messageName */
     371, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     28, /* startOffsetDelay */
     28, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_GW_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     35, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_GW_PE_02", /* messageName */
     372, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     2, /* startOffsetDelay */
     2, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_GW_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     36, /* messageHandle */
     8, /* messageLength */
     400, /* cycleTime */
     400, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_MON_PE_01", /* messageName */
     256, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     122, /* startOffsetDelay */
     122, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_MON_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     37, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_PE_00", /* messageName */
     459, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     14, /* startOffsetDelay */
     14, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     38, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_META_E", /* messageName */
     206, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_META_E_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     39, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_POS_PE", /* messageName */
     458, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_POS_PE_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     40, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_PROLONG_E", /* messageName */
     205, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_PROLONG_E_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     41, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_PROSHORT_E", /* messageName */
     204, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_PROSHORT_E_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     42, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_PROSHORT_E_01", /* messageName */
     207, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_PROSHORT_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     43, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_SEG_E", /* messageName */
     202, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_SEG_E_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     44, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_NAVI_STD_STUB_E", /* messageName */
     203, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_NAVI_STD_STUB_E_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     45, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_Navi_Theme_E_01", /* messageName */
     230, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_Navi_Theme_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     46, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_RVM_E_00", /* messageName */
     88, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_RVM_E_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     47, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_TMU_E_01", /* messageName */
     250, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_TMU_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     48, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_TMU_E_02", /* messageName */
     251, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_TMU_E_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     49, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_01", /* messageName */
     101, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     50, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_02", /* messageName */
     102, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     51, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_04", /* messageName */
     104, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     52, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_05", /* messageName */
     105, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     53, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_06", /* messageName */
     106, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     54, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_08", /* messageName */
     219, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_08_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     55, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     SEND, /* messageDirection */
     "HU_USM_E_10", /* messageName */
     545, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     HU_USM_E_10_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

};

/* Receive Message Property Information*/
message_property_info_t comReceiveMsgProperty[COM_RECEIVE_MESSAGE_COUNT] =
{
    {
     0, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_01", /* messageName */
     128, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     1, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_03", /* messageName */
     130, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     2, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_04", /* messageName */
     131, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     3, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_05", /* messageName */
     132, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     4, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_06", /* messageName */
     133, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     5, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_08", /* messageName */
     135, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_08_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     6, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_09", /* messageName */
     136, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_09_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     7, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_10", /* messageName */
     137, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_10_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     8, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_E_11", /* messageName */
     138, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_E_11_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     9, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_P_01", /* messageName */
     1408, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_P_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     10, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_P_02", /* messageName */
     1400, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     2, /* startOffsetDelay */
     2, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_P_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     11, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_PE_01", /* messageName */
     384, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     2, /* startOffsetDelay */
     2, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     12, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_PE_02", /* messageName */
     385, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     4, /* startOffsetDelay */
     4, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     13, /* messageHandle */
     8, /* messageLength */
     400, /* cycleTime */
     400, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "AMP_HU_PE_03", /* messageName */
     387, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     6, /* startOffsetDelay */
     6, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     AMP_HU_PE_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     14, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_E_00", /* messageName */
     209, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_E_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     15, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_P_06", /* messageName */
     1496, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     40, /* startOffsetDelay */
     40, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_P_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     16, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_PE_00", /* messageName */
     464, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     28, /* startOffsetDelay */
     28, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     17, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_PE_01", /* messageName */
     479, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     28, /* startOffsetDelay */
     28, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     18, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_PE_02", /* messageName */
     474, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     28, /* startOffsetDelay */
     28, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     19, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_PE_05", /* messageName */
     468, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_PE_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     20, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "CLU_HU_PE_06", /* messageName */
     469, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     CLU_HU_PE_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     21, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "DATC_PE_02", /* messageName */
     305, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     96, /* startOffsetDelay */
     96, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     DATC_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     22, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "DATC_PE_03", /* messageName */
     306, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     94, /* startOffsetDelay */
     94, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     DATC_PE_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     23, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "DATC_PE_04", /* messageName */
     307, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     32, /* startOffsetDelay */
     32, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     DATC_PE_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     24, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "DATC_PE_05", /* messageName */
     308, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     90, /* startOffsetDelay */
     90, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     DATC_PE_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     25, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "DATC_PE_06", /* messageName */
     309, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     22, /* startOffsetDelay */
     22, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     DATC_PE_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     26, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "ECALL_HU_E_01", /* messageName */
     70, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     ECALL_HU_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     27, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_AMP_PE_01", /* messageName */
     336, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     22, /* startOffsetDelay */
     22, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_AMP_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     28, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_BLE_E_03", /* messageName */
     167, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_BLE_E_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     29, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_CarInfo_PE", /* messageName */
     362, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     18, /* startOffsetDelay */
     18, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_CarInfo_PE_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     30, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_CHASSIS_PE_1", /* messageName */
     361, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     22, /* startOffsetDelay */
     22, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_CHASSIS_PE_1_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     31, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_CLU_P", /* messageName */
     1390, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     22, /* startOffsetDelay */
     22, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_CLU_P_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     32, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_CLU_PE", /* messageName */
     344, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     24, /* startOffsetDelay */
     24, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_CLU_PE_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     33, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_E_00", /* messageName */
     91, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_E_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     34, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_E_03", /* messageName */
     92, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_E_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     35, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_P_02", /* messageName */
     1498, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     60, /* startOffsetDelay */
     60, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_P_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     36, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_P_03", /* messageName */
     1499, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     60, /* startOffsetDelay */
     60, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_P_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     37, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_P_04", /* messageName */
     1500, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     60, /* startOffsetDelay */
     60, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_P_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     38, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_00", /* messageName */
     349, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     20, /* startOffsetDelay */
     20, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     39, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_01", /* messageName */
     350, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     12, /* startOffsetDelay */
     12, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     40, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     PTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_02", /* messageName */
     351, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     41, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_06", /* messageName */
     383, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     20, /* startOffsetDelay */
     20, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     42, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_07", /* messageName */
     413, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     32, /* startOffsetDelay */
     32, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_07_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     43, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_09", /* messageName */
     415, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     2, /* startOffsetDelay */
     2, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_09_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     44, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_HU_PE_10", /* messageName */
     416, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     6, /* startOffsetDelay */
     6, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_HU_PE_10_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     45, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_PDW_PE_00", /* messageName */
     358, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     30, /* startOffsetDelay */
     30, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_PDW_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     46, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_PSM_PE_00", /* messageName */
     398, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     30, /* startOffsetDelay */
     30, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_PSM_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     47, /* messageHandle */
     8, /* messageLength */
     120, /* cycleTime */
     120, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_RVM_PE_00", /* messageName */
     294, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     20, /* startOffsetDelay */
     20, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_RVM_PE_00_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     48, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_01", /* messageName */
     378, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     8, /* startOffsetDelay */
     8, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     49, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_02", /* messageName */
     379, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     8, /* startOffsetDelay */
     8, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_02_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     50, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_03", /* messageName */
     380, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     8, /* startOffsetDelay */
     8, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_03_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     51, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_04", /* messageName */
     381, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     34, /* startOffsetDelay */
     34, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_04_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     52, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_05", /* messageName */
     298, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     24, /* startOffsetDelay */
     24, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_05_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     53, /* messageHandle */
     8, /* messageLength */
     40, /* cycleTime */
     40, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_USM_PE_06", /* messageName */
     299, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     34, /* startOffsetDelay */
     34, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_USM_PE_06_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     54, /* messageHandle */
     8, /* messageLength */
     200, /* cycleTime */
     200, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     MTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "GW_WARNING_PE_01", /* messageName */
     359, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     102, /* startOffsetDelay */
     102, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     GW_WARNING_PE_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     55, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     NON_SEND_MODE, /* sendMode */
     RECEIVE, /* messageDirection */
     "NM_CGW", /* messageName */
     1025, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     NM_CGW_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     56, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     NON_SEND_MODE, /* sendMode */
     RECEIVE, /* messageDirection */
     "NM_CLU", /* messageName */
     1027, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     NM_CLU_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     57, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     0, /* repetitionCycleTime */
     0, /* reloadRepetitionCycleTime */
     0, /* repetitionNumber */
     0, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     NON_SEND_MODE, /* sendMode */
     RECEIVE, /* messageDirection */
     "NM_TMU", /* messageName */
     1026, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     NM_TMU_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

    {
     58, /* messageHandle */
     8, /* messageLength */
     0, /* cycleTime */
     0, /* reloadCycleTime */
     8, /* repetitionCycleTime */
     8, /* reloadRepetitionCycleTime */
     3, /* repetitionNumber */
     3, /* reloadRepetitionNumber */
     0, /* messageDelayTime */
     4, /* reloadMessageDelayTime */
     DTM, /* sendMode */
     RECEIVE, /* messageDirection */
     "TMU_HU_E_01", /* messageName */
     64, /* messageID */
     {DEACTIVE_DEADLINE_MONITORING,0,0}, /* deadlineMonitor */
     0, /* startOffsetDelay */
     0, /* reloadStartOffsetDelay */
     START_OFFSET_DEACTIVE, /* startOffsetState */
     NOT_CHECK_SEND_CONFIRM, /* sendConfirm */
     SEND_INITIAL_TIME_INVALID_TYPE, /* sendInitialTimeType */
     NON_OCCUR_DIRECT_SEND_EVENT, /* directSendEvent */
     NON_MESSGE_SEND_REQUEST, /* messageSendRequest */
     TMU_HU_E_01_MessageBuffer, /* *currentMessageObject */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionErrorNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionErrorNotification */
    },

};

/* Set Send Singal Property Information*/
signal_property_info_t comSendSignalProperty[COM_SEND_SIGNAL_COUNT] =
{
    {
     "AMP_Beep1Mode", /* signalName */
     0, /* signalHandle */
     2, /* signalLength */
     8, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviMode", /* signalName */
     1, /* signalHandle */
     2, /* signalLength */
     8, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SDVCStep", /* signalName */
     2, /* signalHandle */
     3, /* signalLength */
     8, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     14, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SignalDoctor", /* signalName */
     3, /* signalHandle */
     2, /* signalLength */
     8, /* messageID */
     0, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     20, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_VSCMode", /* signalName */
     4, /* signalHandle */
     2, /* signalLength */
     8, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_AudioMode", /* signalName */
     5, /* signalHandle */
     8, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_BeatsMode", /* signalName */
     6, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_DefaultBeep1", /* signalName */
     7, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_DefaultBeep2", /* signalName */
     8, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_LiveDynamicMode", /* signalName */
     9, /* signalHandle */
     3, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Mute", /* signalName */
     10, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QLSMode", /* signalName */
     11, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietMode", /* signalName */
     12, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_RearSpMute", /* signalName */
     13, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Reset", /* signalName */
     14, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SPDIFMute", /* signalName */
     15, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SurroundMode", /* signalName */
     16, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_VIPMode", /* signalName */
     17, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_WrnPromptMode", /* signalName */
     18, /* signalHandle */
     2, /* signalLength */
     9, /* messageID */
     1, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SPDIFMode", /* signalName */
     19, /* signalHandle */
     4, /* signalLength */
     10, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_VersionReq", /* signalName */
     20, /* signalHandle */
     2, /* signalLength */
     10, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviChannelMuteMask", /* signalName */
     21, /* signalHandle */
     16, /* signalLength */
     12, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviChannelOutputMask", /* signalName */
     22, /* signalHandle */
     16, /* signalLength */
     12, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviMainAudioCut", /* signalName */
     23, /* signalHandle */
     8, /* signalLength */
     12, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviVolumeStep", /* signalName */
     24, /* signalHandle */
     8, /* signalLength */
     12, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSChannelMuteMask", /* signalName */
     25, /* signalHandle */
     16, /* signalLength */
     13, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSChannelOutputMask", /* signalName */
     26, /* signalHandle */
     16, /* signalLength */
     13, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSMainAudioCut", /* signalName */
     27, /* signalHandle */
     8, /* signalLength */
     13, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSVolumeStep", /* signalName */
     28, /* signalHandle */
     8, /* signalLength */
     13, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFChannelMuteMask", /* signalName */
     29, /* signalHandle */
     16, /* signalLength */
     14, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFChannelOutputMask", /* signalName */
     30, /* signalHandle */
     16, /* signalLength */
     14, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFMainAudioCut", /* signalName */
     31, /* signalHandle */
     8, /* signalLength */
     14, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFVolumeStep", /* signalName */
     32, /* signalHandle */
     8, /* signalLength */
     14, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_BalanceSet", /* signalName */
     33, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_BassSet", /* signalName */
     34, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_FadeSet", /* signalName */
     35, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MainVolumeSet", /* signalName */
     36, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MidSet", /* signalName */
     37, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_TrebleSet", /* signalName */
     38, /* signalHandle */
     8, /* signalLength */
     15, /* messageID */
     6, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1Ch_OutputMask", /* signalName */
     39, /* signalHandle */
     16, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1DurationOff", /* signalName */
     40, /* signalHandle */
     8, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1DurationOn", /* signalName */
     41, /* signalHandle */
     8, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1Frequency", /* signalName */
     42, /* signalHandle */
     16, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1NumberOfCycles", /* signalName */
     43, /* signalHandle */
     8, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1VolumeStep", /* signalName */
     44, /* signalHandle */
     8, /* signalLength */
     112, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeChannelMuteMask", /* signalName */
     45, /* signalHandle */
     16, /* signalLength */
     78, /* messageID */
     8, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeChannelOutputMask", /* signalName */
     46, /* signalHandle */
     16, /* signalLength */
     78, /* messageID */
     8, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeMainAudioCut", /* signalName */
     47, /* signalHandle */
     8, /* signalLength */
     78, /* messageID */
     8, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeVolumeStep", /* signalName */
     48, /* signalHandle */
     8, /* signalLength */
     78, /* messageID */
     8, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SetMaxMainVolStep", /* signalName */
     49, /* signalHandle */
     2, /* signalLength */
     1284, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TrunkTgReleaseRlyIBOX", /* signalName */
     50, /* signalHandle */
     2, /* signalLength */
     121, /* messageID */
     10, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VehiclePwr", /* signalName */
     51, /* signalHandle */
     4, /* signalLength */
     369, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DisplayHour", /* signalName */
     52, /* signalHandle */
     8, /* signalLength */
     303, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DisplayMinute", /* signalName */
     53, /* signalHandle */
     8, /* signalLength */
     303, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DisplaySecond", /* signalName */
     54, /* signalHandle */
     8, /* signalLength */
     303, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_TimeFormat", /* signalName */
     55, /* signalHandle */
     2, /* signalLength */
     303, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_F1", /* signalName */
     56, /* signalHandle */
     4, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_F2", /* signalName */
     57, /* signalHandle */
     4, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_F3", /* signalName */
     58, /* signalHandle */
     4, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_I1", /* signalName */
     59, /* signalHandle */
     16, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_I2", /* signalName */
     60, /* signalHandle */
     16, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_I3", /* signalName */
     61, /* signalHandle */
     16, /* signalLength */
     1287, /* messageID */
     13, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Precipitation", /* signalName */
     62, /* signalHandle */
     10, /* signalLength */
     1289, /* messageID */
     14, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "WeatherType", /* signalName */
     63, /* signalHandle */
     4, /* signalLength */
     1289, /* messageID */
     14, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HUCurPosLat", /* signalName */
     64, /* signalHandle */
     28, /* signalLength */
     676, /* messageID */
     15, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     268435455, /* startValue */
     268435455, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HUCurPosLon", /* signalName */
     65, /* signalHandle */
     28, /* signalLength */
     676, /* messageID */
     15, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     268435455, /* startValue */
     268435455, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Combined_Side_Street", /* signalName */
     66, /* signalHandle */
     4, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Direction", /* signalName */
     67, /* signalHandle */
     8, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Display_Type", /* signalName */
     68, /* signalHandle */
     8, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Distance_Turn_Point", /* signalName */
     69, /* signalHandle */
     16, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_DistancetoTurnPoint", /* signalName */
     70, /* signalHandle */
     4, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Scale", /* signalName */
     71, /* signalHandle */
     4, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Side_Street", /* signalName */
     72, /* signalHandle */
     16, /* signalLength */
     277, /* messageID */
     16, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HD_SPS_ChannelNo", /* signalName */
     73, /* signalHandle */
     4, /* signalLength */
     406, /* messageID */
     17, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SXM_ChannelNo", /* signalName */
     74, /* signalHandle */
     10, /* signalLength */
     406, /* messageID */
     17, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_LanguageInfo", /* signalName */
     75, /* signalHandle */
     8, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_MuteStatus", /* signalName */
     76, /* signalHandle */
     2, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_NaviCamSettingStatus", /* signalName */
     77, /* signalHandle */
     8, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_NaviDisp", /* signalName */
     78, /* signalHandle */
     2, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_NaviStatus", /* signalName */
     79, /* signalHandle */
     2, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_UsmSupport", /* signalName */
     80, /* signalHandle */
     2, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VolumeStatus", /* signalName */
     81, /* signalHandle */
     6, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     63, /* startValue */
     63, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_WelcomeReady", /* signalName */
     82, /* signalHandle */
     2, /* signalLength */
     407, /* messageID */
     18, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "FM_Decimal_Point", /* signalName */
     83, /* signalHandle */
     2, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_FMFrequency_Offset_Type", /* signalName */
     84, /* signalHandle */
     2, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Frequency_New", /* signalName */
     85, /* signalHandle */
     13, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     52, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Frequency_Unit", /* signalName */
     86, /* signalHandle */
     2, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_OpState_New", /* signalName */
     87, /* signalHandle */
     7, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     6, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Play_time_Hour_New", /* signalName */
     88, /* signalHandle */
     7, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Play_time_Min_New", /* signalName */
     89, /* signalHandle */
     6, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     63, /* startValue */
     63, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Play_time_Sec_New", /* signalName */
     90, /* signalHandle */
     6, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     63, /* startValue */
     63, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Track_Number_New", /* signalName */
     91, /* signalHandle */
     16, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_User_Input", /* signalName */
     92, /* signalHandle */
     2, /* signalLength */
     290, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_Display_TG", /* signalName */
     93, /* signalHandle */
     2, /* signalLength */
     291, /* messageID */
     20, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Remained_Distance", /* signalName */
     94, /* signalHandle */
     16, /* signalLength */
     291, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Remained_Distance_UnderDecimal", /* signalName */
     95, /* signalHandle */
     4, /* signalLength */
     291, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Scale_Unit", /* signalName */
     96, /* signalHandle */
     4, /* signalLength */
     291, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_BarGraph100Level", /* signalName */
     97, /* signalHandle */
     8, /* signalLength */
     291, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_PopupDist_OverDec", /* signalName */
     98, /* signalHandle */
     16, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_PopupDist_Scale", /* signalName */
     99, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_PopupDist_UnderDec", /* signalName */
     100, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_PopupInfo", /* signalName */
     101, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarnDist_OverDec", /* signalName */
     102, /* signalHandle */
     16, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarnDist_Scale", /* signalName */
     103, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarnDist_UnderDec", /* signalName */
     104, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_Unit1", /* signalName */
     105, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_Unit2", /* signalName */
     106, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_DistToTurn_Unit3", /* signalName */
     107, /* signalHandle */
     4, /* signalLength */
     286, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_CurveWarning", /* signalName */
     108, /* signalHandle */
     4, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_NonSpdTrap", /* signalName */
     109, /* signalHandle */
     5, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     20, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_OverSpdAlarm", /* signalName */
     110, /* signalHandle */
     2, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_SpdInfo_Type", /* signalName */
     111, /* signalHandle */
     4, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_SpdLimit", /* signalName */
     112, /* signalHandle */
     8, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_SpdLimit_Type", /* signalName */
     113, /* signalHandle */
     2, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_SpdLimit_Unit", /* signalName */
     114, /* signalHandle */
     2, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarningZone", /* signalName */
     115, /* signalHandle */
     4, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarningZone2", /* signalName */
     116, /* signalHandle */
     5, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarningZone3", /* signalName */
     117, /* signalHandle */
     4, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_WarningZone4", /* signalName */
     118, /* signalHandle */
     5, /* signalLength */
     485, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_OverSpd_Color1", /* signalName */
     119, /* signalHandle */
     24, /* signalLength */
     486, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     16777215, /* startValue */
     16777215, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_OverSpd_Color2", /* signalName */
     120, /* signalHandle */
     24, /* signalLength */
     486, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     16777215, /* startValue */
     16777215, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_OverSpd_Range1", /* signalName */
     121, /* signalHandle */
     8, /* signalLength */
     486, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_Azimuth", /* signalName */
     122, /* signalHandle */
     8, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstDist_F", /* signalName */
     123, /* signalHandle */
     4, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstDist_I", /* signalName */
     124, /* signalHandle */
     16, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstDist_Unit", /* signalName */
     125, /* signalHandle */
     4, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstHour", /* signalName */
     126, /* signalHandle */
     8, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstimTimeFormat", /* signalName */
     127, /* signalHandle */
     2, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstimTimeType", /* signalName */
     128, /* signalHandle */
     2, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstMin", /* signalName */
     129, /* signalHandle */
     8, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NV_EstPointType", /* signalName */
     130, /* signalHandle */
     4, /* signalLength */
     487, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Advanced_TBT_Direction", /* signalName */
     131, /* signalHandle */
     16, /* signalLength */
     488, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Advanced_TBT_Direction1", /* signalName */
     132, /* signalHandle */
     16, /* signalLength */
     488, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Advanced_TBT_Display", /* signalName */
     133, /* signalHandle */
     16, /* signalLength */
     488, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstWindowCmdAVN", /* signalName */
     134, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     6, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AVNIMSButtonCmd", /* signalName */
     135, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     18, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_BlindCmdAVN", /* signalName */
     136, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvWindowCmdAVN", /* signalName */
     137, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_GlassCmdAVN", /* signalName */
     138, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     34, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RLWindowCmdAVN", /* signalName */
     139, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     26, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RrDefoggerCmdAVN", /* signalName */
     140, /* signalHandle */
     2, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RRWindowCmdAVN", /* signalName */
     141, /* signalHandle */
     3, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     30, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_StrgWhlHeatedCmdAVN", /* signalName */
     142, /* signalHandle */
     2, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TrunkTlgtCmdAVN", /* signalName */
     143, /* signalHandle */
     2, /* signalLength */
     56, /* messageID */
     26, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntHrSet", /* signalName */
     144, /* signalHandle */
     5, /* signalLength */
     34, /* messageID */
     27, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntMinSet", /* signalName */
     145, /* signalHandle */
     3, /* signalLength */
     34, /* messageID */
     27, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntUSMSet", /* signalName */
     146, /* signalHandle */
     2, /* signalLength */
     34, /* messageID */
     27, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_WshFldUSMSet", /* signalName */
     147, /* signalHandle */
     2, /* signalLength */
     34, /* messageID */
     27, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_ADSOnOffSet", /* signalName */
     148, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_AcSet", /* signalName */
     149, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_AirCleaningSet", /* signalName */
     150, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_AutoSet", /* signalName */
     151, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_FrontDefog", /* signalName */
     152, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_FrontModeSet", /* signalName */
     153, /* signalHandle */
     4, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_IntakeSet", /* signalName */
     154, /* signalHandle */
     2, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_MainBlower", /* signalName */
     155, /* signalHandle */
     4, /* signalLength */
     52, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_AutoFresh_USM_Set", /* signalName */
     156, /* signalHandle */
     2, /* signalLength */
     54, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_DefLogic_USM_Set", /* signalName */
     157, /* signalHandle */
     2, /* signalLength */
     54, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_AutoArClnUSMSet", /* signalName */
     158, /* signalHandle */
     2, /* signalLength */
     54, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_DrTempSetC", /* signalName */
     159, /* signalHandle */
     8, /* signalLength */
     54, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_DrTempSetF", /* signalName */
     160, /* signalHandle */
     8, /* signalLength */
     54, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DATC_AirQuality_Info", /* signalName */
     161, /* signalHandle */
     4, /* signalLength */
     448, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Graphreset_Info", /* signalName */
     162, /* signalHandle */
     2, /* signalLength */
     448, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_PhoneActivity", /* signalName */
     163, /* signalHandle */
     2, /* signalLength */
     448, /* messageID */
     30, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VRActivity", /* signalName */
     164, /* signalHandle */
     2, /* signalLength */
     448, /* messageID */
     30, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RSELockOnOff", /* signalName */
     165, /* signalHandle */
     2, /* signalLength */
     448, /* messageID */
     30, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_TeleOption", /* signalName */
     166, /* signalHandle */
     2, /* signalLength */
     1393, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     6, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VIN_56", /* signalName */
     167, /* signalHandle */
     56, /* signalLength */
     1393, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VIN_Index", /* signalName */
     168, /* signalHandle */
     3, /* signalLength */
     1393, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_VINStatus", /* signalName */
     169, /* signalHandle */
     2, /* signalLength */
     1393, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_CtrlDrLockRlyIBOX", /* signalName */
     170, /* signalHandle */
     1, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     0, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_CtrlDrUnlockRlyIBOX", /* signalName */
     171, /* signalHandle */
     1, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_EsyAcsProfileID_HU", /* signalName */
     172, /* signalHandle */
     2, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HazardFromIBOX", /* signalName */
     173, /* signalHandle */
     1, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     6, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PanicFromIBOX", /* signalName */
     174, /* signalHandle */
     1, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PreCrankReq", /* signalName */
     175, /* signalHandle */
     2, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TeleDefoggerHeatingCmdIBOX", /* signalName */
     176, /* signalHandle */
     2, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TeleHeatingCmdIBOX", /* signalName */
     177, /* signalHandle */
     2, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TeleStrgWhlHeatingCmdIBOX", /* signalName */
     178, /* signalHandle */
     2, /* signalLength */
     61, /* messageID */
     32, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TeleCrankingCmdIBOX", /* signalName */
     179, /* signalHandle */
     2, /* signalLength */
     270, /* messageID */
     33, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TeleActiveStatus", /* signalName */
     180, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_ProfileIDRValue", /* signalName */
     181, /* signalHandle */
     4, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_HU_GPSFlt", /* signalName */
     182, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_AliveStatus", /* signalName */
     183, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DistanceUnit", /* signalName */
     184, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_MicActivity", /* signalName */
     185, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     22, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_RTCCheck", /* signalName */
     186, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_TempUnit", /* signalName */
     187, /* signalHandle */
     2, /* signalLength */
     371, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_TeleSoCAlertValueSet", /* signalName */
     188, /* signalHandle */
     8, /* signalLength */
     372, /* messageID */
     35, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_TeleVehicleStatusReq", /* signalName */
     189, /* signalHandle */
     2, /* signalLength */
     372, /* messageID */
     35, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_AdasSupport", /* signalName */
     190, /* signalHandle */
     3, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_AMP_EQVariant", /* signalName */
     191, /* signalHandle */
     5, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_DistributeInfo", /* signalName */
     192, /* signalHandle */
     8, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Navi_RspADASMapMsg", /* signalName */
     193, /* signalHandle */
     16, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_NaviMapInfo", /* signalName */
     194, /* signalHandle */
     4, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_OptionInfo", /* signalName */
     195, /* signalHandle */
     16, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     32768, /* startValue */
     32768, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_Type", /* signalName */
     196, /* signalHandle */
     8, /* signalLength */
     256, /* messageID */
     36, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_AirConditionType", /* signalName */
     197, /* signalHandle */
     6, /* signalLength */
     459, /* messageID */
     37, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     63, /* startValue */
     63, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_AirConditionWarning", /* signalName */
     198, /* signalHandle */
     2, /* signalLength */
     459, /* messageID */
     37, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_TunnelDistance", /* signalName */
     199, /* signalHandle */
     10, /* signalLength */
     459, /* messageID */
     37, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_TunnelExist", /* signalName */
     200, /* signalHandle */
     2, /* signalLength */
     459, /* messageID */
     37, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Navi_TunnelRoadClass", /* signalName */
     201, /* signalHandle */
     3, /* signalLength */
     459, /* messageID */
     37, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     12, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_Country_OptADAS", /* signalName */
     202, /* signalHandle */
     2, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_CountryCode", /* signalName */
     203, /* signalHandle */
     10, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_CyclicCounter", /* signalName */
     204, /* signalHandle */
     2, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_DrivingSide", /* signalName */
     205, /* signalHandle */
     1, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_HardwareVersion", /* signalName */
     206, /* signalHandle */
     9, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     16, /* startOffsetBit */
     511, /* startValue */
     511, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MajorProtocolVersion", /* signalName */
     207, /* signalHandle */
     2, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MapProvider", /* signalName */
     208, /* signalHandle */
     3, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MapVersionQuarter", /* signalName */
     209, /* signalHandle */
     2, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MapVersionYear", /* signalName */
     210, /* signalHandle */
     6, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     63, /* startValue */
     63, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MessageType", /* signalName */
     211, /* signalHandle */
     3, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MinorProtocolSubVer", /* signalName */
     212, /* signalHandle */
     3, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_MinorProtocolVersion", /* signalName */
     213, /* signalHandle */
     4, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_RegionCode", /* signalName */
     214, /* signalHandle */
     15, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     38, /* startOffsetBit */
     32767, /* startValue */
     32767, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "META_SpeedUnit", /* signalName */
     215, /* signalHandle */
     1, /* signalLength */
     206, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     60, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_CurrentLane", /* signalName */
     216, /* signalHandle */
     3, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_CyclicCounter", /* signalName */
     217, /* signalHandle */
     2, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_MessageType", /* signalName */
     218, /* signalHandle */
     3, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_Offset", /* signalName */
     219, /* signalHandle */
     13, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_PathIndex", /* signalName */
     220, /* signalHandle */
     6, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_PositionAge", /* signalName */
     221, /* signalHandle */
     9, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     511, /* startValue */
     511, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_PositionConfidence", /* signalName */
     222, /* signalHandle */
     3, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     46, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_PositionIndex", /* signalName */
     223, /* signalHandle */
     2, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_PositionProbability", /* signalName */
     224, /* signalHandle */
     5, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_RangeAvgSpeed", /* signalName */
     225, /* signalHandle */
     9, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     40, /* startOffsetBit */
     511, /* startValue */
     511, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "POS_RelativeHeading", /* signalName */
     226, /* signalHandle */
     8, /* signalLength */
     458, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_CountrolPoint", /* signalName */
     227, /* signalHandle */
     1, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_CyclicCounter", /* signalName */
     228, /* signalHandle */
     2, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_MessageType", /* signalName */
     229, /* signalHandle */
     3, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_Offset", /* signalName */
     230, /* signalHandle */
     13, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     36, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_PathIndex", /* signalName */
     231, /* signalHandle */
     6, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_ProfileType", /* signalName */
     232, /* signalHandle */
     5, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_Retransmission", /* signalName */
     233, /* signalHandle */
     1, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_Update", /* signalName */
     234, /* signalHandle */
     1, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     56, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROLONG_Value", /* signalName */
     235, /* signalHandle */
     32, /* signalLength */
     205, /* messageID */
     40, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     2147483647, /* startValue */
     2147483647, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Accuracy", /* signalName */
     236, /* signalHandle */
     2, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_ControlPoint", /* signalName */
     237, /* signalHandle */
     1, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_CyclicCounter", /* signalName */
     238, /* signalHandle */
     2, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Distance", /* signalName */
     239, /* signalHandle */
     10, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_MessageType", /* signalName */
     240, /* signalHandle */
     3, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Offset", /* signalName */
     241, /* signalHandle */
     13, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_PathIndex", /* signalName */
     242, /* signalHandle */
     6, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_ProfileType", /* signalName */
     243, /* signalHandle */
     5, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Retransmission", /* signalName */
     244, /* signalHandle */
     1, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Update", /* signalName */
     245, /* signalHandle */
     1, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     56, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Value0", /* signalName */
     246, /* signalHandle */
     10, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Value1", /* signalName */
     247, /* signalHandle */
     10, /* signalLength */
     204, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Accuracy_01", /* signalName */
     248, /* signalHandle */
     2, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_ControlPoint_01", /* signalName */
     249, /* signalHandle */
     1, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_CyclicCounter_01", /* signalName */
     250, /* signalHandle */
     2, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Distance_01", /* signalName */
     251, /* signalHandle */
     10, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_MessageType_01", /* signalName */
     252, /* signalHandle */
     3, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Offset_01", /* signalName */
     253, /* signalHandle */
     13, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_PathIndex_01", /* signalName */
     254, /* signalHandle */
     6, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_ProfileType_01", /* signalName */
     255, /* signalHandle */
     5, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Retransmission_01", /* signalName */
     256, /* signalHandle */
     1, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Update_01", /* signalName */
     257, /* signalHandle */
     1, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     56, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Value0_01", /* signalName */
     258, /* signalHandle */
     10, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PROSHORT_Value1_01", /* signalName */
     259, /* signalHandle */
     10, /* signalLength */
     207, /* messageID */
     42, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_Bridge", /* signalName */
     260, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_BuiltUpArea", /* signalName */
     261, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_CalculatedRoute", /* signalName */
     262, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_ComplexIntersection", /* signalName */
     263, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_CyclicCounter", /* signalName */
     264, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_DirectionLanes", /* signalName */
     265, /* signalHandle */
     3, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_FormOfWay", /* signalName */
     266, /* signalHandle */
     4, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_FunctionalRoadClass", /* signalName */
     267, /* signalHandle */
     3, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     34, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_MessageType", /* signalName */
     268, /* signalHandle */
     3, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_Offset", /* signalName */
     269, /* signalHandle */
     13, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_PathIndex", /* signalName */
     270, /* signalHandle */
     6, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_RelativeProbability", /* signalName */
     271, /* signalHandle */
     5, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_Retransmission", /* signalName */
     272, /* signalHandle */
     1, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_SpeedLimit", /* signalName */
     273, /* signalHandle */
     5, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_SpeedLimitType", /* signalName */
     274, /* signalHandle */
     3, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     50, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_SpeedLimitUnder5", /* signalName */
     275, /* signalHandle */
     3, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_Tunnel", /* signalName */
     276, /* signalHandle */
     2, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SEG_Update", /* signalName */
     277, /* signalHandle */
     1, /* signalLength */
     202, /* messageID */
     43, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_CalculatedRoute", /* signalName */
     278, /* signalHandle */
     2, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_ComplexIntersection", /* signalName */
     279, /* signalHandle */
     2, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_CyclicCounter", /* signalName */
     280, /* signalHandle */
     2, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_DirectionLanes", /* signalName */
     281, /* signalHandle */
     3, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_FormOfWay", /* signalName */
     282, /* signalHandle */
     4, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_FunctionalRoadClass", /* signalName */
     283, /* signalHandle */
     3, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     34, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_LastStubAtOffset", /* signalName */
     284, /* signalHandle */
     1, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_MessageType", /* signalName */
     285, /* signalHandle */
     3, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_Offset", /* signalName */
     286, /* signalHandle */
     13, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     8191, /* startValue */
     8191, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_PathIndex", /* signalName */
     287, /* signalHandle */
     6, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_RelativeProbability", /* signalName */
     288, /* signalHandle */
     5, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_Retransmission", /* signalName */
     289, /* signalHandle */
     1, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_RightOfWay", /* signalName */
     290, /* signalHandle */
     2, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_SubPathIndex", /* signalName */
     291, /* signalHandle */
     6, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_TurnAngle", /* signalName */
     292, /* signalHandle */
     8, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "STUB_Update", /* signalName */
     293, /* signalHandle */
     1, /* signalLength */
     203, /* messageID */
     44, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Bar_Graph_Color", /* signalName */
     294, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Car_Mark_Color", /* signalName */
     295, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Lane_Info_Color", /* signalName */
     296, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pattern_Branch_Color", /* signalName */
     297, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Route_Color", /* signalName */
     298, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TBT_Arrow_color", /* signalName */
     299, /* signalHandle */
     4, /* signalLength */
     230, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_RVM_CameraOff", /* signalName */
     300, /* signalHandle */
     2, /* signalLength */
     88, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_RVM_SelectedMenu", /* signalName */
     301, /* signalHandle */
     6, /* signalLength */
     88, /* messageID */
     46, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_RVM_ViewSW", /* signalName */
     302, /* signalHandle */
     2, /* signalLength */
     88, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_GdLnStaNvalueSet", /* signalName */
     303, /* signalHandle */
     2, /* signalLength */
     88, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_eCallStatus", /* signalName */
     304, /* signalHandle */
     2, /* signalLength */
     250, /* messageID */
     47, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     20, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Day", /* signalName */
     305, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Hour", /* signalName */
     306, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Minute", /* signalName */
     307, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Month", /* signalName */
     308, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Second", /* signalName */
     309, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_GPS_Year", /* signalName */
     310, /* signalHandle */
     8, /* signalLength */
     251, /* messageID */
     48, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_AdasVolumeNValueSet", /* signalName */
     311, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_BCANValueSet", /* signalName */
     312, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_BCWNValueSet", /* signalName */
     313, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_FCANValueSet", /* signalName */
     314, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_HDANValueSet", /* signalName */
     315, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_LkaModeNValueSet", /* signalName */
     316, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     54, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_NSCCCamNValueSet", /* signalName */
     317, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_PDWAutoOnNValueSet", /* signalName */
     318, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_RCCWNValueSet", /* signalName */
     319, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_SCCDrvModeNValueSet", /* signalName */
     320, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_SEANValueSet", /* signalName */
     321, /* signalHandle */
     2, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_TirePressUnitNValueSet", /* signalName */
     322, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_WarningTimingNValueSet", /* signalName */
     323, /* signalHandle */
     3, /* signalLength */
     101, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     26, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AVN_RearWiperNValueSet", /* signalName */
     324, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HfreeTrunkTgNValueSet", /* signalName */
     325, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_SmartWelocomeNValueSet", /* signalName */
     326, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_UnlockWelocomeNValueSet", /* signalName */
     327, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_ADrLNValueSet", /* signalName */
     328, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_ADrUNValueSet", /* signalName */
     329, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_EscortHLNValueSet", /* signalName */
     330, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Avn_HAPTICWARNINGNValueSet", /* signalName */
     331, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     54, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_OTTurnNValueSet", /* signalName */
     332, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     18, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_PSMNValueSet", /* signalName */
     333, /* signalHandle */
     3, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_SEA_NEWNValueSet", /* signalName */
     334, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_SequencialLampNValue", /* signalName */
     335, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_SEW_NEWNValueSet", /* signalName */
     336, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_TTUnlockNValueSet", /* signalName */
     337, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_TunnelWindowNvalueSet", /* signalName */
     338, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_WPCNValueSet", /* signalName */
     339, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CR_Datc_DRSeatWheel_USM_Set", /* signalName */
     340, /* signalHandle */
     2, /* signalLength */
     102, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluAutoInitFuelEconomy", /* signalName */
     341, /* signalHandle */
     3, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluFuelEconUnit_km", /* signalName */
     342, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     26, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluFuelEconUnit_mi", /* signalName */
     343, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     28, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluRheostatLvl", /* signalName */
     344, /* signalHandle */
     5, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     54, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluRoadInfoGuide", /* signalName */
     345, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluServiceReminderReset", /* signalName */
     346, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluServiceReminderSet", /* signalName */
     347, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluSubspeedOdometerDisp", /* signalName */
     348, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     30, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluTransmissionDisp", /* signalName */
     349, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluUserSettingDistance", /* signalName */
     350, /* signalHandle */
     17, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     131071, /* startValue */
     131071, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluUserSettingPeriod", /* signalName */
     351, /* signalHandle */
     7, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     22, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluUSMReset", /* signalName */
     352, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluVoiceVolume", /* signalName */
     353, /* signalHandle */
     3, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluWelcomeSnd", /* signalName */
     354, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_CluWiperLight", /* signalName */
     355, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_IcyRoadWarn", /* signalName */
     356, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_UnitReset", /* signalName */
     357, /* signalHandle */
     2, /* signalLength */
     104, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AVN_Usm_CluFuelEconomySet", /* signalName */
     358, /* signalHandle */
     3, /* signalLength */
     105, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AVN_Usm_CluThemeAutoSet", /* signalName */
     359, /* signalHandle */
     2, /* signalLength */
     105, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLPDrivemodeNValue", /* signalName */
     360, /* signalHandle */
     2, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpDrivingNValue", /* signalName */
     361, /* signalHandle */
     2, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_DAW_LVDANValueSet", /* signalName */
     362, /* signalHandle */
     2, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_DAWModeNValueSet_NEW", /* signalName */
     363, /* signalHandle */
     2, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_HBANValueSet", /* signalName */
     364, /* signalHandle */
     2, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_MoodLpBlueNValueSet", /* signalName */
     365, /* signalHandle */
     10, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_MoodLpBrightNValueSet", /* signalName */
     366, /* signalHandle */
     9, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_MoodLpGreenNValueSet", /* signalName */
     367, /* signalHandle */
     10, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_MoodLpRedNValueSet", /* signalName */
     368, /* signalHandle */
     10, /* signalLength */
     106, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HAnBNValueSet", /* signalName */
     369, /* signalHandle */
     2, /* signalLength */
     219, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_RrSeatRemindNValueSet", /* signalName */
     370, /* signalHandle */
     2, /* signalLength */
     219, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AVN_Usm_CluThemeSta_New", /* signalName */
     371, /* signalHandle */
     4, /* signalLength */
     545, /* messageID */
     55, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_AVN_1stRrStRmndNValueSet", /* signalName */
     372, /* signalHandle */
     2, /* signalLength */
     545, /* messageID */
     55, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

};

/* Set Receive Singal Property Information*/
signal_property_info_t comReceiveSignalProperty[COM_RECEIVE_SIGNAL_COUNT] =
{
    {
     "AMP_MajorVer", /* signalName */
     0, /* signalHandle */
     8, /* signalLength */
     128, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MinorVer", /* signalName */
     1, /* signalHandle */
     8, /* signalLength */
     128, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SPDIFModeState", /* signalName */
     2, /* signalHandle */
     4, /* signalLength */
     128, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_TuningMajorVer", /* signalName */
     3, /* signalHandle */
     8, /* signalLength */
     128, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_TuningMinorVer", /* signalName */
     4, /* signalHandle */
     8, /* signalLength */
     128, /* messageID */
     0, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxNaviAudioCutState", /* signalName */
     5, /* signalHandle */
     8, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxNaviVolumeState", /* signalName */
     6, /* signalHandle */
     8, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviAudioCutState", /* signalName */
     7, /* signalHandle */
     8, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviMuteMaskState", /* signalName */
     8, /* signalHandle */
     16, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviOutputMaskState", /* signalName */
     9, /* signalHandle */
     16, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviVolumeState", /* signalName */
     10, /* signalHandle */
     8, /* signalLength */
     130, /* messageID */
     1, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxMTSAudioCutState", /* signalName */
     11, /* signalHandle */
     8, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxMTSVolumeState", /* signalName */
     12, /* signalHandle */
     8, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSAudioCutState", /* signalName */
     13, /* signalHandle */
     8, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSMuteMaskState", /* signalName */
     14, /* signalHandle */
     16, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSOutputMaskState", /* signalName */
     15, /* signalHandle */
     16, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSVolumeState", /* signalName */
     16, /* signalHandle */
     8, /* signalLength */
     131, /* messageID */
     2, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFAudioCutState", /* signalName */
     17, /* signalHandle */
     8, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFMuteMaskState", /* signalName */
     18, /* signalHandle */
     16, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFOutputMaskState", /* signalName */
     19, /* signalHandle */
     16, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFVolumeState", /* signalName */
     20, /* signalHandle */
     8, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxHFAudioCutState", /* signalName */
     21, /* signalHandle */
     8, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxHFVolumeState", /* signalName */
     22, /* signalHandle */
     8, /* signalLength */
     132, /* messageID */
     3, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBalanceStep", /* signalName */
     23, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBassStep", /* signalName */
     24, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxFadeStep", /* signalName */
     25, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxMidStep", /* signalName */
     26, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxTrebleStep", /* signalName */
     27, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxVolumeStep", /* signalName */
     28, /* signalHandle */
     8, /* signalLength */
     133, /* messageID */
     4, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1OutputMaskSup", /* signalName */
     29, /* signalHandle */
     2, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBeep1DOffState", /* signalName */
     30, /* signalHandle */
     8, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBeep1DOnState", /* signalName */
     31, /* signalHandle */
     8, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBeep1Freq_State", /* signalName */
     32, /* signalHandle */
     16, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBeep1NOfCycleState", /* signalName */
     33, /* signalHandle */
     8, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MaxBeep1VolumeState", /* signalName */
     34, /* signalHandle */
     8, /* signalLength */
     135, /* messageID */
     5, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeMuteMaskState", /* signalName */
     35, /* signalHandle */
     16, /* signalLength */
     136, /* messageID */
     6, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFMuteMaskSupport", /* signalName */
     36, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_HFOutputMaskSupport", /* signalName */
     37, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSMuteMaskSupport", /* signalName */
     38, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MTSOutputMaskSupport", /* signalName */
     39, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviMuteMaskSupport", /* signalName */
     40, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviOutputMaskSupport", /* signalName */
     41, /* signalHandle */
     2, /* signalLength */
     137, /* messageID */
     7, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1DOffState", /* signalName */
     42, /* signalHandle */
     8, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1DOnState", /* signalName */
     43, /* signalHandle */
     8, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1FrequencyState", /* signalName */
     44, /* signalHandle */
     16, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1NOfCycleState", /* signalName */
     45, /* signalHandle */
     8, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1OutputMaskState", /* signalName */
     46, /* signalHandle */
     16, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1VolumeState", /* signalName */
     47, /* signalHandle */
     8, /* signalLength */
     138, /* messageID */
     8, /* messageHandle */
     TTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MakerID", /* signalName */
     48, /* signalHandle */
     8, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Support_ElecSound", /* signalName */
     49, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportAudioSource", /* signalName */
     50, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportBeatsMode", /* signalName */
     51, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportBeepVolumeControl", /* signalName */
     52, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportCfgBeep1", /* signalName */
     53, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportEQState", /* signalName */
     54, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportHFMode", /* signalName */
     55, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportLiveDynamicMode", /* signalName */
     56, /* signalHandle */
     3, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportMTSMode", /* signalName */
     57, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportMute", /* signalName */
     58, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportNaviMode", /* signalName */
     59, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportQLS", /* signalName */
     60, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportRearSpMute", /* signalName */
     61, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportSignalDoctor", /* signalName */
     62, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportSPDIFModeState", /* signalName */
     63, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportSpeedAdjust", /* signalName */
     64, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportSurroundMode", /* signalName */
     65, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportVehicleID", /* signalName */
     66, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportVEQMode", /* signalName */
     67, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportVIPMode", /* signalName */
     68, /* signalHandle */
     2, /* signalLength */
     1408, /* messageID */
     9, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Support_SDVC", /* signalName */
     69, /* signalHandle */
     2, /* signalLength */
     1400, /* messageID */
     10, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SupportWrnPromptMode", /* signalName */
     70, /* signalHandle */
     2, /* signalLength */
     1400, /* messageID */
     10, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_Beep1ModeState", /* signalName */
     71, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_DistrInfoState", /* signalName */
     72, /* signalHandle */
     8, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_INFORM_TO_IPM", /* signalName */
     73, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_NaviModeState", /* signalName */
     74, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SDVCStepState", /* signalName */
     75, /* signalHandle */
     3, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SignalDoctorState", /* signalName */
     76, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SPDIFInfo", /* signalName */
     77, /* signalHandle */
     3, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     12, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_StartUpComplete", /* signalName */
     78, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     14, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_VSCModeState", /* signalName */
     79, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "HU_InitInfo", /* signalName */
     80, /* signalHandle */
     2, /* signalLength */
     384, /* messageID */
     11, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_AudioSource", /* signalName */
     81, /* signalHandle */
     8, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_EQState", /* signalName */
     82, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_LiveDynamicModeState", /* signalName */
     83, /* signalHandle */
     3, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MuteState", /* signalName */
     84, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QLSModeState", /* signalName */
     85, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_QuietModeState", /* signalName */
     86, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_SPDIFMuteSt", /* signalName */
     87, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_WrnPromptModeSta", /* signalName */
     88, /* signalHandle */
     2, /* signalLength */
     385, /* messageID */
     12, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_BalanceSetting", /* signalName */
     89, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_BassSetting", /* signalName */
     90, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_FadeSetting", /* signalName */
     91, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MainVolumeSetting", /* signalName */
     92, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_MidSetting", /* signalName */
     93, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_TrebleSetting", /* signalName */
     94, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AMP_VehicleSpeedamp", /* signalName */
     95, /* signalHandle */
     8, /* signalLength */
     387, /* messageID */
     13, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_CLU_ADASMenu_Shortcut", /* signalName */
     96, /* signalHandle */
     2, /* signalLength */
     209, /* messageID */
     14, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_CLU_WelcomeStartReq", /* signalName */
     97, /* signalHandle */
     2, /* signalLength */
     209, /* messageID */
     14, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_SWVerMajor", /* signalName */
     98, /* signalHandle */
     8, /* signalLength */
     1496, /* messageID */
     15, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_SWVerMinor", /* signalName */
     99, /* signalHandle */
     48, /* signalLength */
     1496, /* messageID */
     15, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_CluThemeSta_New", /* signalName */
     100, /* signalHandle */
     4, /* signalLength */
     464, /* messageID */
     16, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_DispTyp", /* signalName */
     101, /* signalHandle */
     4, /* signalLength */
     464, /* messageID */
     16, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_ThemeOpt", /* signalName */
     102, /* signalHandle */
     16, /* signalLength */
     464, /* messageID */
     16, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_InhibitNMT", /* signalName */
     103, /* signalHandle */
     2, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_AdasWarnSndStat", /* signalName */
     104, /* signalHandle */
     2, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_OutTempC", /* signalName */
     105, /* signalHandle */
     8, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_OutTempF", /* signalName */
     106, /* signalHandle */
     8, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_RheostaSteptInfo", /* signalName */
     107, /* signalHandle */
     2, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_RheostatLvl", /* signalName */
     108, /* signalHandle */
     5, /* signalLength */
     479, /* messageID */
     17, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     31, /* startValue */
     31, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Clu_SPEED_UNIT_Default", /* signalName */
     109, /* signalHandle */
     2, /* signalLength */
     474, /* messageID */
     18, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_AdasVolAutoOnSetReq", /* signalName */
     110, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     30, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_AdasVolume", /* signalName */
     111, /* signalHandle */
     3, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_AutoinitFuelEconomy", /* signalName */
     112, /* signalHandle */
     3, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_CluThemeAutoSetSta", /* signalName */
     113, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     36, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_FuelEconomySta", /* signalName */
     114, /* signalHandle */
     3, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     34, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_FuelEconUnit_km", /* signalName */
     115, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_FuelEconUnit_mi", /* signalName */
     116, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_IcyRoadWarn", /* signalName */
     117, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_Roadinfoguide", /* signalName */
     118, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_SubspeedometerDisp", /* signalName */
     119, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_TransmissionDisp", /* signalName */
     120, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_VoiceVolume", /* signalName */
     121, /* signalHandle */
     3, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_WelcomeSound", /* signalName */
     122, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CLU_Usm_WiperLight", /* signalName */
     123, /* signalHandle */
     2, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Warn_Sound_AdasVolumeFeedback", /* signalName */
     124, /* signalHandle */
     3, /* signalLength */
     468, /* messageID */
     19, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     28, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_SrvRmndrAlrm", /* signalName */
     125, /* signalHandle */
     2, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceRemainDistance", /* signalName */
     126, /* signalHandle */
     18, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     262143, /* startValue */
     262143, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceRemainPeriod", /* signalName */
     127, /* signalHandle */
     15, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     24, /* startOffsetBit */
     32767, /* startValue */
     32767, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceReminderMode", /* signalName */
     128, /* signalHandle */
     2, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceReminderSet", /* signalName */
     129, /* signalHandle */
     2, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceReminderUnit", /* signalName */
     130, /* signalHandle */
     1, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceUsersetDistance", /* signalName */
     131, /* signalHandle */
     17, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     131071, /* startValue */
     131071, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Clu_Usm_ServiceUsersetPeriod", /* signalName */
     132, /* signalHandle */
     7, /* signalLength */
     469, /* messageID */
     20, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     0, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_DrTempDispC", /* signalName */
     133, /* signalHandle */
     8, /* signalLength */
     305, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_DrTempDispF", /* signalName */
     134, /* signalHandle */
     8, /* signalLength */
     305, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_PsTempDispC", /* signalName */
     135, /* signalHandle */
     8, /* signalLength */
     305, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_PsTempDispF", /* signalName */
     136, /* signalHandle */
     8, /* signalLength */
     305, /* messageID */
     21, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_AcDisp", /* signalName */
     137, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_AirCleaningSystemStatus", /* signalName */
     138, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_AutoDefogBlink", /* signalName */
     139, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_AutoDisp", /* signalName */
     140, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_ChangeReqDisp", /* signalName */
     141, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_ClimateScnDisp", /* signalName */
     142, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_IntakeDisp", /* signalName */
     143, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_MainBlowerDisp", /* signalName */
     144, /* signalHandle */
     4, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_ModeDisp", /* signalName */
     145, /* signalHandle */
     4, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_OpSts", /* signalName */
     146, /* signalHandle */
     3, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     30, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_TempUnit", /* signalName */
     147, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_Text_PopupReq", /* signalName */
     148, /* signalHandle */
     2, /* signalLength */
     306, /* messageID */
     22, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_DiagMode", /* signalName */
     149, /* signalHandle */
     2, /* signalLength */
     307, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntUSMSta", /* signalName */
     150, /* signalHandle */
     2, /* signalLength */
     307, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SelfDiagDisp", /* signalName */
     151, /* signalHandle */
     8, /* signalLength */
     307, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_Variant", /* signalName */
     152, /* signalHandle */
     8, /* signalLength */
     307, /* messageID */
     23, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_AutoFresh_USM_State", /* signalName */
     153, /* signalHandle */
     2, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_DefLogic_USM_State", /* signalName */
     154, /* signalHandle */
     2, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_Option4", /* signalName */
     155, /* signalHandle */
     4, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_ADSOnOffStatus", /* signalName */
     156, /* signalHandle */
     2, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SyncDisp", /* signalName */
     157, /* signalHandle */
     4, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_WshFldUSMSta", /* signalName */
     158, /* signalHandle */
     2, /* signalLength */
     308, /* messageID */
     24, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_IntakeStatus", /* signalName */
     159, /* signalHandle */
     2, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_Option1", /* signalName */
     160, /* signalHandle */
     8, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_Option2", /* signalName */
     161, /* signalHandle */
     8, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Datc_Option3", /* signalName */
     162, /* signalHandle */
     8, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_DATC_TempDisp_Sts", /* signalName */
     163, /* signalHandle */
     2, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntHrSta", /* signalName */
     164, /* signalHandle */
     5, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     60, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SchdldVntMinSta", /* signalName */
     165, /* signalHandle */
     3, /* signalLength */
     309, /* messageID */
     25, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TMU_eCall_Fail", /* signalName */
     166, /* signalHandle */
     2, /* signalLength */
     70, /* messageID */
     26, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ANC_EngineCHR", /* signalName */
     167, /* signalHandle */
     4, /* signalLength */
     336, /* messageID */
     27, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PassiveAccessUnlock", /* signalName */
     168, /* signalHandle */
     3, /* signalLength */
     167, /* messageID */
     28, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_ACC", /* signalName */
     169, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AutolightValue", /* signalName */
     170, /* signalHandle */
     1, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AV_Tail", /* signalName */
     171, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_BodyTypeOption", /* signalName */
     172, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_IGN1", /* signalName */
     173, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_IGN2", /* signalName */
     174, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_WlightOn", /* signalName */
     175, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_ICU_SeaWarn_Lh", /* signalName */
     176, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_ICU_SeaWarn_Rh", /* signalName */
     177, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RL_SndWarn", /* signalName */
     178, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RR_SndWarn", /* signalName */
     179, /* signalHandle */
     2, /* signalLength */
     362, /* messageID */
     29, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "AVH_LAMP", /* signalName */
     180, /* signalHandle */
     3, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     42, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "BAT_SNSR_Error", /* signalName */
     181, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "BAT_SNSR_Invalid", /* signalName */
     182, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "BAT_SNSR_State", /* signalName */
     183, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "BAT_SOC", /* signalName */
     184, /* signalHandle */
     8, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_Inhibit_State", /* signalName */
     185, /* signalHandle */
     4, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_P_BrakeStatus", /* signalName */
     186, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Ems_IsgStat", /* signalName */
     187, /* signalHandle */
     3, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Ems_IsgStat2", /* signalName */
     188, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ENG_STAT", /* signalName */
     189, /* signalHandle */
     3, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     18, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "EPB_STATUS", /* signalName */
     190, /* signalHandle */
     3, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TCU_TYPE", /* signalName */
     191, /* signalHandle */
     2, /* signalLength */
     361, /* messageID */
     30, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_Odometer", /* signalName */
     192, /* signalHandle */
     24, /* signalLength */
     1390, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     16777215, /* startValue */
     16777215, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_VehicleSpeed", /* signalName */
     193, /* signalHandle */
     8, /* signalLength */
     1390, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Clu_DisplaySpeed", /* signalName */
     194, /* signalHandle */
     9, /* signalLength */
     1390, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     40, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Clu_SPEED_UNIT", /* signalName */
     195, /* signalHandle */
     2, /* signalLength */
     1390, /* messageID */
     31, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     46, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_InhibitRMT", /* signalName */
     196, /* signalHandle */
     2, /* signalLength */
     344, /* messageID */
     32, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Clu_DTE", /* signalName */
     197, /* signalHandle */
     10, /* signalLength */
     344, /* messageID */
     32, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     1023, /* startValue */
     1023, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Clu_LowfuelWarning", /* signalName */
     198, /* signalHandle */
     2, /* signalLength */
     344, /* messageID */
     32, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DriveModeState_New_Change", /* signalName */
     199, /* signalHandle */
     4, /* signalLength */
     91, /* messageID */
     33, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_NotPWarnIMS", /* signalName */
     200, /* signalHandle */
     2, /* signalLength */
     92, /* messageID */
     34, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "IBU_SwVer_Major", /* signalName */
     201, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     8, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "IBU_SwVer_Minor1", /* signalName */
     202, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "IBU_SwVer_Minor2", /* signalName */
     203, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     6, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PSM_SwVer_Major", /* signalName */
     204, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PSM_SwVer_Minor1", /* signalName */
     205, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "PSM_SwVer_Minor2", /* signalName */
     206, /* signalHandle */
     7, /* signalLength */
     1498, /* messageID */
     35, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     44, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "WPC_SwVer_Major", /* signalName */
     207, /* signalHandle */
     7, /* signalLength */
     1499, /* messageID */
     36, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "WPC_SwVer_Minor1", /* signalName */
     208, /* signalHandle */
     7, /* signalLength */
     1499, /* messageID */
     36, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "WPC_SwVer_Minor2", /* signalName */
     209, /* signalHandle */
     7, /* signalLength */
     1499, /* messageID */
     36, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     44, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SwVer_Major", /* signalName */
     210, /* signalHandle */
     7, /* signalLength */
     1500, /* messageID */
     37, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SwVer_Minor1", /* signalName */
     211, /* signalHandle */
     7, /* signalLength */
     1500, /* messageID */
     37, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DATC_SwVer_Minor2", /* signalName */
     212, /* signalHandle */
     7, /* signalLength */
     1500, /* messageID */
     37, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     44, /* startOffsetBit */
     127, /* startValue */
     127, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstDrSw", /* signalName */
     213, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     0, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvDrSw", /* signalName */
     214, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_ExtTailAct", /* signalName */
     215, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_FrtFogAct", /* signalName */
     216, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HLpHighAct", /* signalName */
     217, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HLpLowAct", /* signalName */
     218, /* signalHandle */
     1, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     8, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_HDA_LFA_SymbolState", /* signalName */
     219, /* signalHandle */
     3, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     32, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DrivingModeState_New", /* signalName */
     220, /* signalHandle */
     4, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     63, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "MODE_CF_HDA", /* signalName */
     221, /* signalHandle */
     2, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "MODE_NSCC_CurAct", /* signalName */
     222, /* signalHandle */
     2, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "MODE_SCC_2", /* signalName */
     223, /* signalHandle */
     3, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "MODE_SCC_Main", /* signalName */
     224, /* signalHandle */
     2, /* signalLength */
     349, /* messageID */
     38, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_BAlarmState", /* signalName */
     225, /* signalHandle */
     4, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DefoggerRly", /* signalName */
     226, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DriveTypeOption", /* signalName */
     227, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HoodSw", /* signalName */
     228, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PanicState", /* signalName */
     229, /* signalHandle */
     1, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_Pposition", /* signalName */
     230, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PpositionClutch", /* signalName */
     231, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RrSeatRemindAlarm", /* signalName */
     232, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     47, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_StrgWhlHeatedState", /* signalName */
     233, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_SunRoofOpenState", /* signalName */
     234, /* signalHandle */
     1, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     20, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_WPCWarning", /* signalName */
     235, /* signalHandle */
     3, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     62, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CR_Wcs_ClassStat", /* signalName */
     236, /* signalHandle */
     8, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     4, /* startValue */
     4, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TMU_RmtEngRunSta", /* signalName */
     237, /* signalHandle */
     2, /* signalLength */
     350, /* messageID */
     39, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "N", /* signalName */
     238, /* signalHandle */
     16, /* signalLength */
     351, /* messageID */
     40, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "BAlarm_PncAlrmReq", /* signalName */
     239, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstWindowOpenState", /* signalName */
     240, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_BrakeFluidSw", /* signalName */
     241, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvWindowOpenState", /* signalName */
     242, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_FOBBatteryStatusInfo", /* signalName */
     243, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_FrontTSIGLhOpenSts", /* signalName */
     244, /* signalHandle */
     1, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     58, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_FrontTSIGRhOpenSts", /* signalName */
     245, /* signalHandle */
     1, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RearTSIGLhOpenSts", /* signalName */
     246, /* signalHandle */
     1, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     56, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RearTSIGRhOpenSts", /* signalName */
     247, /* signalHandle */
     1, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RLWindowOpenState", /* signalName */
     248, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RRWindowOpenState", /* signalName */
     249, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DoorLock_AsstDrUnLkSta", /* signalName */
     250, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DoorLock_DrvDrUnLkSta", /* signalName */
     251, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DoorLock_RrLftDrUnLkSta", /* signalName */
     252, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "DoorLock_RrRtDrUnLkSta", /* signalName */
     253, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ExtLamp_ExtrnlTailLmpSta", /* signalName */
     254, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ExtLamp_FrFgLmpSta", /* signalName */
     255, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ExtLamp_HdLmpHiSta", /* signalName */
     256, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ExtLamp_HdLmpLoSta", /* signalName */
     257, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Lamp_AutoLtSnsrNightSta", /* signalName */
     258, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Trunk_TrnkTlgtSwSta", /* signalName */
     259, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Warn_AsstDrSwSta", /* signalName */
     260, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Warn_DrvDrSwSta", /* signalName */
     261, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Warn_RrLftDrSwSta", /* signalName */
     262, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Warn_RrRtDrSwSta", /* signalName */
     263, /* signalHandle */
     2, /* signalLength */
     383, /* messageID */
     41, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TSigLhSw", /* signalName */
     264, /* signalHandle */
     2, /* signalLength */
     413, /* messageID */
     42, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_TSigRhSw", /* signalName */
     265, /* signalHandle */
     2, /* signalLength */
     413, /* messageID */
     42, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Batt_SoC", /* signalName */
     266, /* signalHandle */
     8, /* signalLength */
     415, /* messageID */
     43, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     255, /* startValue */
     255, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_StrgWhlHeatingOpt", /* signalName */
     267, /* signalHandle */
     2, /* signalLength */
     415, /* messageID */
     43, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_ADrLOptInfo", /* signalName */
     268, /* signalHandle */
     3, /* signalLength */
     415, /* messageID */
     43, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     42, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstWdwDetailOpenState", /* signalName */
     269, /* signalHandle */
     3, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     14, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstWdwErrAntiPinch", /* signalName */
     270, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_AstWindowActState", /* signalName */
     271, /* signalHandle */
     4, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvWdwDetailOpenState", /* signalName */
     272, /* signalHandle */
     3, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvWdwErrAntiPinch", /* signalName */
     273, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvWindowActState", /* signalName */
     274, /* signalHandle */
     4, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_IMSOption", /* signalName */
     275, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RLWdwDetailOpenState", /* signalName */
     276, /* signalHandle */
     3, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     50, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RLWdwErrAntiPinch", /* signalName */
     277, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RLWindowActState", /* signalName */
     278, /* signalHandle */
     4, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RRWdwDetailOpenState", /* signalName */
     279, /* signalHandle */
     3, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     54, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RRWdwErrAntiPinch", /* signalName */
     280, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     1, /* startValue */
     1, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RRWindowActState", /* signalName */
     281, /* signalHandle */
     4, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_SafetyWDWOpt", /* signalName */
     282, /* signalHandle */
     2, /* signalLength */
     416, /* messageID */
     44, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PASOption", /* signalName */
     283, /* signalHandle */
     2, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     1, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayFCTR", /* signalName */
     284, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayFLH", /* signalName */
     285, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     4, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayFRH", /* signalName */
     286, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayRCTR", /* signalName */
     287, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayRLH", /* signalName */
     288, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     18, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PasDisplayRRH", /* signalName */
     289, /* signalHandle */
     3, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PASSystemOn", /* signalName */
     290, /* signalHandle */
     2, /* signalLength */
     358, /* messageID */
     45, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvHeightDnSw", /* signalName */
     291, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     17, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvHeightUpSw", /* signalName */
     292, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvReclineBwdSw", /* signalName */
     293, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvReclineFwdSw", /* signalName */
     294, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvSlideBwdSw", /* signalName */
     295, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     5, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvSlideFwdSw", /* signalName */
     296, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvTiltDnSw", /* signalName */
     297, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_DrvTiltUpSw", /* signalName */
     298, /* signalHandle */
     2, /* signalLength */
     398, /* messageID */
     46, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     11, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_Btn_Sta", /* signalName */
     299, /* signalHandle */
     2, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_FuncTyp2", /* signalName */
     300, /* signalHandle */
     8, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     128, /* startValue */
     128, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_GdLnSta", /* signalName */
     301, /* signalHandle */
     2, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_RrViewBtn_Sta", /* signalName */
     302, /* signalHandle */
     3, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     28, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_Type_Value", /* signalName */
     303, /* signalHandle */
     4, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_Version", /* signalName */
     304, /* signalHandle */
     16, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     55, /* startOffsetBit */
     65535, /* startValue */
     65535, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "RVM_View", /* signalName */
     305, /* signalHandle */
     4, /* signalLength */
     294, /* messageID */
     47, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     3, /* startOffsetBit */
     15, /* startValue */
     15, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_BCA_USM", /* signalName */
     306, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     50, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_BCW_DrvSetState", /* signalName */
     307, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_BCW_USM", /* signalName */
     308, /* signalHandle */
     2, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     52, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_HDA_Opt_USM", /* signalName */
     309, /* signalHandle */
     2, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     21, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_LKA_Opt_USM", /* signalName */
     310, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_RCCW_USM", /* signalName */
     311, /* signalHandle */
     2, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_TirePressure_Unit", /* signalName */
     312, /* signalHandle */
     2, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "FCA_DrvSetState", /* signalName */
     313, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "FCA_USM", /* signalName */
     314, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     42, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SCC_NSCCOnOffSta", /* signalName */
     315, /* signalHandle */
     2, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "SCCDrvModeRValue", /* signalName */
     316, /* signalHandle */
     3, /* signalLength */
     378, /* messageID */
     48, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     26, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_ICU_Haptic_OPT", /* signalName */
     317, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_RearWiperRValue", /* signalName */
     318, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_SmartWelcomRValue", /* signalName */
     319, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_UnlockWelcomeRValue", /* signalName */
     320, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_WelcomeSysTitleOption", /* signalName */
     321, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     20, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_ADrLRValue", /* signalName */
     322, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_ADrURValue", /* signalName */
     323, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     12, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_EscortHLRValue", /* signalName */
     324, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_HfreeTrunkTgRValue", /* signalName */
     325, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     15, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_OTTurnRValue", /* signalName */
     326, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_PSMRValue", /* signalName */
     327, /* signalHandle */
     3, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     2, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_TTUnlockRValue", /* signalName */
     328, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     33, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_WPCRValue", /* signalName */
     329, /* signalHandle */
     2, /* signalLength */
     379, /* messageID */
     49, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     9, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_MemoryP1Cmd", /* signalName */
     330, /* signalHandle */
     2, /* signalLength */
     380, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_MemoryP2Cmd", /* signalName */
     331, /* signalHandle */
     2, /* signalLength */
     380, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "ICU_ADASHapticAutoOnSetReq", /* signalName */
     332, /* signalHandle */
     2, /* signalLength */
     380, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     37, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "USM_HapticCurrentSta", /* signalName */
     333, /* signalHandle */
     2, /* signalLength */
     380, /* messageID */
     50, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     39, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpBlueRValue", /* signalName */
     334, /* signalHandle */
     10, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     19, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpBrightRValue", /* signalName */
     335, /* signalHandle */
     4, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     35, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLPDrivemodeRValue", /* signalName */
     336, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpDrivingRValue", /* signalName */
     337, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpGreenRValue", /* signalName */
     338, /* signalHandle */
     10, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_MoodLpRedRValue", /* signalName */
     339, /* signalHandle */
     10, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     512, /* startValue */
     512, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_PDWAutoOnRValue", /* signalName */
     340, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_DAW_Opt_USM_NEW", /* signalName */
     341, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     43, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_HBA_Opt_USM", /* signalName */
     342, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     41, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_LeadVehDptAlert_USM", /* signalName */
     343, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     45, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_RCCA_USM", /* signalName */
     344, /* signalHandle */
     2, /* signalLength */
     381, /* messageID */
     51, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "C_HAnBRValue", /* signalName */
     345, /* signalHandle */
     2, /* signalLength */
     298, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     27, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_1stRrSeatRemindRvalue", /* signalName */
     346, /* signalHandle */
     2, /* signalLength */
     298, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_Gway_RrSeatRemindRValue", /* signalName */
     347, /* signalHandle */
     2, /* signalLength */
     298, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     25, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_LKA_Mode", /* signalName */
     348, /* signalHandle */
     2, /* signalLength */
     298, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     23, /* startOffsetBit */
     2, /* startValue */
     2, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_SEW_USM_NEW", /* signalName */
     349, /* signalHandle */
     2, /* signalLength */
     298, /* messageID */
     52, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "CF_LKA_USM_Mode", /* signalName */
     350, /* signalHandle */
     3, /* signalLength */
     299, /* messageID */
     53, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     50, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Lkas_LH_Warning", /* signalName */
     351, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     29, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Lkas_RH_Warning", /* signalName */
     352, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     31, /* startOffsetBit */
     3, /* startValue */
     3, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Fcnt_Alarm", /* signalName */
     353, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     51, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Flh_Alarm", /* signalName */
     354, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     49, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Frh_Alarm", /* signalName */
     355, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     53, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Rcnt_Alarm", /* signalName */
     356, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     59, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Rlh_Alarm", /* signalName */
     357, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     57, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Pas_Spkr_Rrh_Alarm", /* signalName */
     358, /* signalHandle */
     2, /* signalLength */
     359, /* messageID */
     54, /* messageHandle */
     TTPWR, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     61, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Destination_CGW", /* signalName */
     359, /* signalHandle */
     8, /* signalLength */
     1025, /* messageID */
     55, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMCommandCode_CGW", /* signalName */
     360, /* signalHandle */
     3, /* signalLength */
     1025, /* messageID */
     55, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMSleepFlag_CGW", /* signalName */
     361, /* signalHandle */
     2, /* signalLength */
     1025, /* messageID */
     55, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Destination_CLU", /* signalName */
     362, /* signalHandle */
     8, /* signalLength */
     1027, /* messageID */
     56, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMCommandCode_CLU", /* signalName */
     363, /* signalHandle */
     3, /* signalLength */
     1027, /* messageID */
     56, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMSleepFlag_CLU", /* signalName */
     364, /* signalHandle */
     2, /* signalLength */
     1027, /* messageID */
     56, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "Destination_TMU", /* signalName */
     365, /* signalHandle */
     8, /* signalLength */
     1026, /* messageID */
     57, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     7, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMCommandCode_TMU", /* signalName */
     366, /* signalHandle */
     3, /* signalLength */
     1026, /* messageID */
     57, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     10, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "NMSleepFlag_TMU", /* signalName */
     367, /* signalHandle */
     2, /* signalLength */
     1026, /* messageID */
     57, /* messageHandle */
     PTP, /* sendProperty */
     F_ALWAYS, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     13, /* startOffsetBit */
     0, /* startValue */
     0, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

    {
     "TMU_eCall", /* signalName */
     368, /* signalHandle */
     3, /* signalLength */
     64, /* messageID */
     58, /* messageHandle */
     TTP, /* sendProperty */
     F_NEWISDIFFRENT, /* filterAlorigthm */
     BYTE_ORDER_BIG_ENDIAN, /* byteOrder */
     28, /* startOffsetBit */
     7, /* startValue */
     7, /* signalData */
     0, /* timeoutValue */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* transmissionNotification */
     {NOTIFICATION_DEACTIVE,NOTIFICATION_INVALID,NULL},/* receptionNotification */
    },

};
