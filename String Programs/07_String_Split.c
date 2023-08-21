/**
 * @file 07_String_Split.c
 * @author Vinayak Mali
 * @brief To split the given string
 * @version 0.1
 * @date 2023-08-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void caller_of_split(void);
char** split(const char* src, char sep, int* pN);

int main(void)
{
    caller_of_split();

    return (0);
}

void caller_of_split(void)
{
    char* str = ":abc:defghi:::jklm:n:o:pqrstu:::::::vwxyz:";
    char sep = ':';

    char** words_in_str = 0;
    int N = -1;

    int i;

    words_in_str = split(str, sep, &N);
    for(i = 0; i < N; i++)
        printf("words_in_str[%d] : %s\n", i, words_in_str[i]);

    for(i = 0; i < N; ++i)
        free(words_in_str[i]);

    free(words_in_str);
    words_in_str = 0;
}

char** split(const char* src, char sep, int* pN)
{
    char** words_in_src = NULL;
    char* word = NULL;
    int N = 0;
    int word_len;

    int i, j, k;

    i = 0;
    while(1)
    {
        for(j = i; src[j] != ':' && src[j] != '\0'; ++j)
            ;
        word_len = j - i;
        if(0 == word_len)
        {
            i = j + 1;
            continue;
        }

        word = (char*)malloc(word_len + 1);
        if(NULL == word)
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }

        word[word_len] = '\0';
        for(k = 0; k < word_len; ++k)
            word[k] = src[i + k];

        words_in_src = (char**)realloc(words_in_src, (N + 1) * sizeof(char*));
        if(NULL == words_in_src)
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
        N += 1;
        words_in_src[N - 1] = word;

        if(src[j] == '\0' || (src[j] == ':' && src[j + 1] == '\0'))
            break;

        i = j + 1;
    }

    *pN = N;
    return (words_in_src);
}