#include "nfc_chip.h"

int NFC_WriteToUserAddress(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c,uint16_t address, uint8_t data){
	static const uint8_t st25dv_ADDR = 0b10100110;
	uint8_t buf[3];
	buf[0] = (address & 0xFF00)/16; // most significant byte
	buf[1] = (address & 0x00FF); // least significan byte
	buf[2] = data;

	*ret = HAL_I2C_Master_Transmit(&i2c, st25dv_ADDR, buf, 3, HAL_MAX_DELAY);
	  if ( *ret != HAL_OK ) {
	        //printf("Error Tx\r\n");
	        return 1;
	  } else{
		  //printf("success \n");
		  return 0;
	  }

	return 1;

}

uint8_t NFC_ReadFromUserAddress(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c,uint16_t address){
	static const uint8_t st25dv_ADDR = 0b10100110;
	uint8_t buf[2];
	buf[0] = (address & (uint16_t)0xFF00)/256; // most significant byte
	buf[1] = (address & (uint16_t)0x00FF); // least significan byte
	uint8_t data[1];
	*ret = HAL_I2C_Master_Transmit(&i2c, st25dv_ADDR, buf, 2, HAL_MAX_DELAY);
	if ( *ret != HAL_OK ) {
		        //printf("Error Rx\r\n");
		        return 1;
		  } else{
			  *ret = HAL_I2C_Master_Receive(&i2c, st25dv_ADDR+1, data, 1, HAL_MAX_DELAY);
			  	  if ( *ret != HAL_OK ) {
			  	        //printf("Error Rx\r\n");
			  	        return 1;
			  	  } else{
			  		  //printf("success \n");
			  		  return data[0];
			  	  }
		  }


	return 1;

}


int NFC_EnableEH(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c){
	static const uint8_t st25dv_ADDR = 0b10100110;
	uint16_t address = 0x2002;
	uint8_t buf[3];
	buf[0] = (address & (uint16_t)0xFF00)/256; // most significant byte
	buf[1] = (address & (uint16_t)0x00FF); // least significan byte
	buf[2] = 0x0F;

	*ret = HAL_I2C_Master_Transmit(&i2c, st25dv_ADDR, buf, 3, HAL_MAX_DELAY);
		  if ( *ret != HAL_OK ) {
		        //printf("Error Tx\r\n");
		        return 1;
		  } else{
			  //printf("success \n");
			  return 0;
		  }

}

int NFC_DisableEH(HAL_StatusTypeDef *ret, I2C_HandleTypeDef i2c){
	static const uint8_t st25dv_ADDR = 0b10100110;
	uint16_t address = 0x2002;
	uint8_t buf[3];
	buf[0] = (address & (uint16_t)0xFF00)/256; // most significant byte
	buf[1] = (address & (uint16_t)0x00FF); // least significan byte
	buf[2] = 0x00;

	*ret = HAL_I2C_Master_Transmit(&i2c, st25dv_ADDR, buf, 3, HAL_MAX_DELAY);
		  if ( *ret != HAL_OK ) {
		        //printf("Error Tx\r\n");
		        return 1;
		  } else{
			  //printf("success \n");
			  return 0;
		  }

}

