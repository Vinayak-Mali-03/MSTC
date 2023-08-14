/**
 * @file 019_Pointer_To_Pointer.c
 * @author Vinayak Mali
 * @brief To demonstrate pointer to pointer
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 100;
    int m = 200;

    int* p1 = 0;
    int* p2 = 0;

    int** pp = 0;

    p1 = &n;
    p2 = &m;

    pp = &p1;

    printf("Before **pp = -100, n = %d\n", n);
    **pp = -100;
    printf("After **pp = -100, n = %d\n", n);

    printf("Before *pp = &m, pp = %p, *p1 = %d\n", pp, *p1);
    *pp = &m;
    printf("After, *pp = &m, pp = %p, *p1 = %d\n", pp, *p1);

    return (0);
}