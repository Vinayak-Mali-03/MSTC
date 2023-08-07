/**
 * @file Scanf_Demo.c
 * @author Vinayak Mali
 * @brief To demonstarate the scanf function
 * @version 0.1
 * @date 2023-08-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int num;
int main(void)
{
    printf("Enter an integer value : ");
    scanf("%d", &num);

    printf("num = %d\n", num);

    exit(0);
}

/*
    CHARACTER 
    single byte ASCII -> %c

    SIGNED DECIMAL INTEGERS INPUT
        char -> %hhd
        short -> %hd
        int -> %d
        long int -> %ld
        long long int -> %lld

    UNSIGNED DECIMAL INTEGERS INPUT
        unsigned char -> %hhu
        unsigned short -> %hu
        unsigned int -> %u
        unsigned long int -> %lu
        unsigned long long int -> %llu

    FLOATING POINT NUMBERS
        single precision floating point -> %f
        double precision floating point -> %lf

*/