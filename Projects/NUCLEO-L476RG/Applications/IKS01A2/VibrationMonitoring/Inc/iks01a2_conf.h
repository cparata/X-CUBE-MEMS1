/**
 ******************************************************************************
 * @file    iks01a2_conf.h
 * @author  MEMS Application Team
 * @version V0.0.1
 * @date    29-January-2018
 * @brief   This file contains definitions for the MEMS components bus interfaces
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed under Software License Agreement
 * SLA0077, (the "License"). You may not use this file except in compliance
 * with the License. You may obtain a copy of the License at:
 *
 *     www.st.com/content/st_com/en/search.html#q=SLA0077-t=keywords-page=1
 *
 *******************************************************************************
 */

#if (defined (USE_STM32F4XX_NUCLEO))
#include "stm32f4xx_hal.h"
#include "nucleo_f401re_bus.h"
#include "nucleo_f401re_errno.h"

#elif (defined (USE_STM32L0XX_NUCLEO))
#include "stm32l0xx_hal.h"
#include "nucleo_l073rz_bus.h"
#include "nucleo_l073rz_errno.h"

#elif (defined (USE_STM32L1XX_NUCLEO))
#include "stm32l1xx_hal.h"
#include "nucleo_l152re_bus.h"
#include "nucleo_l152re_errno.h"

#elif (defined (USE_STM32L4XX_NUCLEO))
#include "stm32l4xx_hal.h"
#include "nucleo_l476rg_bus.h"
#include "nucleo_l476rg_errno.h"

#else
#error Not supported platform
#endif

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __IKS01A2_CONF_H__
#define __IKS01A2_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

#define USE_IKS01A2_ENV_SENSOR_HTS221_0                1U
#define USE_IKS01A2_ENV_SENSOR_LPS22HB_0               1U

#define USE_IKS01A2_MOTION_SENSOR_LSM6DSL_0            1U
#define USE_IKS01A2_MOTION_SENSOR_LSM303AGR_ACC_0      1U
#define USE_IKS01A2_MOTION_SENSOR_LSM303AGR_MAG_0      1U

#define IKS01A2_I2C_Init BSP_I2C1_Init
#define IKS01A2_I2C_DeInit BSP_I2C1_DeInit
#define IKS01A2_I2C_ReadReg BSP_I2C1_ReadReg
#define IKS01A2_I2C_WriteReg BSP_I2C1_WriteReg
#define IKS01A2_GetTick BSP_GetTick

#ifdef __cplusplus
}
#endif

#endif /* __IKS01A2_CONF_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

