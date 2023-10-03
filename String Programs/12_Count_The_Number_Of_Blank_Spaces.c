/**
 * @file 12_Count_The_Number_Of_Blank_Spaces.c
 * @author Vinayak Mali
 * @brief To count the number of blank spaces in the given string
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
    char string[200], ch;
    int count = 0;
    int i = 0;

    printf("Enter a string : \n");
    gets(string);

    while(string[i] != '\0')
    {
        if(string[i] == ' ')
            count++;

        i++;
    }

    printf("Number of blank spaces in the given string are %d\n", count);

    exit(EXIT_SUCCESS);
}