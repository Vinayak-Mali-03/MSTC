/**
 * @file 5_Swap_Numbers.c
 * @author Vinayak Mali
 * @brief Swap two numbers
 * @version 0.1
 * @date 2023-08-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_1(void);
void test_2(void);
void test_3(void);
void swap_1(int num_1, int num_2);
void swap_2(int* p_num_1, int* p_num_2);

int main(void)
{
    test_1();
    test_2();
    test_3();

    return (0);
}

void test_1(void)
{
    int a = 10;
    int b = 20;
    int tmp;

    printf("a = %d, b = %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d, b = %d\n", a, b);

    puts("------End of test_1()--------\n");
}

void test_2(void)
{
    int x = 100;
    int y = 200;

    printf("Before calling swap_1(), x = %d, y = %d\n", x, y);
    swap_1(x, y);
    printf("After calling swap_1(), x = %d, y = %d\n", x, y);

    puts("---------End of test_2()-------\n");
}

void test_3(void)
{
    int u = 1000;
    int v = 2000;

    printf("Before call to swap(), u = %d, v = %d\n", u, v);
    swap_2(&u, &v);
    printf("After call to swap_2(), u = %d, v = %d\n", u, v);

    puts("---------End of test_3()----------\n");
}

void swap_1(int num_1, int num_2)
{
    int tmp;

    tmp = num_1;
    num_1 = num_2;
    num_2 = tmp;
}


void swap_2(int* p_num_1, int* p_num_2)
{
    int tmp;

    tmp = *p_num_1;
    *p_num_1 = *p_num_2;
    *p_num_2 = tmp;
}