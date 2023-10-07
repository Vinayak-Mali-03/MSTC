/**
 * @file 26_Convert_String_In_Upper_Case_Using_User_Defined_Function.c
 * @author Vinayak Mali 
 * @brief Convert string in upper case using user defined function
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void mystrupr(char* s);

int main(void)
{
    char str[20];
    
    puts("Enter a string : ");
    gets(str);

    mystrupr(str);

    puts("Uppercase string is : ");
    puts(str);

    exit(EXIT_SUCCESS);
}

void mystrupr(char* s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        if(s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
        i++;
    }
}