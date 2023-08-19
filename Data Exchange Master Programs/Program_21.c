/**
 * @file Program_21.c
 * @author Vinayak Mali
 * @brief Date exchange master program 21
 * @version 0.1
 * @date 2023-08-19
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

void allocate_array_of_pointer_to_struct_Date(struct Date*** ppp_date, int* pN);
void initialize_date_instances(struct Date** ppDate, int N);
void show_date_instances(struct Date** ppDate, int N);
void release_date_instances_and_array(struct Date*** ppp_date, int N);

int main(void)
{
    struct Date** ppDate = 0;
    int N = -1;

    allocate_array_of_pointer_to_struct_Date(&ppDate, &N);
    initialize_date_instances(ppDate, N);
    show_date_instances(ppDate, N);
    release_date_instances_and_array(&ppDate, N);

    return (EXIT_SUCCESS);
}

void allocate_array_of_pointer_to_struct_Date(struct Date*** ppp_date, int* pN)
{
    struct Date** ppDate = 0;
    int N;
    int i;

    printf("Enter length of array : ");
    scanf("%d", &N);

    if(0 == N)
    {
        puts("Bad value for array length");
        exit(EXIT_FAILURE);
    }

    ppDate = (struct Date**)malloc(sizeof(struct Date) * N);
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
            puts("Error in allocatign memory");
            exit(EXIT_FAILURE);
        }
    }

    *pN = N;
    *ppp_date = ppDate;
}

void initialize_date_instances(struct Date** ppDate, int N)
{
    int i;

    for(i = 0; i < N; i++)
    {
        ppDate[i]->day = 10 + i;
        ppDate[i]->month = 12 - i;
        ppDate[i]->year = 1990 + i;
    }
}

void show_date_instances(struct Date** ppDate, int N)
{
    int i;

    for(i = 0; i < N; i++)
    {
        printf("Date Instance %d : %d-%d-%d\n", i, ppDate[i]->day, ppDate[i]->month, ppDate[i]->year);
    }
}

void release_date_instances_and_array(struct Date*** ppp_date, int N)
{
    int i;
    struct Date** ppDate = 0;

    ppDate = *ppp_date;

    for(i = 0; i < N; ++i)
    {
        free(ppDate[i]);
        ppDate[i] = 0;
    }
    
    free(ppDate);
    ppDate = 0;

    *ppp_date = 0;
}