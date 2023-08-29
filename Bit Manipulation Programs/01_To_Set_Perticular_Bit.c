/**
 * @file 01_To_Set_Perticular_Bit.c
 * @author Vinayak Mali
 * @brief To set the perticular bit in a given number
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// To set bit means make that bit ot 1

// Assuming that bit numbering starts from 1

int main(void)
{
    int num, bit, temp;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the bit to be set : ");
    scanf("%d", &bit);

    temp = 1 << (bit - 1);

    num = num | temp;

    printf("Value after setteing bit is : %d\n", num);

    return (EXIT_SUCCESS);
}