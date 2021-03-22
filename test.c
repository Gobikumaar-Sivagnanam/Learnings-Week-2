#include<stdio.h>
#include "funp.h"

int main(){
    complex_t num1 = {2.00,3.00}, num2 = {1.00,2.00}, a, s, m, d;
    a = addition(num1, num2);
    s = difference(num1, num2);
    m = product(num1, num2);
    d = division(num1, num2);
    printf("SUM IS : %f + %f \n",a.real,a.imaginary);
    printf("DIFFERENCE IS : %f + %f \n",s.real,s.imaginary);
    printf("PRODUCT IS : %f + %f \n",m.real,m.imaginary);
    printf("QUOTIENT IS : %f + %f \n",d.real,d.imaginary);
    return 0;
}