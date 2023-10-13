/**
 * @file 31_Find_Character_In_String_1.c
 * @author Vinayak Mali
 * @brief To find the first character occurrence in given string
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[20], ch;
    char* ptr;

    puts("Enter a string : ");
    gets(str);

    puts("Enter a character to be found : ");
    scanf("%c", &ch);

    ptr = strchr(str, ch);
    
    if(ptr == NULL)
        puts("Character not found");
    else
        printf("Located at index %lld", ptr-str);

    exit(EXIT_SUCCESS);
}