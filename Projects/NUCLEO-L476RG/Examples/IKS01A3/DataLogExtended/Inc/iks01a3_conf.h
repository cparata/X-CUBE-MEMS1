/**
 ******************************************************************************
 * @file    iks01a3_conf.h
 * @author  MEMS Application Team
 * @brief   This file contains definitions for the MEMS components bus interfaces
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Software License Agreement
  * SLA0077, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0077
  *
  ******************************************************************************
 */

#include "stm32l4xx_hal.h"
#include "nucleo_l476rg_bus.h"
#include "nucleo_l476rg_errno.h"

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __IKS01A3_CONF_H__
#define __IKS01A3_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

#define USE_IKS01A3_ENV_SENSOR_HTS221_0                         1U
#define USE_IKS01A3_ENV_SENSOR_LPS22HH_0                        1U
#define USE_IKS01A3_ENV_SENSOR_STTS751_0                        1U

#define USE_IKS01A3_MOTION_SENSOR_LSM6DSO_0                     1U
#define USE_IKS01A3_MOTION_SENSOR_LIS2DW12_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_LIS2MDL_0                     1U

#define USE_IKS01A3_ENV_SENSOR_LPS33HW_0                        1U
#define USE_IKS01A3_ENV_SENSOR_STTS22H_0                        1U
#define USE_IKS01A3_ENV_SENSOR_LPS33K_0                         1U
#define USE_IKS01A3_ENV_SENSOR_LPS22CH_0                        1U
#define USE_IKS01A3_ENV_SENSOR_LPS27HHTW_0                      1U
#define USE_IKS01A3_ENV_SENSOR_LPS22DF_0                        1U

#define USE_IKS01A3_MOTION_SENSOR_ASM330LHH_0                   1U
#define USE_IKS01A3_MOTION_SENSOR_IIS2DLPC_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_IIS2MDC_0                     1U
#define USE_IKS01A3_MOTION_SENSOR_ISM303DAC_ACC_0               1U
#define USE_IKS01A3_MOTION_SENSOR_ISM303DAC_MAG_0               1U
#define USE_IKS01A3_MOTION_SENSOR_ISM330DLC_0                   1U
#define USE_IKS01A3_MOTION_SENSOR_LIS2DH12_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSOX_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_AIS2DW12_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSR_0                     1U
#define USE_IKS01A3_MOTION_SENSOR_LIS3MDL_0                     1U
#define USE_IKS01A3_MOTION_SENSOR_A3G4250D_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_AIS328DQ_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_AIS3624DQ_0                   1U
#define USE_IKS01A3_MOTION_SENSOR_H3LIS331DL_0                  1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSRX_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_ISM330DHCX_0                  1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSO32_0                   1U
#define USE_IKS01A3_MOTION_SENSOR_IIS2ICLX_0                    1U
#define USE_IKS01A3_MOTION_SENSOR_AIS2IH_0                      1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSO32X_0                  1U
#define USE_IKS01A3_MOTION_SENSOR_LSM6DSOX_SENSORHUB_LIS2MDL_0  1U

#define USE_IKS01A3_HYBRID_SENSOR_LIS2DTW12_0                   1U

#define IKS01A3_I2C_Init BSP_I2C1_Init
#define IKS01A3_I2C_DeInit BSP_I2C1_DeInit
#define IKS01A3_I2C_ReadReg BSP_I2C1_ReadReg
#define IKS01A3_I2C_WriteReg BSP_I2C1_WriteReg
#define IKS01A3_GetTick BSP_GetTick

#ifdef __cplusplus
}
#endif

#endif /* __IKS01A3_CONF_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
