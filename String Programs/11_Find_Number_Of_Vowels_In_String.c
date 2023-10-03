/**
 * @file 11_Find_Number_Of_Vowels_In_String.c
 * @author Vinayak Mali
 * @brief To find the number vowels present in the given string
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char string[200];
    int count = 0;
    int i = 0;

    printf("Enter a string : \n");
    gets(string);

    while(string[i] != '\0')
    {
        switch(string[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
        }

        i++;
    }

    printf("%d vowels are present in the given string\n", count);

    return (EXIT_SUCCESS);
}