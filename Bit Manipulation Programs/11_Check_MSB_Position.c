/**
 * @file 11_Check_MSB_Position.c
 * @author Vinayak Mali
 * @brief To check MSB position of given 32bit integer
 * @version 0.1
 * @date 2023-11-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i = 0, bit;

    printf("Enter the number : ");
    scanf("%d", &num);

    while(i < 32)
    {
        bit = num & 0x80000000;
        if(bit == -0x80000000)
        {
            bit = 1;
        }

        if(bit == 1)
            break;
        
        num = num << 1;
        i++;
    }

    printf("Position of MSB bit is = %d\n", 32 - (i + 1));

    return (EXIT_SUCCESS);
}