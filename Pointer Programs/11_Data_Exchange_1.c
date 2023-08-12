/**
 * @file 11_Data_Exchange_1.c
 * @author Vinayak Mali
 * @brief To introduce the method called Paramer as return value
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int get_integer_val_1(void);
void get_integer_val_2(int* p_ing);

int main(void)
{
    int number_1 = 0, number_2 = 0;

    printf("number_1 = %d, number_2 = %d\n",
                number_1, number_2);

    number_1 = get_integer_val_1();
    get_integer_val_2(&number_2);

    printf("number_1 = %d, number_2 = %d\n",
            number_1, number_2);

    return (0);
}

int get_integer_val_1(void)
{
    int n = 500;
    return (n);
}

/* Parameter as return value */
void get_integer_val_2(int* p_int)
{
    *p_int = 1000;
}