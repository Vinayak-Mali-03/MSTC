/**
 * @file 08_String_Join.c
 * @author Vinayak Mali
 * @brief To join strings
 * @version 0.1
 * @date 2023-08-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef long long int ssize_t;

char* join(char** pp_str, ssize_t N, char* join_str);
void test_join(void);
ssize_t string_len(const char* src);

int main(void)
{
    test_join();

    return (0);
}

void test_join(void)
{
    char* strings[] = {"Welcome", "To", "Assembly", "Programming"};

    char* join_str = "-*-";
    char* result = NULL;

    result = join(strings, 4, join_str);
    printf("result = %s\n", result);

    free(result);
    result = NULL;
}

char* join(char** pp_str, ssize_t N, char* join_str)
{
    char* result = NULL;
    ssize_t len_join_str;
    ssize_t len_curr_str;
    ssize_t len_result_str = 0;
    ssize_t old_len;
    ssize_t i;
    ssize_t k;

    len_join_str = string_len(join_str);
    if(0 == len_join_str)
    {
        puts("Invalid join string");
        exit(EXIT_FAILURE);
    }

    len_result_str = 0;
    for(i = 0; i < N - 1; ++i)
    {
        len_curr_str = string_len(pp_str[i]);
        result = (char*)realloc(
                result, 
                len_result_str + len_curr_str + len_join_str);
        if(NULL == result)
        {
            puts("Failed to resize a string");
            exit(EXIT_FAILURE);
        }
        old_len = len_result_str;
        len_result_str += (len_curr_str + len_join_str);

        for(k = 0; k < len_curr_str; ++k)
            result[old_len + k] = pp_str[i][k];
        for(k = 0; k < len_join_str; ++k)
            result[old_len + len_curr_str + k] = join_str[k];
    }

    len_curr_str = string_len(pp_str[i]);
    result = (char*)realloc(result, len_result_str + len_curr_str + 1);
    if(NULL == result)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }
    old_len = len_result_str;
    len_result_str += (len_curr_str);
    for(k = 0; k < len_curr_str; ++k)
        result[old_len + k] = pp_str[i][k];
    result[old_len + k] = '\0';

    return (result);
}

ssize_t string_len(const char* src)
{
    ssize_t i;
    ssize_t len;

    i = 0;
    len = 0;
    while(src[i] != '\0')
    {
        ++i;
        ++len;
    }

    return (len);
}