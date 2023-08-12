/**
 * @file 3_Passing_Variables_By_Reference.c
 * @author Vinayak Mali
 * @brief To pass the variable as reference
 * @version 0.1
 * @date 2023-08-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

void f1(char* p);
void f2(unsigned char* p);

void f3(short* p);
void f4(unsigned short* p);

void f5(int* p);
void f6(unsigned int* p);

void f7(long* p);
void f8(unsigned long* p);

void f9(long long* p);
void f10(unsigned long long* p);

void f11(float* p);
void f12(double* p);

int main(void)
{
    char c = 'A';
    unsigned char uc = 100;

    short sn = -200;
    unsigned short usn = 500;

    int n = -245122;
    unsigned int un = 41541154;

    long lng_n = -2454542;
    unsigned long u_lng_n = 5415484;

    long long lng_lng_n = -564518975;
    unsigned long long u_lng_lng_n = 56654145146;

    float flt_n = -3.1456;
    double db_n = 3.54174514;

    puts("BEFORE CALLS TO FUNCTIONS : ");

    printf("c = %c, uc = %hhu, sn = %hd, usn = %hu, n = %d, un = %u, lng_n = %ld, u_lng_n = %lu\n",
            c, uc, sn, usn, n, lng_n, u_lng_n);

    printf("lng_lng_n = %lld, u_lng_lng_n = %llu, flt_n = %f, db_n = %lf\n", 
        lng_lng_n, u_lng_lng_n, flt_n, db_n);

    f1(&c);
    f2(&uc);
    f3(&sn);
    f4(&usn);
    f5(&n);
    f6(&un);
    f7(&lng_n);
    f8(&u_lng_n);
    f9(&lng_lng_n);
    f10(&u_lng_lng_n);
    f11(&flt_n);
    f12(&db_n);

    puts("AFTER CALLS TO FUNCTIONS : ");

    printf("c = %c, uc = %hhu, sn = %hd, usn = %hu, n = %d, un = %u, lng_n = %ld, u_lng_n = %lu\n",
            c, uc, sn, usn, n, lng_n, u_lng_n);

    printf("lng_lng_n = %lld, u_lng_lng_n = %llu, flt_n = %f, db_n = %lf\n", 
        lng_lng_n, u_lng_lng_n, flt_n, db_n);


    return (0);
}

void f1(char* p)
{
    *p = 'Z';
}

void f2(unsigned char* p)
{
    *p = 250;
}

void f3(short* p)
{
    *p = 1542;
}

void f4(unsigned short* p)
{
    *p = 40254;
}

void f5(int* p)
{
    *p = 351415;
}

void f6(unsigned int* p)
{
    *p = 54541215;
}

void f7(long *p)
{
    *p = 2154511;
}

void f8(unsigned long* p)
{
    *p = 2544545154;
}

void f9(long long* p)
{
    *p = -455541254;
}

void f10(unsigned long long* p)
{
    *p = 354121542154;
}

void f11(float* p)
{
    *p = 3156.62;
}

void f12(double* p)
{
    *p = 122121.52415641;
}