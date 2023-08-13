/**
 * @file 025_All_Types_Of_Structure_Members.c
 * @author Vinayak Mali
 * @brief To create all types of structure members
 * @version 0.1
 * @date 2023-08-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct B
{
    char c;
    double y;
};

struct A
{
    int num;            /* Built in data type member */
    float f_arr[5];     /* Array */
    struct B inB;       /* Nested structure */
};

int main(void)
{
    struct A inA;   /* Allocate sizeof(struct A) worth bytes 
                        and name first byte as inA */

    int i;

    /* Write on every member of inA */
    inA.num = 100;

    for(i = 0; i < 5; ++i)
        inA.f_arr[i] = (i * 10) / 3.0;

    inA.inB.c = 'A';
    inA.inB.y = 2454.5451;

    /* Display inA */
    printf("inA.num = %d\n", inA.num);

    for(i = 0; i < 5; ++i)
        printf("inA.f_arr[%d] : %f\n", i, inA.f_arr[i]);

    printf("inA.inB.c = %c, inA.inB.y = %lf\n", inA.inB.c, inA.inB.y);

}