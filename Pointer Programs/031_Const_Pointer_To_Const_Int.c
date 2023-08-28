/**
 * @file 031_Const_Pointer_To_Const_Int.c
 * @author Vinayak Mali
 * @brief To demonstrate the const pointer to const int
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

main(void)
{
    int n = 20;
    const int* const p = &n;    /* p is const pointer to const int */

    printf("*p = %d\n", *p);
    puts("--------------------------------------------");

    /*
        itn m = 100;
        p = &m;         // This lien produce an error

        *p = 20;        // This line produce an error
    */

   return (0);
}