/**
 * @file Array_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the array
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h> 
#include <stdlib.h>

/* Define an array of 5 integers */
int i_arr[5];        

int main(void)
{
    i_arr[0] = 10;
    i_arr[1] = 20;
    i_arr[2] = 30;
    i_arr[3] = 40;
    i_arr[4] = 50;

    printf("i_arr[%d] : %d\n", 0, i_arr[0]);
    printf("i_arr[%d] : %d\n", 1, i_arr[1]);
    printf("i_arr[%d] : %d\n", 2, i_arr[2]);
    printf("i_arr[%d] : %d\n", 3, i_arr[3]);
    printf("i_arr[%d] : %d\n", 4, i_arr[4]);

    return (0);
}