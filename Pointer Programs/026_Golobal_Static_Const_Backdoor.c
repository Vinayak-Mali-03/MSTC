/**
 * @file 026_Golobal_Static_Const_Backdoor.c
 * @author Vinayak Mali
 * @brief To demonstrate the global static const backdoor
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

static const int n = 500;

int main(void)
{
    int* p = &n;

    printf("*p %d\n", *p);

    *p = 115;

    printf("*p = %d\n", *p);

    return (0);
}

/* 
    This program produce error at line 23 because the global static const 
    variable data goes into read only data section and we can not modify 
    the data which is present in read only data section.

*/