/**
 * @file 031_Static_Keyword_2.c
 * @author Vinayak Mali
 * @brief Use of static keyword
 * @version 0.1
 * @date 2023-08-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_function(void);

int main(void)
{
    int i;

    for(i = 0; i < 5; ++i)
        test_function();

    return (0);
}

void test_function(void)
{
    int m = 1;
    static int n = 1;
    int i;

    printf("Start Value, m = %d, n = %d\n", m, n);

    for(i = 0; i <= 100; ++i)
    {
        m = m + 1;
        n = n + 1;
    }

    printf("End Value, m = %d, n = %d\n", m, n);
}