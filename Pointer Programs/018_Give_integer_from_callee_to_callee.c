/**
 * @file 018_Give_integer_from_callee_to_callee.c
 * @author Vinayak Mali
 * @brief Exchange integer using double pointer
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int get_integer_1(void);
int* get_integer_2(int init_value);
void get_integer_3(int** pp);

int main(void)
{
    int var;
    int* m = 0;
    int n = 1000;
    int* k = 0;

    var = get_integer_1();
    puts("get_integer_1() demo : ");
    printf("var = %d\n", var);

    puts("---------------------------------------------");

    m = get_integer_2(n);
    printf("m = %p\n", m);
    printf("m = %d\n", *m);
    free(m);
    m = 0;

    puts("---------------------------------------------");

    printf("Pointer k before call = %p\n", k);
    get_integer_3(&k);
    printf("Pointer k after call = %p\n", k);
    *k = 100;
    free(k);
    k = 0;

    return (0);
}

int get_integer_1(void)
{
    return (500);
}

int* get_integer_2(int init_value)
{
    int* p = 0;

    p = (int*)malloc(sizeof(int));
    if(p == 0)
    {
        puts("Error in allocating memory");
        exit(-1);
    }

    *p = init_value;
    printf("p = %p\n", p);

    return (p);
}

void get_integer_3(int** pp)
{
    int* p = 0;

    p = (int*)malloc(sizeof(int));
    if(p == 0)
    {
        puts("Error in allocating memory");
        exit(-1);
    }

    printf("p = %p\n", p);
    *pp = p;
}