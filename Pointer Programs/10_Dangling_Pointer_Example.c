/**
 * @file 10_Dangling_Pointer_Example.c
 * @author Vinayak Mali
 * @brief How dangling pointer is made
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int* ex_1(void);
void test_ex_1(void);
int* ex_2(void);
void test_ex_2(void);

int main(void)
{
    test_ex_1();
    test_ex_2();

    return (0);
}

int* ex_1(void)
{
    int n = 500;
    return &n;
}

void test_ex_1(void)
{
    int* p;

    p = ex_1();
    /* Here p is a dangling pointer*/
}

int* ex_2(void)
{
    int A[5] = {100, 200, 300, 400, 500};

    return A;
}

void test_ex_2(void)
{
    int* p;

    p = ex_2();
    /* Here p is a dangling pointer */
}