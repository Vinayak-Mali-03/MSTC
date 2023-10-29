/**
 * @file 08_Program_to_Divide_Without_Division_Operator.c
 * @author Vinayak Mali
 * @brief Divide given number by 2^n without division operator
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
    int num_1, n, result;

    printf("Enter number to be divede : ");
    scanf("%d", &num_1);

    printf("Enter the value of n : ");
    scanf("%d", &n);

    result = num_1 >> n;

    printf("Result of division is : %d", result);
    
    return (EXIT_SUCCESS);
}