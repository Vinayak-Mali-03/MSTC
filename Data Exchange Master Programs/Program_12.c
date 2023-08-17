/**
 * @file Program_12.c
 * @author Vinayak Mali
 * @brief Date exchange master program 12
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1

int main(void)
{
    int* a[5] = {0, 0, 0, 0, 0};
    int i;

    for(i = 0; i < 5; ++i)
    {
        a[i] = (int*)malloc(sizeof(int));
        if(a[i] == 0)
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    for(i = 0; i < 5; ++i)
    {
        *a[i] = (i + 1) * 100;
    }

    for(i = 0; i < 5; ++i)
    {
        printf("*a[%d] = %d\n", i, *a[i]);
    }

    for(i = 0; i < 5; ++i)
    {
        free(a[i]);
        a[i] = 0;
    }

    return (0);
}