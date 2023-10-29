/**
 * @file 10_Check_Given_Number_Is_Odd.c
 * @author Vinayak Mali
 * @brief To check given numbers is odd or not
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
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if((num & 1) == 1)
        printf("%d is odd", num);
    else    
        printf("%d is not odd", num);

    return (EXIT_SUCCESS);
}