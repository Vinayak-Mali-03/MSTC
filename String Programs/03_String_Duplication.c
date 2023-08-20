/**
 * @file 03_String_Duplication.c
 * @author Vinayak Mali
 * @brief To duplicate the given string
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char* src = "This is a moderately long string!";
    char* dest = NULL;
    int i;
    int N;

    N = 0;
    i = 0;
    while(src[i] != '\0')
    {
        ++N;
        ++i;
    }

    dest = (char*)malloc(N + 1);
    if(NULL == dest)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    i = 0;
    while(i < N)
    {
        dest[i] = src[i];
        ++i;
    }
    
    dest[i] = '\0';

    printf("src = %s, dest = %s\n", src, dest);

    free(dest);
    dest = NULL;

    return (EXIT_SUCCESS);
}