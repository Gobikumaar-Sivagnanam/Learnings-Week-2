#include "funp.h"

complex_t product(complex_t a, complex_t b){
    complex_t c;
    c.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    c.imaginary = (a.real * b.imaginary) + (b.real * a.imaginary); 
    return c;
}