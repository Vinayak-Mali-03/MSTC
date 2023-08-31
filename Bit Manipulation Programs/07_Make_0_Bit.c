/**
 * @file 07_Make_0_Bit.c
 * @author Vinayak Mali
 * @brief In second number make 0 at all bits where 1 bit is present in first number;
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
    int num_1, num_2, temp;

    printf("Enter the first number : ");
    scanf("%d", &num_1);

    printf("Enter the second number : ");
    scanf("%d", &num_2);

    temp = ~num_1;  // Taking One's Complement of number which will be contain 1 bit (The first number will not change)

    num_2 = num_2 & temp;

    printf("Value after making zero's is : %d\n", num_2);

    return (EXIT_SUCCESS);
}