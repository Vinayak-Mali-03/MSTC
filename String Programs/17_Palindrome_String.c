/**
 * @file 17_Palindrome_String.c
 * @author Vinayak Mali
 * @brief Find the string is palindrome or not
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
    char str[200], rev[200];

    printf("Enter a string : ");
    gets(str);

    strcpy(rev, str);

    strrev(str);

    if(strcmp(str, rev) == 0)
        printf("The given string is a palindrom");
    else    
        printf("The given string is not a palindrome");
    
    exit(EXIT_SUCCESS);
}