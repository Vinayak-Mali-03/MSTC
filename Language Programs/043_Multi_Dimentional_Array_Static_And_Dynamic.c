/**
 * @file 043_Multi_Dimentional_Array_Static_And_Dynamic.c
 * @author Vinayak Mali
 * @brief To demonstrate the multi dimentional array static and dynamic
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdlib.h>
#include <stdlib.h>

void mult_arr_using_dds(void);
void mult_arr_using_dyn_mem_function(void);

int main(void)
{
    mult_arr_using_dds();
    mult_arr_using_dyn_mem_function();

    exit(EXIT_SUCCESS);
}

void mult_arr_using_dds(void)
{
    int a[5][3];
    int i, j;

    puts("Multi Dimensional array using DDS - START");

    for(i = 0; i < 5; ++i)
        for(j = 0; j < 3; ++j)
            a[i][j] = i + j;

    for(i = 0; i < 5; ++i)
        for(j = 0; j < 3; ++j)
            printf("a[%d][%d] : %d\n", i, j, a[i][j]);

    puts("Multi Dimensional array using DDS - END");
}

void mult_arr_using_dyn_mem_function(void)
{
    int* p = NULL;
    int i, j;

    p = (int*)malloc(5 * 3 * sizeof(int));
    if(NULL == p)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < 5; ++i)
        for(j = 0; j < 3; ++j)
            *(p + i * 3 + j) = i + j;

    for(i = 0; i < 5; ++i)
        for(j = 0; j < 3; ++j)
            printf("*(p + %d * 3 + %d) = %d\n", i, j, *(p + i * 3 + j));

    free(p);
    p = NULL;
}