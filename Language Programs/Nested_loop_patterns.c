/**
 * @file Nested_loop_patterns.c
 * @author Vinayak Mali
 * @brief To use of nested loop patterns
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define N 8

void nested_loop_pattern_using_while(void);
void nested_loop_pattern_using_for(void);

int main(void)
{
    nested_loop_pattern_using_while();
    nested_loop_pattern_using_for();
    return (EXIT_SUCCESS);
}

void nested_loop_pattern_using_while(void)
{
    int i, j;

    puts("While Pattern 1");
    i = 0;
    while(i < N)
    {
        j = i;
        while(j < N)
        {
            printf("(%d, %d)\n", i, j);
            j = j + 1;
        }
        i = i + 1;
    }

    puts("While Pattern 2");
    i = 0;
    while(i < N)
    {
        j = i + 1;
        while(j < N)
        {
            printf("(%d, %d)\n", i, j);
            j = j + 1;
        }
        i = i + 1;
    }

    puts("While Pattern 3");
    i = 0;
    while(i < N)
    {
        j = 0;
        while(j < i)
        {
            printf("(%d, %d)\n", i, j);
            j = j + 1;
        }
        i = i + 1;
    }

    puts("While Pattern 4");
    i = 0;
    while(i < N)
    {
        j = 0;
        while(j <= i)
        {
            printf("(%d, %d)\n", i, j);
            j = j + 1;
        }
        i = i + 1;
    }

    puts("While Pattern 5");
    i = 0;
    while(i < N)
    {
        j = 0;
        while(j < N)
        {
            if(i != j)
                printf("(%d, %d)\n", i, j);
            j = j + 1;
        }
        i = i + 1;
    }
}


void nested_loop_pattern_using_for(void)
{
    int i, j;
    
    puts("For Pattern 1");
    for(i = 0; i < N; ++i)
        for(j = i; j < N; ++j)
            printf("(%d, %d)\n", i, j);

    puts("For Pattern 2");
    for(i = 0; i < N; ++i)
        for(j = i + 1; j < N; ++j)
            printf("(%d, %d)\n", i, j);

    puts("For Pattern 3");
    for(i = 0; i < N; ++i)
        for(j = 0; j < i; ++j)
            printf("(%d, %d)\n", i, j);
        
    puts("For Pattern 4");
    for(i = 0; i < N; ++i)
        for(j = 0; j <= i; ++j)
            printf("(%d, %d)\n", i, j);

    puts("For Pattern 5");
    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            if(i != j)
                printf("(%d, %d)\n", i, j);
}