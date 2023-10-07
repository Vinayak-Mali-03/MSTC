/**
 * @file 25_Count_Number_Of_Sentence_Words_Characters.c
 * @author Vinayak Mali
 * @brief To count the number of sentence, words and characters in a given paragraph
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
    char paragraph[1000];
    int i = 0, sentence = 0, word = 0, chs = 0;

    printf("Enter the text : ");
    scanf("%[^\n]", paragraph);

    while(paragraph[i] != '\0')
    {
        switch(paragraph[i])
        {
            case '!':
            case '.':
            case '?':
                sentence++;
                chs++;
                break;
            
            case ' ':
            case '\t':
                chs++;
                word++;
                break;
            
            default:
                chs++;
        }

        i++;
    }

    printf("Number of sentence in paragraph are %d\n", sentence);
    printf("Number of words in paragraph are %d\n", word + 1);
    printf("Number of characters in paragraph are %d\n", chs);

    return (EXIT_SUCCESS);
}