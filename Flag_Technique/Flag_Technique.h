#ifndef _FLAG_TECHNIQUE
#define _FLAG_TECHNIQUE

#include <stdio.h>

#define OFFSET_OF(T, x) ((unsigned long long int) (&((T*)0)->x))

#define ST_ROLL     1
#define ST_ATTND    2
#define ST_MARKS    4
#define ST_ALL      8

struct Student
{
    size_t size;
    unsigned int mask;
    int i_roll;
    int i_attnd;
    int i_marks;
};

void get(struct Student* p_student);
void set(struct Student* p_student);
void show(struct Student* p_student);

#endif  /* _FLAG_TECHNIQUE */