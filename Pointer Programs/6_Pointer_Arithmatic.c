/**
 * @file 6_Pointer_Arithmatic.c
 * @author Vinayak Mali
 * @brief To show the pointer arithmatic
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Note : This program produce warnings egnore them and run .exe file 
    and see output of additing an integer in pointer */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* pc = 0;
    short* ps = 0;
    int* pi = 0;
    double* pd = 0;

    printf("pc + 1 = %llu\n", pc + 1);
    printf("pc + 2 = %llu\n", pc + 2);
    printf("pc + 3 = %llu\n", pc + 3);
    
    puts("--------------------------------");

    printf("ps + 1 = %llu\n", ps + 1);
    printf("ps + 2 = %llu\n", ps + 2);
    printf("ps + 3 = %llu\n", pc + 3);

    puts("--------------------------------");

    printf("pi + 1 = %llu\n", pi + 1);
    printf("pi + 2 = %llu\n", pi + 2);
    printf("pi + 3 = %llu\n", pi + 3);

    puts("--------------------------------");

    printf("pd + 1 = %llu\n", pd + 1);
    printf("pd + 2 = %llu\n", pd + 2);
    printf("pd + 3 = %llu\n", pd + 3);

    puts("--------------------------------");

    return (0);
}

/*
    Interpretation of additoin and subtraction 
    of a pointer and integer

    Let p be a pointer of type T.

    T* p = 0;

    p + k = p + k * sizeof(T)
    p - k = p - k * sizeof(T)

    Let x be an address in p.

    p + k = x + k * sizeof(T)
    p - k = x + k * sizeof(T)
*/