

#include "stdio.h"

void display(void);

void display()
{
    printf("Hello World! We are trying to find sum of two numbers");
    printf("\n");
    // return;
}


// function declaration
int calculateSum(int a, int b);
int calculateDifference(int a, int b);

void display_again(void)
{
    printf("Hello World Again! We trying to get the difference");
    printf("\n");

    // return;
}

void main()
{
    // define variables to store values
    int x, y, z = 0;
    display();
    printf("Enter numbers for sum-\n ");
    scanf("%d %d", &x, &y);
    z = calculateSum(x, y); // execution / function call
    printf("Sum is %d :", z);
    printf("\n");

    display_again();
    printf("Enter numbers for difference- ");
    scanf("%d %d", &x, &y);
    z = calculateDifference(x, y); // execution / function call
    printf("Difference is %d :", z);

    // return 0;
}


// function definition
int calculateDifference(int a, int b)
{
    if (a > b)
    {
        /* code */
        return a - b;
    }
    else
    {
        return b - a;
    }
}

// function definition
int calculateSum(int a, int b) { return a + b; }