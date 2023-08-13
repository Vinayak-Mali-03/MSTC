/**
 * @file if_else_demo.c
 * @author Vinayak Mali
 * @brief Demonstrate if-else statement
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
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if(age < 18)
        printf("You are not eligible for voating");
    else 
        printf("You are eligible for voating");

    exit(0);
}