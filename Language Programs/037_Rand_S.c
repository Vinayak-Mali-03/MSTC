/**
 * @file 037_Rand_S.c
 * @author Vinayak Mali
 * @brief To demonstrate the rand_s function
 * @version 0.1
 * @date 2023-08-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#define _CRT_RAND_S

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int num;
    unsigned int N;
    unsigned i;

    printf("Enter how many random numbers must be generated : ");
    scanf("%u", &N);

    for(i = 0; i < N; i++)
    {
        rand_s(&num);
        printf("num = %u\n", num % 1000);
    }

    return (EXIT_SUCCESS);
}