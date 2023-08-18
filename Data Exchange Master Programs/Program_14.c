/**
 * @file Program_14.c
 * @author Vinayak Mali
 * @brief Date exchange master program 14
 * @version 0.1
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1

int main(void)
{
    int** pp_arr = 0;
    int N = 10;
    int i;

    pp_arr = (int**)malloc(N * sizeof(int*));
    if(pp_arr == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < N; ++i)
    {
        pp_arr[i] = (int*)malloc(sizeof(int));
        if(pp_arr[i] == 0)
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    for(i = 0; i < N; ++i)
    {
        *pp_arr[i] = (i + 1) * 100;
    }

    for(i = 0; i < N; ++i)
    {
        printf("*pp_arr[%d] : %d\n", i, *pp_arr[i]);
    }

    for(i = 0; i < N; i++)
    {
        free(pp_arr[i]);
        pp_arr[i] = 0;
    }

    free(pp_arr);
    pp_arr = 0;

    return (0);
}