// Example : READ, Process and Display
#include <stdio.h>

void main()
{
    int n, a[100];
    printf("How many numbers");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i] + 5;
        }
        else
            a[i] = a[i] * a[i];
    }
    for (i = 0; i < n; i++)
        printf("a[%d]=%d\n", i, a[i]);
}

// Example : READ and Display

#include <stdio.h>
int Program1()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
        a[i] = i;
    for (i = 0; i < 5; i++)

        for (i = 0; i < 5; i++)
            printf("a[%d] = %d\n", i, a[i]);
}

int Program2()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);

        for (i = 0; i < 5; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
}
void Program3()
{
    int n, a[100];
    printf("How many numbers");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] + 5;
        }

        for (i = 0; i < n; i++)
        {
            printf("a[%d]=%d\n", i, a[i]);
        }
    }
}

void Program4()
{
    int n, a[100];
    printf("How many numbers");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}

void Program5()
{
    int a[100], i, n;
    float sum = 0, mean;
    printf("How many numbers");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    mean = sum / n;
    printf("Mean of the given numbers is:%f", mean);
}

void Program6()
{

    int s, i, n;
    float sum = 0, mean;
    printf("How many numbers");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    mean = sum / n;
    printf("Mean of the given numbers is:%f", mean);
}
void Program7() {}
void Program8() {}
void Program9() {}
void Program10() {}
void Program11() {}
void Program12() {}
void Program14() {}
void Program13() {}