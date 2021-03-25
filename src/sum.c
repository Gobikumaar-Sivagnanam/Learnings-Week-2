#include "funp.h"
/**
 * @brief Function to add two complex numbers
 * 
 * @param a - 1st complex number 
 * @param b - 2st complex number
 * @return complex_t 
 */
complex_t addition(complex_t a, complex_t b){
    complex_t c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary; 
    return c;
}