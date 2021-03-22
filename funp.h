/**
 * @file funp.h
 * @author Gobikumaar
 * @brief Header file for sum difference product division and structure for complex number
 * @version 0.1
 * @date 2021-03-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNP_H__
#define __FUNP_H__

/**
 * @brief Structure to hold complex numbers
 * @real to store the real component
 * @imaginary to store the imaginary component
 */

typedef struct complex_t {
float real;
float imaginary;
} complex_t;

/**
 * @brief Function to find the sum of 2 complex numbers.
 * @param [in] a complex number 1
 * @param [in] a complex number 2
 * @return complex_t result of the addition of the 2 complex numbers
 */
complex_t addition(complex_t a, complex_t b);

/**
 * @brief Function to find the sum of 2 complex numbers.
 * @param [in] a complex number 1
 * @param [in] a complex number 2
 * @return complex_t result of the subtraction of the 2 complex numbers
 */
complex_t difference(complex_t a, complex_t b);

/**
 * @brief Function to find the sum of 2 complex numbers.
 * @param [in] a complex number 1
 * @param [in] a complex number 2
 * @return complex_t result of the product of the 2 complex numbers
 */
complex_t product(complex_t a, complex_t b);

/**
 * @brief Function to find the sum of 2 complex numbers.
 * @param [in] a complex number 1
 * @param [in] a complex number 2
 * @return complex_t result of the division of the 2 complex numbers
 */
complex_t division(complex_t a, complex_t b);

#endif /*  __FUNP_H__  */