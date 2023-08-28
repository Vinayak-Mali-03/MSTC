/**
 * @file 030_Pointer_To_Const.c
 * @author Vinayak Mali
 * @brief To demonstrate the pointer to const
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
    int n = 10;
    const int* p;   /* p is pointer to const int */

    p = &n;;
    printf("*p = %d\n", *p);
    puts("-----------------------------------------");

    int m = 100;
    p = &m;
    printf("*p = %d\n", *p);
    puts("------------------------------------------");

    /*
        *p = 20;    //  This line produce an error
    */

   return (0);
}