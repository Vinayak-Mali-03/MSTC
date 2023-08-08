/**
 * @file While_Loop.c
 * @author Vinayak Mali
 * @brief To Demonstrate the while loop
 * @version 0.1
 * @date 2023-08-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 10;
    int i;

    printf("While loop start's here\n");
    i = 0;
    while(i <= 10)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    
    printf("Do while loop start's here\n");
    i = 15;
    do{
        printf("%d\n", i);
        i = i + i;
    }while(i < 10);

    exit(0);
}


/*
    While loop is entry controlled loop and Do while is exit controlled loop.
    The loop condition is checked at start of the while loop and at the end of do while loop.
    If the condition is wrong the while loop is not executed but the do while loop is executed at least one time even the condition is wrong.
*/
