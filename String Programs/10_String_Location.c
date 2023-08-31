/**
 * @file 10_String_Location.c
 * @author Vinayak Mali
 * @brief To demonstrate string location 
 * @version 0.1
 * @date 2023-08-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char* str1 = "Hello"; // This string goes in to rodata section

  char str_arr = {'H', 'e', 'l', 'l', 'o', '\0'}; // This char array goes in to stack section 

  return (0);
}
