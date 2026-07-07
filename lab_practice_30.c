

/**
 * Array - Single Dimension Array
 * Multi-dimensional Array
 *
 */


 #include <stdio.h>
int main()
{

    int a[100], i, n;
    float sum = 0, mean;

    printf("How manu numbers\n");
    scanf("%d", &n);
    printf("");

    for (int r = 0; r < n; r++)
    {
        sum =sum + a[r];
    }

    printf("Sum is : %f", sum);

    return 0;
}