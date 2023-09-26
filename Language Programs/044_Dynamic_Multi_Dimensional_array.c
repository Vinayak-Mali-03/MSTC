/**
 * @file 044_Dynamic_Multi_Dimensional_array.c
 * @author Vinayak Mali
 * @brief To demonstrate the dynamic multi dimentional array
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void matrix_M_N(void);

int main(void)
{
    size_t M, N;
    int* pM = NULL;
    size_t i, j;

    printf("Enter the number of rows of Matrix : ");
    scanf("%llu", &M);

    printf("Enter the number of cols of Matrix : ");
    scanf("%llu", &N);

    pM = (int*)malloc(M * N * sizeof(int));
    if(NULL == pM)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < M; ++i)
        for(j = 0; j < N; ++j)
            *(pM + i * N + j) = i + j;

    for(i = 0; i < M; ++i)
        for(j = 0; j < N; ++j)
            printf("Matrix[%llu][%llu]  == %d\n", i, j, *(pM + i * N + j));

    free(pM);
    pM = NULL;

    return (EXIT_SUCCESS);
}