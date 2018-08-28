/*
 * common.h
 *
 *  Created on: Aug 15, 2018
 *      Author: Prasad
 */

#ifndef COMMON_H_
#define COMMON_H_

#include "defines.h"

#define UART_RS485 huart1;
#define UART_RS232 huart2;
#define UART_GSM   huart3;
#define UART_DEBUG huart4;
#define UART_SPARE huart5;

#define COMMNON_BUFFER_SIZE		256

typedef enum
{
	UART_RS485_,
	UART_RS232_,
	UART_GSM_,
	UART_DEBUG_,
	UART_SPARE_
}Uart_Port_Number;

typedef enum
{
	I2C1_,
	I2C2_
}I2c_Port_Number;

typedef enum
{
	SPI1_,
	SPI2_
}Spi_Port_Number;

typedef struct
{
	U8	RTUIME[16];
	YesOrNoTypeDef		TransmitEnable;
	U16	TransmitPeriod;

}Config_TypeDef;
typedef struct
{
	i8 	Buffer[COMMNON_BUFFER_SIZE];
	U16 BufferLen;
	U32	NextWakeupStamp;
	U32	NextTransmitStamp;

}Common_TypeDef;
typedef struct
{
	U8	sec;	U8	min;	U8	hour;
	U8	date;	U8	month;	U8	year;
	U32	UnixTimeStamp;
}RtcExt_TypeDef;

Common_TypeDef  common;
Config_TypeDef	config;
RtcExt_TypeDef	rtcext;

#endif /* COMMON_H_ */
