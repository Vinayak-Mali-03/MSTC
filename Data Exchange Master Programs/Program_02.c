/**
 * @file Program_02.c
 * @author Vinayak Mali
 * @brief Data exchange master program 2
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int* get_array(int* pN);

int main(void)
{
    int* p = 0;
    int N = -1;
    int i;

    p = get_array(&N);

    /* Fill array */
    for(i = 0; i < N; i++)
        *(p + i) = (i + 1) * 100;

    /* Show array */
    for(i = 0; i < N; ++i)
        printf("*(p + %d) = %d\n", i, *(p + i));

    free(p);
    p = 0;

    exit(0);
}

int* get_array(int* pN)
{
    int* p = 0;
    int N;

    printf("Enter size of array : ");
    scanf("%d", &N);

    if(N <= 0)
    {
        puts("Array size must be positive");
        exit(-1);
    }

    p = (int*)malloc(N * sizeof(int));
    if(p == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;
    return (p);
}