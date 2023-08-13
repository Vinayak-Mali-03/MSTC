/**
 * @file 024_Struct_Demo.c
 * @author Vinayak Mali
 * @brief Create a struct Date
 * @version 0.1
 * @date 2023-08-14
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
    struct Date d1 = {1, 1, 1970};
    struct Date d2;
    int dd, mm, yy;

    d2.day = 2;
    d2.month = 11;
    d2.year = 1990;

    dd = d1.day;
    mm = d1.month;
    yy = d1.year;

    printf("d1 : %d-%d-%d\n", dd, mm, yy);

    dd = d2.day;
    mm = d2.month;
    yy = d2.year;

    printf("d2 : %d-%d-%d\n", dd, mm, yy);

    return (0);
}