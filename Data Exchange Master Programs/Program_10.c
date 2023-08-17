/**
 * @file Program_10.c
 * @author Vinayak Mali
 * @brief Date exchange master program 10
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1

struct Date
{
    int day;
    int month;
    int year;
};

struct Date* allocate_date_array(size_t* pN);
void init_array(struct Date* pDate_arr, size_t N);
void show_array(struct Date* pDate_arr, size_t N);
void free_date_array(struct Date** ppDate_arr);

int main(void)
{
    struct Date*  pDate_arr = 0;
    size_t N;

    pDate_arr = allocate_date_array(&N);
    init_array(pDate_arr, N);
    show_array(pDate_arr, N);
    free_date_array(&pDate_arr);

    return (0);
}

struct Date* allocate_date_array(size_t* pN)
{
    struct Date* pDate_arr = 0;
    size_t N;

    N = 5;
    pDate_arr = (struct Date*)malloc(N * sizeof(struct Date));
    if(pDate_arr == 0)
    {
        puts("Error in allocating mmeory");
        exit(EXIT_FAILURE);
    }

    *pN = N;
    return (pDate_arr);
}

void init_array(struct Date* pDate_arr, size_t N)
{
    size_t i;

    for(i = 0; i < N; ++i)
    {
        pDate_arr[i].day = 20 + i;
        pDate_arr[i].month = 10 - i;
        pDate_arr[i].year = 1990 + i;
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