/**
 * @file Program_19.c
 * @author Vinayak Mali
 * @brief Date exchange master program 19
 * @version 0.1
 * @date 2023-08-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS    0
#define EXIT_FAILURE    1

struct Date
{
    int day;
    int month;
    int year;
};

void initialize_date_instances(struct Date** ppDate, int N);
void show_date_instances(struct Date** pp_Date, int N);

int main(void)
{
    int N = 5;
    struct Date** ppDate = 0;
    int i;

    ppDate = (struct Date**)malloc(N * sizeof(struct Date*));
    if(0 == ppDate)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }


    for(i = 0; i < N; i++)
    {
        ppDate[i] = (struct Date*)malloc(sizeof(struct Date));
        if(0 == ppDate[i])
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    initialize_date_instances(ppDate, N);
    show_date_instances(ppDate, N);

    for(i = 0; i < N; ++i)
    {
        free(ppDate[i]);
        ppDate[i] = 0;
    }

    free(ppDate);
    ppDate = 0;

    return (EXIT_SUCCESS);
}

void initialize_date_instances(struct Date** ppDate, int N)
{
    int i;

    for(i = 0; i < N; ++i)
    {
        ppDate[i]->day = 10 + i;
        ppDate[i]->month = 10 - i;
        ppDate[i]->year = 1990 + i;
    }
}

void show_date_instances(struct Date** ppDate, int N)
{
    int i;

    for(i = 0; i < N; ++i)
    {
        printf("Date instance %d : %d-%d-%d\n", i, ppDate[i]->day, ppDate[i]->month, ppDate[i]->year);
    }
}