/**
 * @file 9_Arrray_With_Pointer.c
 * @author Vinayak Mali
 * @brief Try another way to print array element using pointer
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*
    Note : Egnore the warning and run the .exe file.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int(*p)[8] = 0;
    int i;

    for(i = 0; i < 8; ++i)
        printf("(*p + %d) = %d\n", i, (*p + i));

    return (0);
}