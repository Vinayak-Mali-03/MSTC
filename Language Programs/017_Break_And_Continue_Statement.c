/**
 * @file Break_And_Continue_Statement.c
 * @author Vinayak Mali
 * @brief How to use break and continue statement in loops
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_REPETATIONS   10

int main(void)
{
    int i;
    int num;
    
    /* Break Statement */
    i = 0;
    while(i < NUMBER_OF_REPETATIONS)
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        printf("Entered number = %d\n", num);

        if(num % 7 == 0)
        {
            printf("%d is divisible by 7\n", num);
            break;                  /* Control flow goes next instruction of while loop */
        }

        i = i + 1;
    }


    /* Continue Statement */
    for(i = 0; i < NUMBER_OF_REPETATIONS; i++)
    {
        if (i % 2 == 0)
        {
            continue;       /* Continue statement skip the itreation */
        }
        
        printf("%d\n", i);
    }
    exit(0);
}