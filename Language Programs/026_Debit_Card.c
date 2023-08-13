/**
 * @file 26_Debit_Card.c
 * @author Vinayak Mali
 * @brief To create a real life entity using structure
 * @version 0.1
 * @date 2023-08-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HOLDER_NAME_CHARS   128
#define MAX_VENDOR_NAME_CHARS   64

struct Date
{
    unsigned char day, month;
    int year;
};

struct DebitCard
{
    char holder_name[MAX_HOLDER_NAME_CHARS];
    unsigned long long card_number;
    unsigned short card_cvv;
    struct Date card_valid_through_date;
    struct Date card_expirey_date;
    char card_vendor[MAX_VENDOR_NAME_CHARS];
};

int main(void)
{
    struct DebitCard my_debit_card;
    unsigned long long name_length;

    name_length = strlen("Vinayak Mali");
    strncpy(my_debit_card.holder_name, "Vinayak Mali", name_length + 1);

    strncpy(my_debit_card.card_vendor, "MasterCard", strlen("MasterCard") + 1);

    my_debit_card.card_number = 12345678910;
    my_debit_card.card_cvv = 309;
    my_debit_card.card_valid_through_date.day = 8;
    my_debit_card.card_valid_through_date.month = 11;
    my_debit_card.card_valid_through_date.year = 2025;
    my_debit_card.card_expirey_date.day = 8;
    my_debit_card.card_expirey_date.month = 11;
    my_debit_card.card_expirey_date.year = 2035;

    printf("Card Name : %s\n", my_debit_card.holder_name);
    printf("Card_Number : %llu\n", my_debit_card.card_number);
    printf("Card CVV : %hu\n", my_debit_card.card_cvv);
    printf("Valid Through Date : %hhu/%hhu%d\n", 
            my_debit_card.card_valid_through_date.day,
            my_debit_card.card_valid_through_date.month,
            my_debit_card.card_valid_through_date.year);
    printf("Expirey Date : %hhu/%hhu/%d\n",
            my_debit_card.card_expirey_date.day,
            my_debit_card.card_expirey_date.month,
            my_debit_card.card_expirey_date.year);
    printf("Card Vendor : %s\n", my_debit_card.card_vendor);

    return (0);
}