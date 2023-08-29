/**
 * @file 02_Negate_A_Perticular_Bit.c
 * @author Vinayak Mali
 * @brief To negate a perticular bit in a given number 
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// To negate a bit means make that bit 0 if it is 1 and make it 1 if it is 0

// Assuming that bit numbering start from 1

int main(void)
{
    int num, bit, temp;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the bit number to be neagate : ");
    scanf("%d", &bit);

    temp = 1 << (bit - 1);

    num = num ^ temp;

    printf("Value after setting negate bit is : %d\n", num);

    return (EXIT_SUCCESS);
}