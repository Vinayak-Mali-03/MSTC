/**
 * @file 19_Campare_Strings_Without_Case_Sensitivity.c
 * @author Vinayak Mali
 * @brief To campare the strins without case sensitivity
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

    puts("Enter string 2 :");
    gets(str2);

    res = strcmpi(str1, str2);

    if(res == 0)
        puts("Strins are equal");
    else    
        puts("Strings are not equal");

    exit(EXIT_SUCCESS);
}