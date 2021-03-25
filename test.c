/**
 * @file test.c
 * @author Gobikumaar Sivagnanam    
 * @brief Unity Testing the calculator Program.
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "funp.h"
#include "unity_internals.h"
#include "unity.h"

// Setup Functions for Unity
void setUp(){
}

void tearDown(){
}

complex_t num1={0,0},num2={0,0},result={0,0},check={0,0};

// Function to test sum
void sum_test(void){
    num1.real = 0,num1.imaginary=0;
    num2.real = 0,num2.imaginary=0;
    result = addition(num1,num2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.imaginary);
    
    num1.real = 10,num1.imaginary=15;
    num2.real = 15,num2.imaginary=15;
    result = addition(num1,num2);
    TEST_ASSERT_EQUAL(25,result.real);
    TEST_ASSERT_EQUAL(30,result.imaginary);

    num1.real = -5,num1.imaginary=-15;
    num2.real = -15,num2.imaginary=-25;
    result = addition(num1,num2);
    TEST_ASSERT_EQUAL(-20,result.real);
    TEST_ASSERT_EQUAL(-40,result.imaginary);

}

// Function to test difference
void difference_test(void){

    num1.real = 0,num1.imaginary=0;
    num2.real = 0,num2.imaginary=0;
    result = difference(num1,num2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.imaginary);
    
    num1.real = 10,num1.imaginary=15;
    num2.real = 15,num2.imaginary=10;
    result = difference(num1,num2);
    TEST_ASSERT_EQUAL(-5,result.real);
    TEST_ASSERT_EQUAL(5,result.imaginary);

    num1.real = -5,num1.imaginary=-15;
    num2.real = -15,num2.imaginary=25;
    result = difference(num1,num2);
    TEST_ASSERT_EQUAL(10,result.real);
    TEST_ASSERT_EQUAL(-40,result.imaginary);

}

// Function to test product
void product_test(void){
    num1.real = 0,num1.imaginary=0;
    num2.real = 0,num2.imaginary=0;
    result = product(num1,num2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.imaginary);
    
    num1.real = 2,num1.imaginary=3;
    num2.real = 3,num2.imaginary=2;
    result = product(num1,num2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(13,result.imaginary);

    num1.real = 5,num1.imaginary=3;
    num2.real = 2,num2.imaginary=4;
    result = product(num1,num2);
    TEST_ASSERT_EQUAL(-2,result.real);
    TEST_ASSERT_EQUAL(26,result.imaginary);

}

// Function to test division
void division_test(void){
    num1.real = 0,num1.imaginary=0;
    num2.real = 0,num2.imaginary=0;
    result = division(num1,num2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.imaginary);
    
    num1.real = 3,num1.imaginary=2;
    num2.real = 2,num2.imaginary=4;
    result = division(num1,num2);
    TEST_ASSERT_EQUAL(0.7,result.real);
    TEST_ASSERT_EQUAL(-0.4,result.imaginary);

    num1.real = 0,num1.imaginary=3;
    num2.real = 2,num2.imaginary=2;
    result = division(num1,num2);
    TEST_ASSERT_EQUAL(0.75,result.real);
    TEST_ASSERT_EQUAL(0.75,result.imaginary);

}
/**
 * @brief Main Driver for Unity Testing 
 * Testing the different fucntions.
 * @return UNITY END
 */
int main(void){
	UNITY_BEGIN();
    RUN_TEST(sum_test);
    RUN_TEST(difference_test);
    RUN_TEST(product_test);
    RUN_TEST(division_test);
    return UNITY_END();
}
