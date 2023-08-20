/**
 * @file 05_String_Manuplation_2.c
 * @author Vinayak Mali
 * @brief Manuplate the string array
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void caller_1(void);
char* callee_1(int* pN);

void caller_2(void);
char** callee_2(int* pN);

void caller_3(void);
void callee_3(char*** ppp_str, int* pN);

void copy_string(char* dest, const char* src);

int main(void)
{
    caller_1();
    caller_2();
    caller_3();

    return (0);
}

void caller_1(void)
{
    char* p_string = NULL;
    int str_len = 0;
    int i;

    p_string = callee_1(&str_len);
    puts("In Caller_1() : ");

    for(i = 0; i < str_len; ++i)
        printf("p_string[%d] : %c\n", i, p_string[i]);

    free(p_string);
    p_string = NULL;
}

char* callee_1(int* pN)
{
    int N = 5;
    char* p_str = NULL;
    p_str = (char*)malloc(N + 1);
    if(NULL == p_str)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    p_str[0] = 'H';
    p_str[1] = 'e';
    p_str[2] = 'l';
    p_str[3] = 'l';
    p_str[4] = 'o';
    p_str[5] = '\0';

    *pN = 5;
    return (p_str);
}

void caller_2(void)
{
    char** pp_str_of_caller = NULL;
    int N = -1;
    int i;

    pp_str_of_caller = callee_2(&N);
    puts("In Caller_2() : ");

    for(i = 0; i < N; ++i)
        printf("pp_str_of_caller[%d] : %s\n", i, pp_str_of_caller[i]);

    for(i = 0; i < N; ++i)
        free(pp_str_of_caller[i]);
    
    free(pp_str_of_caller);
    pp_str_of_caller = NULL;
}

char** callee_2(int* pN)
{
    char** pp_str = NULL;
    int i;
    int sizes[5] = {4, 6, 3, 6, 4};

    pp_str = (char**)malloc(5 * sizeof(char*));
    if(NULL == pp_str)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < 5; ++i)
    {
        pp_str[i] = (char*)malloc(sizeof(char) * sizes[i]);
        if(NULL == pp_str[i])
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    copy_string(pp_str[0], "abc");
    copy_string(pp_str[1], "pqrst");
    copy_string(pp_str[2], "im");
    copy_string(pp_str[3], "uvwsz");
    copy_string(pp_str[4], "xyz");

    *pN = 5;
    return (pp_str);
}

void caller_3(void)
{
    char** pp_str_of_caller = NULL;
    int N = -1;
    int i;

    callee_3(&pp_str_of_caller, &N);
    puts("In Calller_3()");

    for(i = 0; i < N; ++i)
        printf("pp_str_of_caller[%d] : %s\n", i, pp_str_of_caller[i]);

    for(i = 0; i < N; ++i)
        free(pp_str_of_caller[i]);

    free(pp_str_of_caller);
    pp_str_of_caller = NULL;
}

void callee_3(char*** ppp_str, int* pN)
{
    char** pp_str = NULL;
    int i;
    int sizes[5] = {4, 6, 3, 6, 4};

    pp_str = (char**)malloc(sizeof(char*) * 5);
    if(NULL == pp_str)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }    

    for(i = 0; i < 5; ++i)
    {
        pp_str[i] = (char*)malloc(sizeof(char) * sizes[i]);
        if(NULL == pp_str[i])
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }
    }

    copy_string(pp_str[0], "abc");
    copy_string(pp_str[1], "pqrst");
    copy_string(pp_str[2], "im");
    copy_string(pp_str[3], "uvwsz");
    copy_string(pp_str[4], "xyz");

    *pN = 5;
    *ppp_str = pp_str;
}

void copy_string(char* dest, const char* src)
{
    int i;

    for(i = 0; src[i] != '\0'; ++i)
        dest[i] = src[i];

    dest[i] = src[i];
}