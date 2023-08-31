/**
 * @file 05_Find_One's_And_Two's_Complement.c
 * @author Vinayak Mali
 * @brief To find the one's and two's complement of a given number
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
    int num, oc, tc;

    printf("Enter the number : ");
    scanf("%d", &num);

    oc = ~num;

    tc = oc + 1;

    printf("One's Complement of %d : %d\n", num, oc);
    printf("Two's Complement of %d : %d\n", num, tc);

    return (EXIT_SUCCESS);
}