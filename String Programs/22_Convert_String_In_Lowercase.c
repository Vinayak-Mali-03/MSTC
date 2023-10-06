/**
 * @file 22_Convert_String_In_Lowercase.c
 * @author Vinayak Mali
 * @brief To convert the string in lowercase
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

    strlwr(str);

    puts("Lowercase string is : ");
    puts(str);

    return (EXIT_SUCCESS);
}