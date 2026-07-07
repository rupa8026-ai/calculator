

/**
 *  Strings in C are an array of characters terminated with a null charatcer '\0'
 * Use %s specifier to handle strings
 * char string_1 = "Hello";
 * char string_2 = "Hello";
 * char string_3[6]= "123456";
 *  */

#include "stdio.h"

void main()
{
    char array_1[50],  array_1[2];
    printf("Now enter another string less than 5");
    printf(" Characters with spaces: \n");
    gets(array_1);
    printf("\t You've entered: ");
    puts(array_1);
}