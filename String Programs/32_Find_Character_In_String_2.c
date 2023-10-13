/**
 * @file 32_Find_Character_In_String_2.c
 * @author Vinayak Mali
 * @brief To find the character of string using user defind function
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char* mystrchr(const char* s, int c);

int main(void)
{
    char str[20], ch;
    char* ptr;

    puts("Enter a string : ");
    gets(str);

    puts("Enter a character of be found : ");
    scanf("%c", &ch);

    ptr = mystrchr(str, ch);

    if(ptr == NULL)
        puts("Character not found");
    else    
        printf("Located at the index %lld", ptr-str);

    exit(EXIT_SUCCESS);
}

char* mystrchr(const char* s, int c)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            return ((char*)s + i);
        
        i++;
    }

    return NULL;
}