/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f4xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_it.h"
#include "stm32f4xx_hal_tim.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
 
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/

/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M4 Processor Interruption and Exception Handlers          */ 
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
unsigned char setTimer = 0;
extern CAN_HandleTypeDef hcan1;
extern TIM_HandleTypeDef    TimHandle;
CAN_RxHeaderTypeDef RxMessage;

void TIM3_IRQHandler(void)
{
	setTimer = 1;
    HAL_TIM_IRQHandler(&TimHandle);
}


void CAN1_TX_IRQHandler(void)
{
    uint8_t mailBoxIndex;
    uint8_t dlc = 0;
    uint8_t Data[8] = {0,0,0,0,0,0,0,0};

    HAL_CAN_IRQHandler(&hcan1);

    for(mailBoxIndex = 0; mailBoxIndex < 3; mailBoxIndex++)
    {
    	//SetSendConfirm((CANx->sTxMailBox[mailBoxIndex].TIR) >> 21);
        dlc = (uint8_t)0x0F & CAN1->sTxMailBox[mailBoxIndex].TDTR;


       Data[0] = (uint8_t)0xFF & CAN1->sTxMailBox[mailBoxIndex].TDLR;
       Data[1] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDLR >> 8);
       Data[2] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDLR >> 16);
       Data[3] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDLR >> 24);
       Data[4] = (uint8_t)0xFF & CAN1->sTxMailBox[mailBoxIndex].TDHR;
       Data[5] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDHR >> 8);
       Data[6] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDHR >> 16);
       Data[7] = (uint8_t)0xFF & (CAN1->sTxMailBox[mailBoxIndex].TDHR >> 24);
       SendRawDataConfirm((CAN1->sTxMailBox[mailBoxIndex].TIR) >> 21,Data);
    }
    mailBoxIndex = 0;
}
/*
#ifndef STM32F10X_CL
void USB_LP_CAN1_RX0_IRQHandler(void)
#else
*/
void CAN1_RX0_IRQHandler(void)
{
	volatile int a= 0;
	uint8_t receiveData[8];

	HAL_CAN_GetRxMessage(&hcan1,CAN_RX_FIFO0,&RxMessage,receiveData);
	//HAL_StatusTypeDef HAL_CAN_GetRxMessage(CAN_HandleTypeDef *hcan, uint32_t RxFifo, CAN_RxHeaderTypeDef *pHeader, uint8_t aData[])
	a = 5;
/*
  CAN_Receive(CAN1, CAN_FIFO0, &RxMessage);
  ReceiveRawData(RxMessage.StdId,RxMessage.Data);
*/
}

void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */

  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Pre-fetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F4xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f4xx.s).                    */
/******************************************************************************/

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
