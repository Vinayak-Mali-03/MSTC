/**
 * @file 040_Switch_Case_Demo.c
 * @author Vinaayk Mali
 * @brief To demonstarate the switch case statement
 * @version 0.1
 * @date 2023-08-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    
    printf("Enter n[1 - 5] : ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            puts("Entered 1");
            break;
        
        case 2:
            puts("Entered 2");
            break;

        case 3:
            puts("Entered 3");
            break;

        case 4:
            puts("Entered 4");
            break;
        
        case 5:
            puts("Entered 5");
            break;
        
        default:
            puts("n is out of range. Range[1 - 5]");
    }

    return (EXIT_SUCCESS);
}