/**
 * @file 03_Set_First_Numbers_Bit_To_Another_Number_Bit.c
 * @author Vinayak Mali
 * @brief Set first numbers 1 bit to another numbers bit 
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
    int num_1, num_2;

    printf("Enter the value of num_1 : ");
    scanf("%d", &num_1);

    printf("Enter the value of num_2 : ");
    scanf("%d", &num_2);

    num_2 = num_1 | num_2;
    
    printf("Value after setting bits : %d\n", num_2);
}