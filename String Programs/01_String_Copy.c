/**
 * @file 01_String_Copy.c
 * @author Vinayak Mali
 * @brief Copy given string 
 * @version 0.1
 * @date 2023-08-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str_1 = "Hello World!";
    char* str_2 = NULL;
    int len_str1 = 0;
    int i;

    i = 0;
    while(str_1[i] != '\0')
    {
        len_str1 += 1;
        i += 1;
    }

    printf("len_str1 = %d\n", len_str1);

    str_2 = (char*)malloc(len_str1 + 1);
    if(0 == str_2)
    {
        puts("Error in allocating memory");
        exit(-1);
    }

    str_2[len_str1] = '\0';

    for(i = 0; i < len_str1; ++i)
        str_2[i] = str_1[i];

    printf("str_2 = %s\n", str_2);

    free(str_2);
    str_2 = NULL;
    
    return (0);
}