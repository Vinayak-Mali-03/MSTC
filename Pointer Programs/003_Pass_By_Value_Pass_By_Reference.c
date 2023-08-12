/**
 * @file 3_Pass_By_Value_Pass_By_Reference.c
 * @author Vinayak Mali
 * @brief To show how pass by value and pass by reference works
 * @version 0.1
 * @date 2023-08-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_1(int m);
void test_2(int* p);

int main(void)
{
    int n;
    n = 100;

    printf("main() : Value(n) = %d, ADDRESS_OF_n = %p\n", n, &n);

    printf("main() : Before call to test_1(), n = %d\n", n);
    test_1(n);      /* Pass By Value */
    printf("main() : After call to test_1(), n = %d\n", n);

    printf("main(), Before call to test_2(), n = %d, ADDRESS_OF_n = %p\n", n, &n);
    test_2(&n);     /* Pass By Reference */
    printf("main(), After call to test_2(), n = %d\n", n);

    return (0);
}

void test_1(int m)
{
    printf("test_1(), Value(m) = %d, ADDRESS_OF_m = %p\n", m, &m);
    m = 500;
    printf("test_1(), While returning m = %d\n", m); 
}

void test_2(int* p)
{
    printf("test_2(), ADDRESS IN p = %p\n", p);

    *p = 1000;
}