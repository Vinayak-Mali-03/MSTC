/**
 * @file Inline_Function.c
 * @author Vinayak Mali
 * @brief To demonstrate the Inline Function
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"

int main(void)
{
    int num;
    int result;

    printf("Enter num : ");
    scanf("%d", &num);

    result = my_square(num);
    printf("result = %d\n", result);

    return (EXIT_SUCCESS);
}