/**
 * @file Infinite_For_And_While_Loop.c
 * @author Vinayak Mali
 * @brief How goes for and while loop in infinite state
 * @version 0.1
 * @date 2023-08-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */


int main(void)
{
    int N = 5;
    int i;

    /* While Loop */
    i = 0;
    while(i < N)
    {
        printf("%d\n", i);
        i++;                /* If this line is missing then while loop goes 
                                into infinite loop the condition is always be true*/
    }    

    while(1)
    {
        printf("While : Forever...\n");
    }
    /* Control flow will never reac here! */


    for(;;) /* Condition of for loop is true all the time */
    { 
        printf("FOR : Forever...\n");
    }

    printf("We are never ever ever coming here!\n"); /* Control flow will never reach here */
}