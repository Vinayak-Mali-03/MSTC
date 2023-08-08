/**
 * @file Comparison_Operators.c
 * @author Vinayak Mali
 * @brief Use of comparison operators
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
    int n1 = 100;
    int n2 = 50;
    int rs;

    rs = (n1 > n2);
    printf("rs = %d\n", rs);

    rs = (n1 >= n2);
    printf("rs = %d\n", rs);

    rs = (n1 < n2);
    printf("rs = %d\n", rs);

    rs = (n1 <= n2);
    printf("rs = %d\n", rs);

    rs = (n1 == n2);
    printf("rs = %d\n", rs);

    rs = (n1 != n2);
    printf("rs = %d\n", rs);

    exit(0);
}