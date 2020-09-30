
/*
 * File:   std_types.h
 * Author: Ahmed.Abd.ElGhafar
 * Embedded Systems Diploma (Basic Data Structures Course)
 * Created on September 19, 2020, 11:48 PM
 */

#ifndef _STD_TYPES_USER
#define _STD_TYPES_USER

#define ZERO_INIT 0
#define ZERO 0

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char sint8_t;
typedef signed short sint16_t;
typedef signed int sint32_t;

typedef enum return_status{
    R_NOK,
    R_OK
}return_status_t;

#endif // _STD_TYPES_USER
