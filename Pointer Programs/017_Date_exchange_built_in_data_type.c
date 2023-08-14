/**
 * @file 017_Date_exchange_built_in_data_type.c
 * @author Vinayak Mali
 * @brief To exchange the built in data type values
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_1(int n);
void test_2(int* p);

int main(void)
{
    int m;
    int n;

    test_1(100);
    m = 200;
    test_1(m);

    printf("Before call to test_2() : n = %d\n", n);  // Warning occur
    test_2(&n);
    printf("After call to test_2() : n = %d\n", n);

    return (0);
}

/* 
    Here main function is caller and test_1 and test_2 functions 
    are collee

    Int test_1 callee cannot modify caller's integer
*/

void test_1(int n)
{
    printf("Recived input from caller : n = %d\n", n);
    puts("---------------------------------------------");
}

/*
    In test_2 caller sends the address of its local variable to callee.

    Callee function accepts address of integer in a pointer variable 
    and uses that pointer to write on caller's local variable

    Therefore, technically p is an input parameter to test_2 but it
    acts as an output parameter to caller to test_2
    
    This technique is know as parameter as return value or 
    parameterized return value

*/

void test_2(int* p)
{
    *p = 500;
}