/**
 * @file 13_Count_The_Occurrence_Of_Character.c
 * @author Vinayak Mali
 * @brief To count the the number of occurrences of a particular character in the string
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
    char string[200], ch;
    int count = 0, i = 0;

    printf("Enter a string : ");
    gets(string);

    printf("Enter a character : ");
    scanf("%c", &ch);

    while(string[i] != '\0')
    {
        if(string[i] == ch)
            count++;
        i++;
    }   

    printf("In the given string, %c occurred %d times\n", ch, count);

    exit(EXIT_SUCCESS);
}