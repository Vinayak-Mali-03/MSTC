/**
 * @file 025_Global_Const_Backdoor.c
 * @author Vinayak Mali
 * @brief To demonstrate the global const backdoor
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

const int n = 100;

int main(void)
{
    int* p = &n;

    printf("*p = %d\n", *p);

    *p = 500;

    printf("*p = %d\n", *p);

    return (EXIT_FAILURE);
}

/* The above code produce an error and terminate the program 
    beacase the global const data goes into the read only data section.
    We can not perform write operation on read only data section variable
    we can only perform read operation on it.*/