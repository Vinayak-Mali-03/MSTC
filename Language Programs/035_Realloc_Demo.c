/**
 * @file 035_Realloc_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the realloc() function
 * @version 0.1
 * @date 2023-08-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int choice;
    int* arr = NULL;
    int N = 0;
    int i;

    while(1)
    {
        printf("Do you want to enter an integer ?, [1] : Yes, [0] : No  :  ");
        scanf("%d", &choice);

        if(choice != 1)
            break;

        printf("Enter the value : ");
        scanf("%d", &num);

        N = N + 1;
        arr = (int*)realloc(arr, N * sizeof(int));
        if(NULL == arr)
        {
            puts("Error in allocating memory");
            exit(EXIT_FAILURE);
        }

        arr[N - 1] = num;
    }

    puts("Done with loop!");

    for(i = 0; i < N; i++)
        printf("arr[%d] : %d\n", i, arr[i]);

    free(arr);
    arr = NULL;
    N = 0;

    return (EXIT_SUCCESS);
}