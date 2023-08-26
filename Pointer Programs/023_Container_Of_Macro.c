/**
 * @file 023_Container_Of_Macro.c
 * @author Vinayak Mali
 * @brief To demonstrate the container of macro
 * @version 0.1
 * @date 2023-08-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef OFFSET_OF
#define OFFSET_OF(type, mem)    ((unsigned long long int)(&((type*)0) -> mem))
#endif

#ifndef CONTAINER_OF
#define CONTAINER_OF(addr, type, mem)    ((type*)((unsigned long long int)(addr) - OFFSET_OF(type, mem)))
#endif

void test(float* p);

struct A
{
    int a;
    char b;
    float c;
};

int main(void)
{
    struct A inA_1 = {5, 'X', 3.3f};
    struct A inA_2 = {10, 'Y', 2.2f};
    struct A inA_3 = {15, 'Z', 1.1f};

    test(&inA_1.c);
    test(&inA_2.c);
    test(&inA_3.c);

    return (0);
}

void test(float* p)
{
    struct A* pA = 0;

    pA = CONTAINER_OF(p, struct A, c);

    printf("pA->a = %d, pA->b = %c, pA->c = %.2f\n", pA->a, pA->b, pA->c);
}