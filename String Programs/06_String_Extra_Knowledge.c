/**
 * @file 06_String_Extra_Knowledge.c
 * @author Vinayak Mali
 * @brief String extra knowledge
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */


/*
    Note : Run above code on linux platform.
*/
#include <stdio.h>
#include <stdlib.h>

char* s1 = "Hello";
char s2[] = "Hello";

int main(void)
{
    printf("Before assignment, s1 = %s, s2 = %s\n", s1, s2);
    s1[0] = 'V';
    s2[0] = 'V';
    printf("After assignment, s1 = %s, s2 = %s\n", s1, s2);

    return (0);
}