/**
 * @file 038_Conditional_Comilation_Demo.c
 * @author Vinayak Mali
 * @brief To demonstarate the condition compilation
 * @version 0.1
 * @date 2023-08-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define X

int main(void)
{
    #ifdef X
        puts("X is defined");
    #endif

    #ifdef Y
        puts("Y is defined");
    #endif

    printf("Here X is print because we defined on the upper side");

    exit(0);    
}