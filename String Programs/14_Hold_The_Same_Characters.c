/**
 * @file 14_Hold_The_Same_Characters.c
 * @author Vinayak Mali
 * @brief count the same character at same index
 * @version 0.1
 * @date 2023-10-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Input two strings of equal length from the user and determine how many 
 *          times the corresponding position in two strings hold exactly the same characters.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[30], str2[30];
    int length1, length2, count = 0, i;

    printf("Enter two strings of equal length\n");

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    length1 = strlen(str1);
    length2 = strlen(str2);

    if(length1 != length2)
    {
        printf("The ecterd string are of different length\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < length1; ++i)
        if(str1[i] == str2[i])
            count++;

    printf("Corresponding positions hold same characters %d times\n", count);

    exit(EXIT_SUCCESS);
}