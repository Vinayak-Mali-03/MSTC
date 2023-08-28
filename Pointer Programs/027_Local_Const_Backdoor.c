/**
 * @file 027_Local_Const_Backdoor.c
 * @author Vinayak Mali
 * @brief To demonstrate the local const backdoor
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test(void);

int main(void)
{
    test();

    return (0);
}

void test(void)
{
    const int* n = 500;

    int* p = &n;

    printf("*p = %d\n", *p);

    *p = 20;

    printf("*p = %d\n", *p);
}

/*
    This program produce an warning but the write operation is successfuly 
    performed on local const variable. Because the local const data goes
    into the stack seciotn and we can modify data which is present in 
    stack sectoin.
*/