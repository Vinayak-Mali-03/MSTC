/**
 * @file Blocking_Function.c
 * @author Vinayak Mali
 * @brief To demonstrate the blocking function
 * @version 0.1
 * @date 2023-08-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    stdio -> standard input output

    stdlib -> standard library functons

    conio -> console input / output function
*/

int main(void)
{
    char c;

    printf("Start of program\n");

    c = _getch();
    printf("c = %c\n", c);

    printf("End of program\n");

    exit(0);
}