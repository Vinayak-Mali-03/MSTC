/**
 * @file Date_Client.c
 * @author Vinayak Mali
 * @brief To demonstrate the modular programming
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Date.h"

#ifndef NULL
#define NULL ((void*)0)
#endif  /* NULL */

int main(void)
{
    Date_t* p_date = NULL;
    int dd, mm, yy;

    p_date = create_date(15, 8, 1947);

    show_date(p_date);

    set_day(p_date, 26);
    set_month(p_date, 1);
    set_year(p_date, 1950);

    dd = get_day(p_date);
    mm = get_month(p_date);
    yy = get_year(p_date);

    printf("Date : %d-%d-%d\n", dd, mm, yy);

    destroy_date(&p_date);

    return (SUCCESS);
}