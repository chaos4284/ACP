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

-   111

