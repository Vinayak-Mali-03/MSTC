/**
 * @file Printf_Demo.c
 * @author Vinayak Mali
 * @brief To demonstrate the printf function
 * @version 0.1
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

int printf(const char*, ...);
void exit(int);
void test_printf(void);

int num = 145;

int main(void)
{
    printf("Start executing the source code...!");

    printf("The value inside variable num is : %d\n", num);

    test_printf();

    printf("End of the program...!");

    exit(0);
}

void test_printf(void)
{
    /* Signed and Unsigned char */
    char c1 = 'v';
    char c2 = 127;
    unsigned c3 = 255;

    /* Signed and Unsigned short */
    short int s_num = 32767;
    unsigned short int us_num = 65355;

    /* Signed and Unsigned int */
    int i_num = 2147483647;
    unsigned int ui_num = 4294967295;

    /* Signed and Unsigned long */
    long int lng_num = 2147483647;
    unsigned long int ulng_num = 4294967295;

    /* Signed and Unsigned long long */
    long long int lng_lng_num = 9223372036854775807;
    unsigned long long int ulng_lng_num = 18446744073709551615;

    /* float and double */
    float f_num = 3.145f;                 /* 3.4E +/- 38 (7 digits) */
    double d_num =3.14159265359;         /* 1.7E +/- 308 (15 digits) */

    /* Char print */
    printf("Character Datatype\n");
    printf("c1 = %c\n\n", c1);

    /* Signed Integer print */
    printf("Signed Interger in DECIMAL FORMAT\n");
    printf("c2 = %hhd\n", c2);
    printf("s_num = %hd\n", s_num);
    printf("i_num = %d\n", i_num);
    printf("lng_num = %ld\n", lng_num);
    printf("lng_lng_num = %lld\n\n", lng_lng_num);

    /* Unsigned Integer print */
    printf("Unsigned Integer in DECIMAL\n");
    printf("c3 = %hhu\n", c3);
    printf("us_num = %hu\n", us_num);
    printf("ui_num = %u\n", ui_num);
    printf("ulng_num = %lu\n", ulng_num);
    printf("ulng_lng_num = %llu\n\n", ulng_lng_num);

    printf("Unsigned Integer in OCTAL FORMAT\n");
    printf("c3 = %hho\n", c3);
    printf("us_num = %ho\n", us_num);
    printf("ui_num = %o\n", ui_num);
    printf("ulng_num = %lo\n", ulng_num);
    printf("ulng_lng_num = %llo\n\n", ulng_lng_num);

    printf("Unsigned Integer in HEXADECIMAL FORMAT\n");
    printf("c3 = %hhx\n", c3);
    printf("us_num = %hx\n", us_num);
    printf("ui_num = %x\n", ui_num);
    printf("ulng_num = %lx\n", ulng_num);
    printf("ulng_lng_num = %llx\n\n", ulng_lng_num);

    /* Float and Double Datatype */
    printf("Floating Point\n");
    printf("f_num = %f\n", f_num);
    printf("d_num = %lf\n\n", d_num);

    printf("Controlling Precision of floating point\n");
    printf("f_num = %.1f\n", f_num);
    printf("f_num = %.2f\n", f_num);
    printf("f_num = %.3f\n", f_num);
}