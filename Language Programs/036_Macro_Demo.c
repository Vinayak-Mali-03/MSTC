/**
 * @file 036_Macro_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the macro
 * @version 0.1
 * @date 2023-08-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define ADD(n1, n2) n1 + n2

int main(void)
{
    int n1, n2;
    int addition;

    n1 = 100;
    n2 = 200;

    addition = ADD(n1, n2);

    printf("Addition = %d\n", addition);

    return (0);
}