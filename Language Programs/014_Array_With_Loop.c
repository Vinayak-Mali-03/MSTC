/**
 * @file Array_With_For_Loop.c
 * @author Vinayak Mali
 * @brief Use array with loop
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* To Create array with initilsation */
    int i_array[] = {10, 20, 30, 40, 50};

    int i_arr[8];    /* Define an array of 8 elements*/
    int k;           /* Define a loop variable */

    k = 0;
    while(k < 8)
    {
        i_arr[k] = k * k;
        ++k;
    }

    k = 0;
    while(k < 8)
    {
        printf("i_arr[%d] : %d\n", k, i_arr[k]);
        k++;
    }

    return (0);
}