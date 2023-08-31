/**
 * @file 06_Negate_All_1_Bit.c
 * @author Vinayak Mali
 * @brief To negate all 1 bit in second number corrsponding to all 1 bits in number first
 * @version 0.1
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1, num_2;

    printf("Enter the first number : ");
    scanf("%d", &num_1);

    printf("Enter the second number : ");
    scanf("%d", &num_2);

    num_2 = num_1 ^ num_2;

    printf("Value after negating bits is : %d\n", num_2);

    return (EXIT_SUCCESS);
}