#include "stdio.h"
// #include <stdbool.h> // add this if need to use BOOL

void doSomethingUsingWhile()
{
    int a = 5;
    int b = 10;

    while (a == b)
    {
        printf("At point %d the number a is equal to b ", a);
    }

    // print numbders that are smaller than b
    while (a < b)
    {
        printf("Number %d is less than %d\n\t", a, b);
        a = a + 1;
    }
    // while (a > b)
    // {
    //     printf("Number %d is less than %d", a, b);
    // }
}
int main0()
{

    /*
    int a = 5;
    printf("a = %d\n", a++); // wrong
    a = 5;
    printf("a = %d\n", ++a);
    a = 5;
    printf("a = %dv", a--); // wrong
    a = 5;
    printf("a = %d \n\t", --a);

    a = 5;
    printf("a = %d a = %d\n\t", a, ++a, a++);
    a = 5;
    printf("a = %d\n", a++);
    printf("a = %d\n", ++a);
    */

    doSomethingUsingWhile();
    return 0;
}

void runVotingSystem()
{

    char party;
    printf("\n Please proceed with voting by selecting the parties. \n\t A \n\t B \n\t C \n\t D \n\t");
    scanf("%c", &party);
    int a_vote, b_vote, c_vote, d_vote = 0;
    const int total_population = 10;
    for (int i = 0; i <= total_population; i++)
    {
        // printf("duck duck ");
        scanf("%c", &party);
        printf("Entered Symbol\n");

        switch (party)
        {
        case 'A' || 'a':
            a_vote++;
            break;
        case 'B':
            b_vote++;
            break;
        case 'C':
            c_vote++;
            break;
        case 'D':
            d_vote++;
            break;
        default:
            break;
        } // end swich
    } // end for

    // check for the highest and print
    if (a_vote > b_vote && a_vote > c_vote && a_vote > d_vote)
        printf("Party 'A' is leading the votes with %d", a_vote);
    else if (b_vote > a_vote && b_vote > c_vote && b_vote > d_vote)
        printf("Party 'B' is leading the votes with %d", a_vote);
    else if (c_vote > a_vote && c_vote > b_vote && c_vote > d_vote)
        printf("Party 'C' is leading the votes with %d", a_vote);
    else
        printf("Party 'D' is leading the votes with %d", a_vote);
}





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
int main()
{
    doUsingDecrement();
    // int i = 1, sum = 0;
    // while (i <= 50)
    // {
    //     // if (i % 2 == 0)
    //     // {
    //     //     printf("When I = %d \t & Sum = %d \n", i, sum);
    //     //     sum = sum +i;
    //     // }
        
    //     sum = sum + i;
    //     i ++;
    //     printf("When I = %d \t & Sum = %d \n", i, sum);
    // }
}

// int maintest()
// {
//     int i = 1, sum = 0;
//     while (i <= 100)
//     {
//         sum = sum + i;
//         printf("sum = %d & i = %d \n", sum, i++);
//     }
// }

int main1()
{
    int i = 100, sum = 0;
    while (i >= 1)
    {
        sum = sum + i;
        printf("sum = %d \t & i = %d", sum, i--);
    }
}

int main3()
{
    int i = 100, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        printf("sum = %d \t & i = %d", sum, i = i + 5);
    }
}

int main4()
{
    int i = 100, sum = 0;
    while (i >= 1)
    {
        sum = sum + i;
        printf("sum = %d \t & i = %d", sum, i = i - 5);
    }
}