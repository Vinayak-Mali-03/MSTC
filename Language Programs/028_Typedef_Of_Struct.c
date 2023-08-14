# include <stdio.h>

typedef int day_t;
typedef int month_t;
typedef int year_t;

typedef struct Date Date_t;
struct Date
{
    day_t day;
    month_t month;
    year_t year;
};

//------------------------------------------------------------

typedef int day_t;
typedef int month_t;
typedef int year_t;

struct Date
{
    day_t day;
    month_t month;
    year_t year;
};
typedef struct Date Date_t;

//------------------------------------------------------------

typedef int day_t;
typedef int month_t;
typedef int year_t;

typedef struct Date
{
    day_t day;
    month_t month;
    year_t year;
}Date_t;

//------------------------------------------------------------

typedef int day_t;
typedef int month_t;
typedef int year_t;

typedef struct Date {day_t day; month_t month; year_t year;} Date_t;

//------------------------------------------------------------

typedef int* PINT;

int main(void)
{
    int* p1;
    PINT P2;
}

//------------------------------------------------------------

typedef struct Date DATE;
typedef struct Date* PDATE;

void Test(void)
{
    DATE my_exam_date;
    PDATE x;

    x = &my_exam_date;

    my_exam_date.day;
    x->day;

    my_exam_date.month;
    x->month;

    my_exam_date.year;
    x->year;
}

//------------------------------------------------------------

// OPTIMIZED WAY

typedef struct Date
{
    day_t day;
    month_t month;
    year_t year;
}DATE, *PDATE;

//------------------------------------------------------------

struct Date
{
    day_t day;
    month_t month;
    year_t year;
};

typedef struct Date DATE;

typedef struct Date* PDATE;

//------------------------------------------------------------