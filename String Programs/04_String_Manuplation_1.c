/**
 * @file 04_String_Manuplation.c
 * @author Vinayak Mali
 * @brief Manuplation of string using pointer
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void test_1(void);
void test_2(void);

int main(void)
{
    test_1();
    test_2();

    return (0);
}

void test_1(void)
{
    char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i;

    for(i = 0; i < 5; ++i)
        printf("aj[%d] : %c\n", i, a[i]);


    char* pa = a;
    for(i = 0; i < 5; ++i)
        printf("pa[%d] : %c\n", i, pa[i]);
}

void test_2(void)
{
    int i;
    char** pp_str = NULL;

    char* pchar_arr[6] = {"abc", "defghi", "jklmn", "op", "qrstu", "vwxyz"};

    for(i = 0; i < 6; ++i)
        printf("pchar_arr[%d] : %s\n", i, pchar_arr[i]);

    
    pp_str = pchar_arr;
    for(i = 0; i < 6; ++i)
        printf("pp_str[%d] : %s\n", i, pp_str[i]);
    
}