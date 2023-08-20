/**
 * @file 034_Calloc_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the calloc function
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int size_t;

void* malloc(size_t size_in_bytes);

/*
    Prototype of calloc() function

    void* calloc(size_t number_of_elements, size_t size_per_elements);

*/

void* demo_calloc(size_t number_of_elements, size_t size_per_elements)
{
    void* p = NULL;

    p = malloc(number_of_elements * size_per_elements);
    if(NULL != p)
        memset(p, 0, number_of_elements * size_per_elements);

    return (p);
}

/*
    T* p = malloc(sizeof(T));

    T* p = calloc(1, sizeof(T));
*/