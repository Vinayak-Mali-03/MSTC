/**
 * @file 14_Pointer_To_Struct_And_Arrow_Operator.c
 * @author Vinayak Mali
 * @brief To demonstrate the arrow operator
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float f;
};

int main(void)
{
    struct A* pA;
    struct A inA;

    pA = &inA;

    pA->a = 500;  /* (*pA).a = 500*/
    pA->b = 'A';  /* (*pA).b = 'A */
    pA->f = 3.14; /* (*pA).f = 3.14 */

    printf("pA->a = %d, pA->b = %c, pA->f = %.2f\n", pA->a, pA->b, pA->f);

    return (0);
}

/*
    -> == (*).
*/