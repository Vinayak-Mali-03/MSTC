/**
 * @file 032_String_Creation.c
 * @author Vinayak Mali
 * @brief To demonstrate how string is created
 * @version 0.1
 * @date 2023-08-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char s1[5] = "abcd\0";
char s2[] = "abcd\0";
char* p_str_1 = "abcd";

char s[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

/* Below line is short cut for above line */

char msg[] = "Hello World!";

char* p = "Hello World!";


char hello[] = "Hello World!";

int main(void)
{
    int n = sizeof(hello);
    printf("%d\n\n", n);

    printf("%d\n\n", printf("Hello World!\n"));

    printf("%s", hello);
}