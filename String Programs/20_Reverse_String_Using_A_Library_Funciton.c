/**
 * @file 20_Reverse_String_Using_A_Library_Funciton.c
 * @author Vinayak Mali
 * @brief Reverse a string usign library function
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[200];

    puts("Enter string : ");
    gets(str);

    strrev(str);

    puts("After reverseal, the string is : ");

    puts(str);

    exit(EXIT_SUCCESS);
}