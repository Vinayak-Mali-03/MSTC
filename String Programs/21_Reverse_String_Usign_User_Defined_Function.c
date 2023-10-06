/**
 * @file 21_Reverse_String_Usign_User_Defined_Function.c
 * @author Vinayak Mali
 * @brief To reverse a string using user defined function
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void mystrrev(char* s);

int main(void)
{
    char str[20];

    puts("Enter a string : ");
    gets(str);

    mystrrev(str);

    puts("After reversal, the string is : ");
    puts(str);

    return (EXIT_SUCCESS);
}

void mystrrev(char* s)
{
    int i = 0, j = 0;
    char temp;

    while(s[i] != '\0')
        i++;

    i--;

    while(i > j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j++;i--;
    }

}