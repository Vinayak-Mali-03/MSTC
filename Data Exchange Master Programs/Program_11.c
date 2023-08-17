/**
 * @file Program_11.c
 * @author Vinayak Mali
 * @brief Date exchange master program 11
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILRUE    1

typedef unsigned long long size_t;

struct Date
{
    int day;
    int month;
    int year;
};

void allocate_date_array(struct Date** ppDate, size_t* pN);
void init_array(struct Date* pDate_arr, size_t N);
void show_array(struct Date* pDate_arr, size_t N);
void free_date_array(struct Date** ppDate_arr);

int main(void)
{
    struct Date* pDate_arr = 0;
    size_t N;

    allocate_date_array(&pDate_arr, &N);
    init_array(pDate_arr, N);
    show_array(pDate_arr, N);
    free_date_array(&pDate_arr);

    return (0);
}

void allocate_date_array(struct Date** ppDate_arr, size_t* pN)
{
    struct Date* pDate_arr = 0;
    size_t N;

    N = 5;
    pDate_arr = (struct Date*)malloc(sizeof(struct Date) * N);
    if(pDate_arr == 0)
    {
        puts("Error in allocting memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;
    *ppDate_arr = pDate_arr;
}

void init_array(struct Date* pDate_arr, size_t N)
{
    size_t i;

    for(i = 0; i < N; ++i)
    {
        pDate_arr[i].day = 20 + i;
        pDate_arr[i].month = 10 + i;
        pDate_arr[i].year = 2010 + i;
    }
}

void show_array(struct Date* pDate_arr, size_t N)
{
    size_t i;

    for(i = 0; i < N; ++i)
        printf("Date at index %llu is %d-%d-%d\n", i, pDate_arr[i].day, pDate_arr[i].month, pDate_arr[i].year);
}

void free_date_array(struct Date** ppDate_arr)
{
    free(*ppDate_arr);
    *ppDate_arr = 0;
}
