/**
 * @file 30_Set_All_Characters_Of_A_String_To_A_Specific_Character_2.c
 * @author Vinayak Mali
 * @brief Set all characters of a string to a specific character using defined function
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char* mystrset(char* s, int ch);

int main(void)
{
    char str[10] = "1234567890";
    char ch = 'c';

    puts("Before using strset(), string is : ");
    puts(str);

    mystrset(str, ch);

    puts("After using strset(), string is : ");
    puts(str);

    exit(EXIT_SUCCESS);
}

char* mystrset(char* s, int ch)
{
    int i = 0;

    while(s[i] != '\0')
    {
        s[i] = ch;
        i++;
    }

    return s;
}