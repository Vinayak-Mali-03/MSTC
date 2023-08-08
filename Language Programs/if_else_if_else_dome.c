/**
 * @file if_else_if_else_dome.c
 * @author Vinayak mali
 * @brief To demonstrate the if else if else statements
 * @version 0.1
 * @date 2023-08-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter any number : ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("%d is positive number.", num);
    }
    else if (num < 0)
    {
        printf("%d is negative number.", num);
    }
    else 
    {
        printf("%d Entered number is zero", num);
    }

    exit(0);
}