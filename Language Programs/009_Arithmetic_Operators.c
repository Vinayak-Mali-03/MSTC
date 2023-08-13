/**
 * @file Arithmetic_Operators.c
 * @author Vinayak Mali
 * @brief Use of arithmetic operators
 * @version 0.1
 * @date 2023-08-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int summation;
int subtraction;
int multiplication;
int quotient;
int remainder;

int main(void)
{
    printf("Enter number 1 of 2 : ");
    scanf("%d", &n1);

    printf("Enter number 2 of 2 : ");
    scanf("%d", &n2);

    summation = n1 + n2;
    subtraction = n1 - n2;
    multiplication = n1 * n2;
    quotient = n1 / n2;
    remainder = n1 % n2;

    printf("Summation = %d, Subtraction = %d, Multiplication = %d, Quotient = %d, Remainder = %d\n", summation, subtraction, multiplication, quotient, remainder);

    exit(0);
}