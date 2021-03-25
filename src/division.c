#include "funp.h"
/**
 * @brief Function to divide two complex numbers
 * 
 * @param a - 1st complex number 
 * @param b - 2st complex number
 * @return complex_t 
 */
complex_t division(complex_t a, complex_t b){
    complex_t c={0,0};
    if (b.real==0 && b.imaginary==0)
        return c;
    else{
    c.real = ((a.real * b.real) + (a.imaginary * b.imaginary))/((a.imaginary * a.imaginary)+(b.imaginary * b.imaginary));
    c.imaginary = ((b.real * a.imaginary) - (a.real * b.imaginary))/((a.imaginary * a.imaginary)+(b.imaginary * b.imaginary)); 
    return c;
    }
}