/**
 * @file 021_To_Check_Your_Machine_Is_Little_Or_Bit_Endian.c
 * @author Vinayak Mali
 * @brief To check endians
 * @version 0.1
 * @date 2023-08-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0x0a0b0c0d;

    if(*(char*)&n == 0xd)
        puts("Machine is little endian");
    else if(*(char*)&n == 0xa)
        puts("Machine is bit endian");
    else 
        puts("Invalid control flow");

    exit(0);  
}