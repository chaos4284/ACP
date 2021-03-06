# ACP
## 1. ACG/ACB Application
- BOARD : NUCLEO - F446RE
- CAN Transceiver : VP231 High Speed Transceiver
- SET CAN BaudRate : 500kb

## 2. Porting Guide
### 2.1 Parameter Generation
- Reference https://github.com/chaos4284/ACG ReadMe

### 2.2 BSW Code
- git clone https://github.com/chaos4284/ACB.git

### 2.3 Porting 
- Include the file created in 2.1 and the BSW code in 2.2 in your project.
- The following is called according to the calling time of COM and TP set in 2.2 Call.
```C    
    ex) COM Call Time = 5ms and TP Call Time = 5ms 
    
    if(timer5ms == set)
    {
        timer5ms = clear;
        ProcessComTask(); // COM TASK
        SendTpTask(); // TP TASK
        TimerTpTask(); // TP TASK
    }
```

-  Function ReceiveRawData() and SendRawDataConfirm() in interface_hook.c, generated code in 2.1, is called from CAN transmission completion confirmation or ISR.
```C
   ex) Here in the porting source..
   src/stm32f4xx_it.c
   void CAN1_RX0_IRQHandler(void) // CAN receive ISR
   {
           ..
        ReceiveRawData(RxMessage.StdId,RxMessage.Data); //passing received CAN ID and CAN DATA
   }

   
   void CAN1_TX_IRQHandler(void) // CAN transmission completion confirmation ISR
   {
           ..
        SendRawDataConfirm((CAN1->sTxMailBox[mailBoxIndex].TIR) >> 21,Data); //passing transmitted CAN ID and CAN DATA
   }
```  

- Implement the actual CAN transmission function in the SendRawData() function in interface_hook.c.
```C
   ex) Here in the porting source..
   src/inteface/user/interace_hook.c
   uint8_t SendRawData(uint32_t msgID, uint8_t protocolDLC, uint8_t *protocolData)
   {
       uint8_t ret = 0;
       /*Implement Transmit Code(Return Success = 1, Fail = 0)*/
       ret = setSendRequest(msgID,protocolDLC,protocolData); // Actual CAN transmission function
       return ret;
   }
```     
