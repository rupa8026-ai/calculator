
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter 3 numbers (separated by spaces, e.g., 10 20 30): ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("You have entered %d %d %d \n", num1, num2, num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("CASE 1");
        printf("Number (%d) is > than Number (%d) & (%d). \n", num1, num2, num3);
        if (num1 > 2)
            printf("Number (%d) is > than 2 \n", num1);
        else
            printf("Number (%d) is < than 2 \n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("CASE 2");
        printf("Number (%d) is > than Number (%d) & (%d). \n", num2, num1, num3);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("Number (%d) is > than Number (%d) & (%d). \n", num3, num1, num2);
    }
    else if(num1==num2==num3){
        printf("CASE 3");
        printf("Number (%d) is Equals to Number (%d) Equals (%d). \n", num3, num1, num2);

    }
    else
    {
        printf("CASE 4");

        printf("Nothing to do ");
    }

    return 0;
}