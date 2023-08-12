/**
 * @file 7_Pointer_To_Array.c
 * @author Vinayak Mali
 * @brief To demonstrate pointer to array
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {100, 200, 300, 400, 500};
    int i, n;
    int (*p_arr)[5];

    puts("Print array using its name");
    for(i = 0; i < 5; ++i)
        printf("A[%d] : %d\n", i, A[i]);

    puts("Print array using its pointer");
    p_arr = &A;
    for(i = 0; i < 5; ++i)
    {
        n = (*p_arr)[i];
        printf("n = %d\n", n);
    }

    return (0);
}