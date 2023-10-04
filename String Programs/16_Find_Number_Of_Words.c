/**
 * @file 16_Find_Number_Of_Words.c
 * @author Vinayak Mali
 * @brief Input a multi word string and find out the number of words in the string
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
    char str[200];
    int i = 0, count = 0;

    printf("Enter a string : ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            count++;
        
        i++;
    }

    printf("Number of words in the string are %d\n", count + 1);

    exit(EXIT_SUCCESS);
}