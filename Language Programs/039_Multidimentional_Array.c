/**
 * @file 039_Multidimentional_Array.c
 * @author Vinayak Mali
 * @brief To demonstrate the general syntax for read and write on the multidimentional array
 * @version 0.1
 * @date 2023-08-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define N1  5
#define N2  3

int arr[N1][N2];

void read_all_elements(void)
{
    int i, j;
    int curr_element;

    for(i = 0; i < N1; ++i)
        for(j = 0; j < N2; ++j)
            curr_element = arr[i][j];
    return (0);
}

void write_all_elements(void)
{
    int i, j;

    for(i = 0; i < N1; ++i)
        for(j = 0; j < N2; j++)
            arr[i][j] = i + j;
}