/*
 * nfc_chip.h
 *
 *  Created on: May 24, 2021
 *      Author: luka
 */

#ifndef SRC_NFC_CHIP_H_
#define SRC_NFC_CHIP_H_

#include "stdint.h"
#include "stm32l4xx_hal.h"

int NFC_WriteToUserAddress(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c, uint16_t address, uint8_t data);
uint8_t NFC_ReadFromUserAddress(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c, uint16_t address);
int NFC_EnableEH(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c);
int NFC_DisableEH(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c);

#endif /* SRC_NFC_CHIP_H_ */
