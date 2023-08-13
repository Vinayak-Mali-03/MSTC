/**
 * @file Pre_Post_Difference.c
 * @author Vinayak Mali
 * @brief To show the difference between pre and post increment, decrement
 * @version 0.1
 * @date 2023-08-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1 = 10;
    int num_2 = 20;
    int rs1 = 0, rs2 = 0;

    printf("num_1 = %d\n", num_1);
    rs1 = ++num_1;
    printf("After ++num, num_1 = %d, rs = %d\n", num_1, rs1);

    rs2 = num_1++;
    printf("After num++, num_1 = %d, rs2 = %d\n", num_1, rs2);

    rs1 = 0;
    rs2 = 0;

    rs1 = --num_2;
    printf("After --num_2, num_2 = %d, rs1 = %d\n", num_2, rs1);

    rs2 = num_2--;
    printf("After num_2--, num_2 = %d, rs2 = %d\n", num_2, rs2);

    return (0);
}