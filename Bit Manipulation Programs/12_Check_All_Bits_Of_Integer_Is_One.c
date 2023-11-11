/**
 * @file 12_Check_All_Bits_Of_Integer_Is_One.c
 * @author Check if all bits of integer is one
 * @brief 
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
    int num = 0, count = 0, n = 0, i = 0;

    printf("Enter the number : ");
    scanf("%d", &num);
    n = num;

    if(num == 0)
    {
        printf("All bits are not set\n");
        exit(EXIT_SUCCESS);
    }

    while(n)
    {
        count++;
        n = n >> 1;
    }

    for(i = 0; i < count; i++)
    {
        if(((num >> i) & 1) == 1)
        {
            continue;
        }
        else
        {
            printf("All bits are not set");
            exit(EXIT_FAILURE);
        }
    }

    printf("All bits are set\n");

    return (EXIT_SUCCESS);
}