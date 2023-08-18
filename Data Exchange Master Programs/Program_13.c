/**
 * @file Program_13.c
 * @author Vinayak Mali
 * @brief Data exchange master program 13
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

    initialise_array(a, 5);
    show_array(a, 5);

    for(i = 0; i < 5; i++)
    {
        free(a[i]);
        a[i] = 0;
    }

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

    for(i = 0; i < N; ++i)
        printf("*pp_arr[%d] : %d\n", i, *pp_arr[i]);
}