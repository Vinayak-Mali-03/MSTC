/**
 * @file 042_Struct_With_Bit_Fields.c
 * @author Vinayak Mali
 * @brief To demonstrate the struct with bit fields
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day:5;
    int month:4;
    short:0;
    int year;
};

struct Test
{
    char:0;
    int a:3;
    int b:2;
    int c:2;
};

int main(void)
{
    printf("sizeof(struct Date) = %llu\n", sizeof(struct Date));

    printf("sizeof(struct Test) = %llu\n", sizeof(struct Test));

    return (EXIT_SUCCESS);
}