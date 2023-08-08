/**
 * @file Increment_Decrement_Operators.c
 * @author Vinayak Mali
 * @brief To show how the incerment and decrement operators works
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

    printf("Original value, num = %d\n", num);
    num = num + 1;
    printf("After adding 1 to num, num = %d\n", num);
    num = num - 1;
    printf("After subtracting 1 from num, num = %d\n", num);

    ++num;  /* ++ -> PRE-INCREMENT */
    printf("Value of num after ++num, num = %d\n", num);

    num++;  /* ++ -> POST-INCREMENT */
    printf("Value of num after num++, num = %d\n", num);

    --num;  /* -- -> PRE-DECREMENT */
    printf("Vlaue of num after --num, num = %d\n", num);

    num--;  /* -- -> POST-DECREMENT */
    printf("Value of num after num--, num = %d\n", num);

    return (0);
}