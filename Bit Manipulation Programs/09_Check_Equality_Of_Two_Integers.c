/**
 * @file 09_Check_Equality_Of_Two_Integers.c
 * @author Vinayak Mali
 * @brief To check equality of two integers
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1, num_2;

    printf("Enter first number : ");
    scanf("%d", &num_1);

    printf("Enter second number : ");
    scanf("%d", &num_2);

    if((num_1 ^ num_2) == 0)
        puts("Both numbers are equal");
    else    
        puts("Numbers ara not equal");

    return (EXIT_SUCCESS);
}