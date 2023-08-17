/**
 * @file Program_08.c
 * @author Vinayak Mali
 * @brief Date exchange master program 08
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct Date d_arr[5];
    int i;

    for(i = 0; i < 5; ++i)
    {
        d_arr[i].day = i + 1;
        d_arr[i].month = 10 - i;
        d_arr[i].year = 2020 + i; 
    }

    for(i = 0; i < 5; ++i)
    {
        printf("Date at index %d is : %d-%d-%d\n", i, d_arr[i].day, d_arr[i].month, d_arr[i].year);
    }

    return (0);
}