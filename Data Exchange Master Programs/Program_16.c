/**
 * @file Program_16.c
 * @author Vinayak Mali
 * @brief Date exchange master program 16
 * @version 0.1
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1

int** allocate_array_of_pointer_to_integer(int* pN);
void initialize_array(int** pp_arr, int N);
void show_array(int** pp_arr, int N);
void release_array(int** pp_arr, int N);
void release_array(int** pp_arr, int N);
void release_array_2(int*** ppp_arr, int N);

int main(void)
{
    int** pp_arr = 0;
    int N = -1;

    pp_arr = allocate_array_of_pointer_to_integer(&N);
    initialize_array(pp_arr, N);
    show_array(pp_arr, N);

    /*
        release_array(pp_arr, N);
        pp_arr = 0;
    */

    printf("main() : Before call to release_array_2(), pp_arr = %llu\n", (unsigned long long int)pp_arr);

    release_array_2(&pp_arr, N);

    printf("main() : After call to release_array_2(), pp_arr = %llu\n", (unsigned long long int)pp_arr);

    return (0);
}

int** allocate_array_of_pointer_to_integer(int* pN)
{
    int N = -1;
    int** pp_arr = 0;
    int i;

    printf("Enter length of array : ");
    scanf("%d", &N);

    if(N <= 0)
    {
        puts("Bad value for array length");
        exit(EXIT_FAILURE);
    }

    pp_arr = (int**)malloc(N * sizeof(int*));
    if(0 == pp_arr)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < N; ++i)
    {
        pp_arr[i] = (int*)malloc(sizeof(int));
        if(0 == pp_arr[i])
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    *pN = N;
    return (pp_arr);
}

void initialize_array(int** pp_arr, int N)
{
    int i;

    for(i = 0; i < N; ++i)
        *pp_arr[i] = (i + 1) * 100;
}

void show_array(int** pp_arr, int N)
{
    int i;

    for(i = 0; i < N; ++i)
        printf("*pp_arr[%d] : %d\n", i, *pp_arr[i]);
}

void release_array(int** pp_arr, int N)
{
    int i;

    for(i = 0; i < N; ++i)
    {
        free(pp_arr[i]);
        pp_arr[i] = 0;
    }

    free(pp_arr);
    pp_arr = 0;
}

void release_array_2(int*** ppp_arr, int N)
{
    int** pp_arr = 0;
    int i;

    pp_arr = *ppp_arr;

    for(i = 0; i < N; ++i)
    {
        free(pp_arr[i]);
        pp_arr[i] = 0;
    }

    free(pp_arr);
    pp_arr = 0;

    *ppp_arr = 0;
}