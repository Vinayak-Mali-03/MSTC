/**
 * @file 15_Alternate_Characters.c
 * @author Vinayak Mali
 * @brief Display the alternate characters of the string
 * @version 0.1
 * @date 2023-10-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[200], altchars[200];
    int i = 0, length, j = 0;

    printf("Enter a string : ");
    gets(str);

    length = strlen(str);
    while(i < length)
    {
        altchars[j] = str[i];
        i = i + 2;
        j = j + 1;
    }

    altchars[j] = '\0';

    printf("Alternate characters in the string are\n");
    puts(altchars);

    exit(EXIT_SUCCESS);
}