/**
 * @file 23_Convert_String_In_Uppercase_String.c
 * @author Vinayak Mali
 * @brief To convert a string in uppercase 
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[20];

    puts("Enter a string : ");
    gets(str);

    strupr(str);
    
    puts("Uppercase string is : ");
    puts(str);

    exit(EXIT_SUCCESS);
}