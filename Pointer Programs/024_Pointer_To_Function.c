/**
 * @file 024_Pointer_To_Function.c
 * @author Vinayak Mali
 * @brief To demonstrate the pointer to function
 * @version 0.1
 * @date 2023-08-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);

int main(void)
{
    int(*pfn)(int, int);
    int ret;

    pfn = add;
    ret = pfn(100, 200);
    printf("ret = %d\n", ret);

    pfn = sub;
    ret = pfn(200, 100);
    printf("ret = %d\n", ret);

    return (0);
}

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}