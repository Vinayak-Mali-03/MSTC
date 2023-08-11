/**
 * @file 2_Pointer_Demo.c
 * @author Vinayak Mali
 * @brief Craete all builtin data type pointer
 * @version 0.1
 * @date 2023-08-10 
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char c;
unsigned char u_c;

short s;
unsigned u_s;

int i;
unsigned int u_i;

long lng;
unsigned long u_lng;

long long int lng_lng;
unsigned long long u_lng_lng;

float f;
double d;
long double l_d;

//----------------------------------------------------------------------

char* p_c;
unsigned char* p_u_c;

short* p_s;
unsigned short* p_u_s;

int* p_i;
unsigned int* p_u_i;

long* p_lng;
unsigned long* p_u_lng;

long long* p_lng_lng;
unsigned long long* p_u_lng_lng;

float* p_f;
double* p_d;
long double* p_l_d;

int main(void)
{
    p_c = &c;
    p_u_c = &u_c;

    p_s = &s;
    p_u_s = &u_s;

    p_i = &i;
    p_u_i = &u_i;

    p_lng = &lng;
    p_u_lng = &u_lng;

    p_lng_lng = &lng_lng;
    p_u_lng_lng = &u_lng_lng;

    p_f = &f;
    p_d = &d;
    p_l_d = &l_d;

    return (0);
}

