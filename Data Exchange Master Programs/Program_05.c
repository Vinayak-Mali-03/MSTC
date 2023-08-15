/**
 * @file Program_05.c
 * @author Vinayak Mali
 * @brief Date exchange master program 5
 * @version 0.1
 * @date 2023-08-16
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

void initialize_date(struct Date* pDate, int init_day, int init_month, int init_year);
void show_date(struct Date* pDate);

int main(void)
{
    struct Date exam_date;
    struct Date* p_result_date = 0;

    p_result_date = (struct Date*)malloc(sizeof(struct Date));
    if(p_result_date == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    initialize_date(&exam_date, 24, 7, 2023);
    initialize_date(p_result_date, 10, 9, 2023);

    show_date(&exam_date);
    show_date(p_result_date);

    free(p_result_date);
    p_result_date = 0;

    return (0);
}

void initialize_date(struct Date* pDate, int init_day, int init_month, int init_year)
{
    pDate->day = init_day;
    pDate->month = init_month;
    pDate->year = init_year;
}

void show_date(struct Date* pDate)
{
    printf("%d-%d-%d\n", pDate->day, pDate->month, pDate->year);
}