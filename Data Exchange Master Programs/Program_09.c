/**
 * @file Program_09.c
 * @author Vinayak Mali
 * @brief Date exchange master program 09
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long size_t;

struct Date
{
    int day;
    int month;
    int year;
};

void init_array(struct Date* pDate_arr, size_t N);
void show_array(struct Date* pDate_arr, size_t N);

int main(void)
{
    struct Date* pDate_arr = 0;
    size_t N = 5;

    pDate_arr = (struct Date*)malloc(N * sizeof(struct Date));
    if(pDate_arr == 0)
    {
        puts("Error in allocating mmeory");
        exit(EXIT_FAILURE);
    }

    init_array(pDate_arr, N);
    show_array(pDate_arr, N);

    free(pDate_arr);
    pDate_arr = 0;

    return (0);
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