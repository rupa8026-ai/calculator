

#include "stdio.h"

/**
 * Write a program to print the table
 * 1 2 3 4 5 6 7 8 9 10
 * 2 4 6 8 10 12 14 16 18 20
 * 3 6 9 12 15 18 21 24 27 30
 * 4 8 12 16 20 24 28 32 36 40
 * 5
 * 6
 * 7
 * 8
 * 9
 * 10
 */

void multiply()
{

    int row = 5;

    for (int i = 1; i <= row; i++)
    {
        printf("----------------------------------------------\n");

        printf("%d | ", i);
        // printf("Outer : %d \n", i);
        // int col = row;
        for (int j = 1; j <= row; j++)
        {
            int multiplication = j * i;
            // if the number is 2 digit char add space
            if (multiplication >= 10)
            {
                printf("%d | ", multiplication);
            }
            else
                printf("%d   | ", multiplication);

            // printf("%d |", j);
            // printf("\n__");
            // printf("\tInner Loop Index is : %d \n", j);
            // j++;
            // printf("\t%d \n", j);
        }
        printf("\n");
    }
}



void fractal()
{

    int A, B, i;
    double a, b, x, y, t, n = 20;
    printf("Mandelbrot's Fractals \n");

    for (B = 0; B < 4 * n; B++)
    {
        b = 2 - (B / n);

        for (A = 0; A < 4 * n; A++)
        {
            a = 2 + (B / n);
            x = 0;
            y = 0;
            for (i = 1; i < 10000; i++)
            {
                t = x;
                x = (x * x) - (y * y) + a; // a^2 + b^2 + c
                y = 2 * t * y + b;

                if ((x * x) - (y * y) > 4)
                {
                    break;
                }
            }
            if (i == 1001)
            
                printf(".");
            else
                printf(" ");

        }
        printf("\n");
    }
    getchar();
    // return 0;
}


int main()
{
    // multiply();
    fractal();
    return 0;
}