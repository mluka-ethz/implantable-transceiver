#include "low_power_mode.h"

void stm32l_lowPowerSetup(uint32_t time, RTC_HandleTypeDef *hrtc){

	// Configure RTC to wake up after the set time
	uint32_t _time = (time * 2314) / 1000;
	HAL_RTCEx_SetWakeUpTimer_IT(hrtc, _time, RTC_WAKEUPCLOCK_RTCCLK_DIV16);

	__HAL_RCC_PWR_CLK_ENABLE(); // Enable Power Control clock
	//HAL_PWREx_EnableUltraLowPower(); // Ultra low power mode
	//HAL_PWREx_EnableFastWakeUp(); // Fast wake-up for ultra low power mode

	// Disable Unused Gpios - ENABLE IF NEEDED
	//_stm32l_disableGpios(); // Disable GPIOs based on configuration



	// Switch to STOPMode
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON, PWR_STOPENTRY_WFI);
}
