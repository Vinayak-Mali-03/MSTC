/**
 * @file 8_Array_access_three_ways.c
 * @author Vinayak Mali
 * @brief To access the array using three ways
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {1000, 2000, 3000, 4000, 5000};
    int i;
    int n;
    int (*p_arr)[5];
    int* p_int;

    puts("Way 1 : Using name");
    for(i = 0; i < 5; ++i)
        printf("A[%d] = %d\n", i, A[i]);

    puts("Way 2 : Using pointer to array");
    p_arr = &A;
    for(i = 0; i < 5; ++i)
        printf("(*p_arr)[%d] = %d\n", i, (*p_arr)[i]);

    puts("Way 3 : Using pointer to array element type");
    p_int = &A[0];
    for(i = 0; i < 5; ++i)
        printf("*(p_arr + %d) = %d\n", i, *(p_int + i));

    puts("Way 3.1 : pointer to array element type but using array name");
    p_int = A;
    for(i = 0; i < 5; ++i)
        printf("*(p_int + %d) = %d\n", i, *(p_int + i));

    return (0);
}

/*
    Pointer to array.

    int A[5];
    int (*p)[5];
    p = &A


    pointer to array element type
    int* p = &A[0];

    Or

    int* p = A;


    VALUE(&A) == VALUE(A) == VALUE(&A[0])
*/