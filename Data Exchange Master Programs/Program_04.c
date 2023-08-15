/**
 * @file Program_04.c
 * @author Vinayak Mali
 * @brief Date exchange master program 4
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

/* Here pDate is an IN Parameter */
void show_date(struct Date* pDate);

int main(void)
{
    struct Date exam_date = {1, 2, 2023};
    struct Date* p_result_date = 0;

    p_result_date = (struct Date*)malloc(sizeof(struct Date));
    if(p_result_date == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    p_result_date->day = 30;
    p_result_date->month = 3;
    p_result_date->year = 2023;

    show_date(&exam_date);
    show_date(p_result_date);

    free(p_result_date);
    p_result_date = 0;

    return (0);
}

void show_date(struct Date* pDate)
{
    printf("%d-%d-%d\n", pDate->day, pDate->month, pDate->year);
}