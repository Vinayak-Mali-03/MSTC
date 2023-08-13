/**
 * @file Symbolic_Constant.c
 * @author Vinayak Mali
 * @brief To use of the symbolic constant
 * @version 0.1
 * @date 2023-08-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define MY_ROLL_NUMBER  500

int main(void)
{
    printf("NUMBER = %d\n", 500);

    printf("NUMBER = %d\n", MY_ROLL_NUMBER);

    return (0);
}

/*
    Symbolic constants are for the compilers and to make the source code more readable.

    To create a symbolic constant "#define" directive is used.
*/