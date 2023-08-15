/**
 * @file Program_1.c
 * @author Vinayak Mali
 * @brief Data exchange master program 1
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long size_t;

void fill_array(int* p, size_t N);
void show_array(int* p, size_t N);

int main(void)
{
    int* p_arr = 0;
    size_t N = 3;

    p_arr = (int*)malloc(N * sizeof(int));
    if(p_arr == 0)
    {
        puts("Error in allocating memory allocation");
        exit(EXIT_FAILURE);
    }

    fill_array(p_arr, N);
    show_array(p_arr, N);

    free(p_arr);
    p_arr = 0;

    return (0);
}

void fill_array(int* p, size_t N)
{
    size_t i;
    
    for(i = 0; i < N; i++)
        *(p + i) = (i + 1) * 100;
}

void show_array(int* p, size_t N)
{
    size_t i;

    for(i = 0; i < N; i++)
        printf("*(p + %lld) = %d\n", i, *(p + i));  // You can also use p[i]
}