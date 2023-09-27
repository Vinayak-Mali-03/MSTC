/**
 * @file Flag_Technique_Client.c
 * @author Vinayak Mali
 * @brief To demonstrate how to use flag technique
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdlib.h>
#include "Flag_Technique.h"

struct Student s;

int main(void)
{
    s.size = sizeof(struct Student);
    s.mask = ST_ALL;
    s.i_roll = 10;
    s.i_attnd = 70;
    s.i_marks = 80;

    set(&s);

    get(&s);

    show(&s);

    return (EXIT_SUCCESS);
}