/**
 * @file 032_Power_Of_Void_Star_And_Casting.c
 * @author Vinayak Mali
 * @brief To demonstrate the power of void* and type casting
 * @version 0.1
 * @date 2023-09-25
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

unsigned char arr[12] = {
                            0x1, 0x0, 0x0, 0x0,
                            0x1, 0x0, 0x0, 0x0, 
                            0xB2, 0x7, 0x0, 0x0
                        };

int main(void)
{
    void* p = NULL;

    p = arr;

    printf("Date : %d-%d-%d\n", 
                ((struct Date*)p)->day,
                ((struct Date*)p)->month,
                ((struct Date*)p)->year);

    return (EXIT_SUCCESS);
}