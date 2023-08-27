/**
 * @file 041_Enum_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the enum demo
 * @version 0.1
 * @date 2023-08-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

enum BOOL
{
    FALSE = 0,
    TRUE
};

enum COLOR
{
    RED = 100,
    BLACK = 101,
    GREEN = 2004,
    BLUE = 3007
};

int main(void)
{
    enum BOOL status;
    enum COLOR color;

    status = FALSE;
    status = TRUE;

    color = RED;
    color = BLACK;
    color = GREEN;
    color = BLUE;

    return (0);
}