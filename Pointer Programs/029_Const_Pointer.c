/**
 * @file 029_Const_Pointer.c
 * @author Vinayak Mali
 * @brief To demonstrate the const pointer
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int* const p = &n;  /* p is const pointer to int */

    n = 40;
    printf("n = %d\n", n);
    puts("------------------------------------------------");

    *p = 500;
    printf("*p = %d\n", *p);
    puts("-------------------------------------------------");

    printf("n = %d\n", n);

    /*
        int m;
        p = &m;
        The above line produce an error.
    */

    return (0);
}