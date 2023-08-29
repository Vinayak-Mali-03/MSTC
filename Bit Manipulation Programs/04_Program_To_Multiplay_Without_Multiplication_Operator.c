/**
 * @file 04_Program_To_Multiplay_Without_Multiplication_Operator.c
 * @author Vinayak Mali
 * @brief Multiply given number by 2^n without multiplicaton operator
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1, n, res;
    
    printf("Enter the number to be multiplied : ");
    scanf("%d", &num_1);

    printf("Enter the value of n : ");
    scanf("%d", &n);

    res = num_1 << n;

    printf("Result of multiplicatoin is : %d\n", res);

    return (0);
}