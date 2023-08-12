/**
 * @file 13_Pointer_To_Structure.c
 * @author Vinayak Mali
 * @brief To create a pointer of a structure
 * @version 0.1
 * @date 2023-08-13
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
    struct Date exam_date;
    struct Date* p_exam_date;
    int dd, mm, yy;

    p_exam_date = &exam_date;

    (*p_exam_date).day = 12;
    (*p_exam_date).month = 8;
    (*p_exam_date).year = 2023;

    dd = (*p_exam_date).day;
    mm = (*p_exam_date).month;
    yy = (*p_exam_date).year;

    printf("%d-%d-%d\n", dd, mm, yy);

    return (0);
}

