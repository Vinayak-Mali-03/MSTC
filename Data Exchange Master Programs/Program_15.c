/**
 * @file Program_15.c
 * @author Vinayak Mali
 * @brief Date exchange master program 15
 * @version 0.1
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1

void initialise_array(int** pp_arr, int N);
void show_array(int** pp_arr, int N);

int main(void)
{
    int** pp_arr = 0;
    int N = 5;
    int i;

    pp_arr = (int**)malloc(sizeof(int*) * N);
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

    initialise_array(pp_arr, N);
    show_array(pp_arr, N);

    for(i = 0; i < N; i++)
    {
        free(pp_arr[i]);
        pp_arr[i] = 0;
    }

    free(pp_arr);
    pp_arr = 0;

    return (0);
}

void initialise_array(int** pp_arr, int N)
{
    int i;

    for(i = 0; i < N; i++)
        *pp_arr[i] = (i + 1) * 100;
}

void show_array(int** pp_arr, int N)
{
    int i;

    for(i = 0; i < N; i++)
        printf("*pp_arr[%d] : %d\n", i, *pp_arr[i]);
}


