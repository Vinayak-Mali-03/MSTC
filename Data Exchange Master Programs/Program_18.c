/**
 * @file Program_18.c
 * @author Vinayak Mali
 * @brief Date exchange master program 18
 * @version 0.1
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE    1
#define EXIT_SUCCESS    0

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    int N = 5;
    struct Date *d_arr[5] = {0, 0, 0, 0, 0};
    int i;

    for(i = 0; i < N; ++i)
    {
        d_arr[i] = (struct Date*)malloc(sizeof(struct Date) * N);
        if(0 == d_arr[i])
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    for(i = 0; i < N; ++i)
    {
        d_arr[i]->day = 10 + i;
        d_arr[i]->month = 12 - i;
        d_arr[i]->year = 2020 + i;
    }

    for(i = 0; i < N; ++i)
    {
        printf("Date Instance %d : %d-%d-%d\n", i, d_arr[i]->day, d_arr[i]->month, d_arr[i]->year);
    }

    for(i = 0; i < N; i++)
    {
        free(d_arr[i]);
        d_arr[i] = 0;
    }

    return (EXIT_SUCCESS);
}