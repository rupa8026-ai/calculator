

#include "stdio.h"

void printNumbers()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
        i++;
    }
}

int main()
{

    printf("Enter numbers between:\n");
    // printNumbers();
    printf("ENter number ---\n");
    int input = 0;
    scanf("%d", &input);
    // calculateFactorial();

    printEvenNumbers(input);
}

// calculate 5 factorial

void calculateFactorial(int number)
{ // 5
    // int i=number;
    int factorial = 0;
    for (int i = 1; i < number; i++)
    {
        printf("the i is %d", i);
        i++;
        factorial = (number - i); // 5 4,
    }
    printf(" print factorial : %d\n ", factorial);
}

void printEvenNumbers(int number)
{

    // for  all number from  1 - 100, print all even numbers
    int range = number;

    for (int i = 1; i <= number; i++)
    {
        printf("\n here i is %d ", i);
        // check for odd even
        if (i % 2 == 0)
        {
            printf("\n %d is Even Number", i);
            if (i == 50)
            {
                printf("Number %d exists as Even Number..");
                continue;
            }
        }
    }
}