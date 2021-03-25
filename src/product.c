#include "funp.h"
/**
 * @brief Function to multiply two complex numbers
 * 
 * @param a - 1st complex number 
 * @param b - 2st complex number
 * @return complex_t 
 */
complex_t product(complex_t a, complex_t b){
    complex_t c;
    c.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    c.imaginary = (a.real * b.imaginary) + (b.real * a.imaginary); 
    return c;
}