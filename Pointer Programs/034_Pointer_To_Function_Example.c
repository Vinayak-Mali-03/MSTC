/**
 * @file 034_Pointer_To_Function_Example.c
 * @author Vinayak Mali
 * @brief To demonstrate the pointer to function example
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    double marks;
    double attnd;
};

void show(const char* msg, struct Student* p_str_arr, int N);

void sort(struct Student* arr, int N, int(compare)(const struct Student*, const struct Student*));

int compare_by_roll(const struct Student* ps1, const struct Student* ps2);
int compare_by_marks(const struct Student* ps1, const struct Student* ps2);
int compare_by_attnd(const struct Student* ps1, const struct Student* ps2);

struct Student st_arr[5] = {
    {5, 98.3, 99.33},
    {4, 45.25, 55.20},
    {1, 55.20, 78.50},
    {3, 99.99, 99.21},
    {2, 99.98, 99.99}
};

int main(void)
{
    show("Before sort : ", st_arr, 5);

    sort(st_arr, 5, compare_by_roll);
    show("After sort_by_roll() : ", st_arr, 5);

    sort(st_arr, 5, compare_by_marks);
    show("After sort_by_marks() : ", st_arr, 5);

    sort(st_arr, 5, compare_by_attnd);
    show("After sort_by_attnd()", st_arr, 5);

    puts("End Of Program");

    return (EXIT_SUCCESS);
}

void sort(struct Student* arr, int N, int(*compare)(const struct Student* , const struct Student*))
{
    int i, j;
    struct Student key;

    for(j = 1; j < N; ++j)
    {
        memcpy(&key, &arr[j], sizeof(struct Student));
        i = j - 1;
        
        while(i > -1 && compare(&arr[i], &key) > 0)
        {
            memcpy(&arr[i + 1], &arr[i], sizeof(struct Student));
            i = i - 1;
        }

        memcpy(&arr[i + 1], &key, sizeof(struct Student));
    }
}

void show(const char* msg, struct Student* p_st_arr, int N)
{
    int i;

    if(msg)
        puts(msg);

    for(i = 0; i < N; ++i)
        printf("Roll = %d\tMarks = %.2lf\tAttendance = %.2lf\n", p_st_arr[i].roll, p_st_arr[i].marks, p_st_arr[i].attnd);
}

int compare_by_roll(const struct Student* ps1, const struct Student* ps2)
{
    if(ps1->roll > ps2->roll)
        return (1);
    else if(ps1->roll < ps2->roll)
        return (-1);
    else 
        return (0);
}

int compare_by_marks(const struct Student* ps1, const struct Student* ps2)
{
    if(ps1->marks > ps2->marks)
        return (1);
    else if(ps1->marks < ps2->marks)
        return (-1);
    else 
        return (0);
}

int compare_by_attnd(const struct Student* ps1, const struct Student* ps2)
{
    if(ps1->attnd > ps2->attnd)
        return (1);
    else if(ps1->attnd < ps2->attnd)
        return (-1);
    else 
        return (0);
}