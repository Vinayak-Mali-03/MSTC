/**
 * @file 09_String_Substring.c
 * @author Vinayak Mali
 * @brief To check the substirng present
 * @version 0.1
 * @date 2023-08-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef long long int ssize_t;

ssize_t string_len(const char* src);
ssize_t substr_index(const char* traget_str, const char* sub_str);
void test_substr_index(void);

int main(void)
{
    test_substr_index();

    return (0);
}

void test_substr_index(void)
{
    char* target = "aaaaBBBBCCCCDDDDaaBaAaZ";
    char* sub_str_1 = "BCD";
    char* sub_str_2 = "aa";
    char* sub_str_3 = "AaZ";
    char* sub_str_4 = "CCC";
    ssize_t i;

    i = substr_index(target, sub_str_1);
    if(-1 == i)
        printf("%s is not substring of %s\n", sub_str_1, target);
    else 
        printf("%s is substr of %s at index %lld\n", sub_str_1, target, i);

    i = substr_index(target, sub_str_2);
    if(-1 == i)
        printf("%s is not substrsing of %s\n", sub_str_2, target);
    else 
        printf("%s is substr of %s at index %lld\n", sub_str_2, target, i);

    i = substr_index(target, sub_str_3);
    if(-1 == i)
        printf("%s is not substring of %s\n", sub_str_3, target);
    else    
        printf("%s is substr of %s at index %lld\n", sub_str_3, target, i);

    i = substr_index(target, sub_str_4);
    if(-1 == i)
        printf("%s is not substring of %s\n", sub_str_4, target);
    else 
        printf("%s is substr of %s at index %lld\b", sub_str_4, target, i);
}

ssize_t substr_index(const char* target_str, const char* sub_str)
{
    ssize_t i;
    ssize_t k;
    ssize_t len_target_str;
    ssize_t len_sub_str;

    len_target_str = string_len(target_str);
    len_sub_str = string_len(sub_str);

    for(i = 0; i <= len_target_str - len_sub_str; ++i)
    {
        for(k = 0; k < len_sub_str; ++k)
            if(target_str[i + k] != sub_str[k])
                break;

        if(k == len_sub_str)
            return (i);
    }

    return (-1);
}

ssize_t string_len(const char* src)
{
    ssize_t i;
    ssize_t len;

    len = 0;
    i = 0;
    while(src[i] != '\0')
    {
        ++i;
        ++len;
    }

    return (len);
}