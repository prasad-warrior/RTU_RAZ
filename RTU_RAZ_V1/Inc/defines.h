/*
 * defines.h
 *
 *  Created on: Aug 15, 2018
 *      Author: Devi
 */

#ifndef DEFINES_H_
#define DEFINES_H_

#include <stdint.h>
#include <string.h>
#define i8	__int8_t
#define u8	__uint8_t
#define i16	__int16_t
#define u16	__uint16_t
#define i32	__int32_t
#define u32	__uint32_t


//typedef __INT8_TYPE__ I8;
//typedef __UINT8_TYPE__ U8;
#define I8	__int8_t
#define U8	__uint8_t
#define I16	__int16_t
#define U16	__uint16_t
#define I32	__int32_t
#define U32	__uint32_t

typedef enum{
	NO_,
	YES_
}YesOrNoTypeDef;
typedef enum{
	FALSE_,
	TRUE_
}TrueOrFalseTypeDef;

#endif /* DEFINES_H_ */
