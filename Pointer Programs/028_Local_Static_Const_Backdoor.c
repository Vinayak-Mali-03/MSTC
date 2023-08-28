/**
 * @file 028_Local_Static_Const_Backdoor.c
 * @author Vinayak Mali
 * @brief To demonstrate the local static const backdoor
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test(ovid);

int main(void)
{
    test();

    return (0);
}

void test(void)
{
    static const int n = 100;

    int* p = &n;

    printf("*p = %d\n", *p);

    *p = 500;

    printf("*p = %d\n", *p);
}

/*
    This program produce an error at line 32 beacause local static const 
    data goes into read only data section an we can not modify read only data
    section's data.
*/