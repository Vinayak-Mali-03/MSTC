/**
 * @file 030_Static_Keyword.c
 * @author Vinayak Mali
 * @brief To demonstreat the static keyword
 * @version 0.1
 * @date 2023-08-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_fun(void);
void other_fun(void);

int main(void)
{
    puts("test_fun()  call 1 form main()");
    test_fun();

    other_fun();

    return (0);
}

void test_fun(void)
{
    int n;

    static int var;
    static int m;

    printf("&n = %p\n", &n);
    printf("&m = %p\n", &m);
    printf("&ar = %p\n", &var);
}

void other_fun(void)
{
    puts("test_fun() call 2 from other_fun()");
    test_fun();
}

/*
    In above program "m" and "var" are the static local variables.

    "m" and "var" are allocated only once, and not per call to test_fun()
    function. Therefore there is only one copy of n amongst all call to 
    test_fun() function.

    "m" and "var" are allocated at start of the program and de-allocated 
    at the end of program.

    local static variable stored in BSS section.
*/