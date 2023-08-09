/**
 * @file Flag_Technique.c
 * @author Vinayak Mali
 * @brief How to use flag technique
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_REPETATIONS   10

#define TRUE    1
#define FALSE   0

int main(void)
{
    int i;
    int num;
    int flag = FALSE;

    i = 0;
    while(i < NUMBER_OF_REPETATIONS)
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        printf("Entered number : %d\n", num);

        if(num % 7 == 0)
        {
            flag = TRUE;
            break;
        }

        i = i + 1;
    }

    if(flag == FALSE)
    {
        puts("Total repetitions complete");
    }
    else if(flag == TRUE)
    {
        puts("Prematurely BROKE out of the loop");
    }

    puts("Exit");

    return (0);
}