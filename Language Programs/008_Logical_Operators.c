/**
 * @file Logical_Operators.c
 * @author Vinayak Mali
 * @brief Use of logical operators
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
    int n1, n2, n3, n4;

    printf("Enter n1 : ");
    scanf("%d", &n1);

    printf("Enter n2 : ");
    scanf("%d", &n2);

    printf("Enter n3 : ");
    scanf("%d", &n3);

    printf("Enter n4 : ");
    scanf("%d", &n4);

    if ((n1 > n2) && (n3 < n4))
    {
        printf("n1 is greater than n2 AND n3 is less than n4\n");
    }

    if((n1 > n2) || (n3 < n4))
    {
        printf("n1 is greater than n2 OR n3 is less than n4 OR BOTH\n");
    }

    if(!(n1 == n2))
    {
        printf("n1 is not equal to n2\n");
    }

    exit(0);
}