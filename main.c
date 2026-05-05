#include "stdio.h"
/**
a+b-c
b+c-a

1. Algorithms
2. Operations
3. Output
*/
int a;
int b;
int c;

#include <stdio.h>

// 1. Function Prototypes (telling the compiler these exist)
int first_logic(int num1, int num2, int num3);
int second_logic(int num1, int num2, int num3);

int main()
{
    int a, b, c;

    printf("Enter 3 numbers (separated by spaces, e.g., 10 20 5): ");
    
    // Check if user actually entered 3 numbers
    if (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        printf("\n--- Results ---\n");
        printf("You entered: a=%d, b=%d, c=%d\n\n", a, b, c);

        // 2. Operations (Passing variables directly)
        int first_output = first_logic(a, b, c); 
        int second_output = second_logic(a, b, c);
        // 3. Output
        printf("First Logic (a + b - c): %d\n", first_output);
        printf("Second Logic (b + c - a): %d\n", second_output);
    }
    else 
    {
        printf("Error: Please enter valid integers.\n");
    }

    return 0;
}

// Logic implementations
int first_logic(int num1, int num2, int num3)
{
    return num1 + num2 - num3;
}

int second_logic(int num1, int num2, int num3)
{
    return num2 + num3 - num1;
}