/**
 * @file 022_Offset_Of_Macro.c
 * @author Vinayak Mali
 * @brief To demonstrate the offset of macro
 * @version 0.1
 * @date 2023-08-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef OFFSET_OF
#define OFFSET_OF(type, mem) ((unsigned long long int)(&((type*)0) -> mem))
#endif

struct A
{
    int a;
    char b;
    float c;
};

int main(void)
{
    unsigned long long int off_a, off_b, off_c;

    off_a = OFFSET_OF(struct A, a);
    off_b = OFFSET_OF(struct A, b);
    off_c = OFFSET_OF(struct A, c);

    printf("off_a = %llu, off_b = %llu, off_c = %llu\n", off_a, off_b, off_c);

    return (0);
}