#include "stdio.h"
#include <stdbool.h> // add this if need to use BOOL

/************************************************************************************************* */

// Design basic calculator- using operators
// take operator
// take input
// based on operator, run the logic

char identifyOperandFromChar(char op_character)
{
    if (op_character == 'A')
    {
        return '+';
    }
}

void calculator_using_if_else()
{
    // define
    char operator;
    float n1, n2, n3 = 0;

    printf("Enter the operand '+ , -, * , /' /n or 'A, S, M, D' ");
    scanf("%c", &operator);

    char operand;

    printf("Enter the numbers seperated by spaces");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
};

/************************************************************************************************* */

int doUsingDecrement()
{

    int start = 20, num = 0;

    while (start <= 20)
    {

        if (num % 5 == 0)
        {
            printf("The number %d is divisible by 5. The sum is %d ", start, num);
            start --;
        }

    }
}