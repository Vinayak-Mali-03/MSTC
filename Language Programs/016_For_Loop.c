/**
 * @file For_Loop.c
 * @author Vinayak Mali
 * @brief Demonstrate the for loop
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int N = 5;

    printf("While loop start here : \n");
    i = 0;          /* Loop variable initialisation */
    while(i < N)    /* i < N : loop variable condition */
    {
        /* BLOCK OF STATEMENT */
        printf("%d\n", i);
        i = i + 1;          /* Loop variable modification */
    }

    printf("For loop start here : \n");  
                                        /* Loop variable initialisation 
                                            loop condition, 
                                            loop variable modification In one statement*/
    for(i = 0; i < N; i = i + 1)
    {
        printf("%d\n", i);
    }

    exit(0);

}