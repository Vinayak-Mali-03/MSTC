/**
 * @file 28_Count_Occurrences_Of_Word_In_Another_String.c
 * @author Vinayak Mali
 * @brief Count the number of occurrences of a perticular string in the string
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[200], word[20], temp[20];
    int i = 0, j = 0, count = 0;

    puts("Enter a string : ");
    gets(str);

    puts("Enter the word : ");
    gets(word);

    while(str[i] != '\0')
    {
        while(str[i] != ' ' && str[i] != '\0')
        {
            temp[j] = str[i];
            j++;
            i++;
        }

        temp[j] = '\0';
        if(str[i] != '\0')
        {
            i++;
            j = 0;
        }

        if(strcmp(temp, word) == 0)
            count++;
    }

    if(count == 0)
        printf("The word %s does not exits in the string", word);
    else    
        printf("The word %s exits %d times in the string", word, count);

    exit(EXIT_SUCCESS);
}