/**
 * @file 18_Campare_Strings.c
 * @author Vinayak Mali
 * @brief To camapre the two strings using builtin funcitons
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
    char str1[200], str2[200];
    int res;

    puts("Enter string 1 : ");
    gets(str1);

    puts("Enter string 2 : ");
    gets(str2);

    res = strcmp(str1, str2);

    if(res == 0)
        puts("Strings are equal");
    else        
        puts("Strins are not equal");

    exit(EXIT_SUCCESS);
}