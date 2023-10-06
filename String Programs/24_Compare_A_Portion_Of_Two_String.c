/**
 * @file 24_Compare_A_Portion_Of_Two_String.c
 * @author Vinayak Mali
 * @brief To compare a poriton of two strings
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[20], str2[20];
    int res, n;

    puts("Enter string 1 : ");
    gets(str1);

    puts("Enter string 2 : ");
    gets(str2);

    puts("Enter the value of n : ");
    scanf("%d", &n);

    res = strncmp(str1, str2, n);

    if(res == 0)
        puts("String portion are equal");
    else    
        puts("String portion are not equal");

    exit(EXIT_SUCCESS);
}