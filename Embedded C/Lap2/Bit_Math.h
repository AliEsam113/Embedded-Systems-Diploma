/*
 * Bit_Math.h
 *
 * Created: 5/11/2023 1:31:37 AM
 *  Author: Ali Essam
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG, BIT)       REG |= (1 << BIT)

#define CLEAR_BIT(REG, BIT)     REG &= ~(1 << BIT)

#define TOGGLE_BIT(REG, BIT)    REG ^= (1 << BIT)

#define GET_BIT(REG, BIT)       ((REG >> BIT) & 1)

#define SET_BYTE(REG)       REG |= 0xFF 

#define CLEAR_BYTE(REG)     REG &= 0x00 

#define TOGGLE_BYTE(REG)    REG ^= 0xFF






#endif /* LBIT_MATH_H_ */