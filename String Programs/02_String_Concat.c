/**
 * @file 02_String_Concat.c
 * @author Vinayak Mali
 * @brief To concating two strings
 * @version 0.1
 * @date 2023-08-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS    0
#define EXIT_FAILURE    1

int main(void)
{
    char* msg1 = "Hello ";
    char* msg2 = "World!";
    char* dest = NULL;

    int i;
    int N1;
    int N2;
    int N;

    i = 0;
    N1 = 0;
    while(msg1[i] != '\0')
    {
        ++N1;
        ++i;
    }

    i = 0;
    N2 = 0;
    while(msg2[i] != '\0')
    {
        ++N2;
        ++i;
    }

    dest = (char*)malloc(N1 + N2 + 1);
    if(NULL == dest)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    dest[N1 + N2] = '\0';
    
    for(i = 0; i < N1; ++i)
        dest[i] = msg1[i];

    for(i = 0; i < N2; ++i)
        dest[N1 + i] = msg2[i];

    printf("Destinaiton String = %s\n", dest);

    free(dest);
    dest = NULL;
}