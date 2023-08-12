/**
 * @file 15_Nested_Structure_Pointer_And_Dot_Operator.c
 * @author Vinayak Mali
 * @brief Use pointer in nested structure with dot operator
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void show_struct_B_member(double x, double y);

struct B
{
    double x;
    double y;
};

struct A
{
    int num;
    struct B* pB;
    float fnum;
};

int main(void)
{
    struct B inB;
    struct A inA;

    inA.pB = &inB;

    struct A* pA = &inA;

    (*(*pA).pB).x = 20.4545;
    (*(*pA).pB).y = 3.14524;

    puts("Using nested structure pointer : ");
    show_struct_B_member((*(*pA).pB).x, (*(*pA).pB).y);

    (*pA).num;
    (*pA).fnum;
    (*pA).pB;

    struct B* p = &inB;
    (*p).x = 20.4554;
    (*p).y = 255.545;

    return (0);
}

void show_struct_B_member(double x, double y)
{
    printf("x = %f, y = %f\n", x, y);
}