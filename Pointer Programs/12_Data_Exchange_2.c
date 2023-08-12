/**
 * @file 12_Data_Exchange_2.c
 * @author Vinayak Mali
 * @brief To transfer the array form one function to the another function
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define N   8

void show_array_1(int(*p)[N], int length);
void show_array_2(int* p, int length);

void populate_array(int* p, int length);

int main(void)
{
    int A[N] = {100, 200, 300, 400, 500, 600, 700, 800};
    int B[N];

    show_array_1(&A, N);
    puts("-----------------------------------");
    show_array_2(A, N);

    puts("Show array B, before populate array");
    show_array_2(B, N);

    populate_array(B, N);

    puts("Show array B, after poplate array");
    show_array_2(B, N);

    return (0);
}

void show_array_1(int(*p)[N], int length)
{
    int index;
    int element;

    for(index = 0; index < length; ++index)
    {
        element = (*p)[index];
        printf("Element at index %d = %d\n", index, element);
    }
}

void show_array_2(int* p, int length)
{
    int index;
    int element;

    for(index = 0; index < length; ++index)
    {
        element = *(p + index);  /* OR element = p[index] */
        printf("Element at index %d = %d\n", index, element);
    }
}

void populate_array(int* p, int length)
{
    int index;

    for(index = 0; index < length; ++index)
        *(p + index) = (index + 1) * 1000;
}