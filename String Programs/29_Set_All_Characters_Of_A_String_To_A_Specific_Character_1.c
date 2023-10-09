/**
 * @file 29_Set_All_Characters_Of_A_String_To_A_Specific_Character_1.c
 * @author Vinayak Mali
 * @brief Set all the characters of a string to a specific character using builtin function
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[10] = "0123456789";
    char ch = 'c';

    puts("Before using strset(), string is : ");
    puts(str);

    strset(str, ch);

    puts("After using strset(), string is : ");
    puts(str);

    exit(EXIT_SUCCESS);
}