/**
 * @file Program_06.c
 * @author Vinayak Mali
 * @brief Data exchange master program 6
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

struct Date* get_date(void);

int main(void)
{
    struct Date* p = 0;

    p = get_date();
    printf("%d-%d-%d\n", p->day, p->month, p->year);

    free(p);
    p = 0;
    return (0);
}

struct Date* get_date(void)
{
    struct Date* pDate = 0;
    int day;
    int month;
    int year;

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

    return (pDate);
}