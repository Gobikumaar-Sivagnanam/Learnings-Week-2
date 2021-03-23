#include "funp.h"

complex_t addition(complex_t a, complex_t b){
    complex_t c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary; 
    return c;
}