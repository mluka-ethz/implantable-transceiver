/*
 * low_power_mode.h
 *
 *  Created on: Jun 2, 2021
 *      Author: luka
 */

#ifndef INC_LOW_POWER_MODE_H_
#define INC_LOW_POWER_MODE_H_

#include "stdint.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx_hal_pwr_ex.h"
#include "stm32l4xx_hal_pwr.h"
#include "stm32l4xx_hal_gpio.h"


void stm32l_lowPowerSetup(uint32_t time, RTC_HandleTypeDef *hrtc);

#endif /* INC_LOW_POWER_MODE_H_ */
