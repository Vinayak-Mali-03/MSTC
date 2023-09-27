/**
 * @file 033_One_Array_Different_Data_Type_Elements.c
 * @author Vinayak Mali
 * @brief To store different type of data element in one array
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void* arr[3];
    int i;

    arr[0] = malloc(sizeof(int));
    if(NULL == arr[0])
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }   

    *((int*)arr[0]) = 500;

    arr[1] = malloc(sizeof(char));
    if(NULL == arr[1])
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    *((char*)arr[1]) = 'A';

    arr[2] = malloc(12);
    if(NULL == arr[2])
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    sprintf((char*)arr[2], "%s", "Hello World");

    printf("arr[0] = %d\n", *((int*)arr[0]));
    printf("arr[1] = %c\n", *((char*)arr[1]));
    printf("arr[2] = %s\n", (char*)arr[2]);

    printf("%llu", sizeof(arr));

    for(i = 0; i < 3; ++i)
        free(arr[i]);

    return (EXIT_SUCCESS);
}