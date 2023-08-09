/**
 * @file Summation_Of_Elements_In_Array.c
 * @author Vinayak Mali
 * @brief To print the summation of elements in array
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define N   10

int main(void)
{
    int A[N];   /* Must contain an integer value*/
    int i;      /* i is loop variable */
    int sum;    /* variable to store the summation of array elements */

    /* Accept elements in array from stadard input device */
    for(i = 0; i < N; i++)
    {
        printf("Please enter element at index %d : ", i);
        scanf("%d", &A[i]);
    }

    /* Calculate the summation of array elements */
    sum = 0;
    for(i = 0; i < N; ++i)
        sum = sum + A[i];

    printf("The summation is : %d\n", sum);

    return (EXIT_SUCCESS);  /* EXIT_SUCCESS And EXIT_FAILURE are symblic constant */
}