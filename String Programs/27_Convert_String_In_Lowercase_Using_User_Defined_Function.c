/**
 * @file 27_Convert_String_In_Lowercase_Using_User_Defined_Function.c
 * @author Vinyak Mali
 * @brief Convert the input string in lowercase using user defined funciton
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void mystrlwr(char* s);

int main(void)
{
    char str[20];

    puts("Enter a string : ");
    gets(str);

    mystrlwr(str);

    puts("Lowercase string is : ");
    puts(str);

    exit(EXIT_SUCCESS);
}

void mystrlwr(char* s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
        
        i++;
    }
}