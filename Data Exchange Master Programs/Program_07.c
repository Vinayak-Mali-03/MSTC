/**
 * @file Program_07.c
 * @author Vinayak Mali
 * @brief Date exchange master program 07
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

void get_date(struct Date** pp_date);
void show_date(struct Date* pDate);
void release_date(struct Date** pp_Date);

int main(void)
{
    struct Date* pDate = 0;

    get_date(&pDate);
    show_date(pDate);
    release_date(&pDate);

    return (0);
}

void get_date(struct Date** pp_date)
{
    struct Date* pDate = 0;
    int day, month, year;

    printf("Enter day : ");
    scanf("%d", &day);

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);

    pDate = (struct Date*)malloc(sizeof(struct Date));
    if(pDate == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    pDate->day = day;
    pDate->month = month;
    pDate->year = year;

    *pp_date = pDate;
}

void show_date(struct Date* pDate)
{
    printf("%d-%d-%d\n", pDate->day, pDate->month, pDate->year);
}

void release_date(struct Date** ppDate)
{
    free(*ppDate);
    *ppDate = 0;
}