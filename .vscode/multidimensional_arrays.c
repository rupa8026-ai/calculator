

#include <stdio.h>

int maina()
{

    // define variables
    int a[100][100], m, n, o, p, q;
    printf("Enter dimensions of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Desired number of Rows : %d\n", m);
    printf("Desired number of Column : %d\n", n);
    

    // loop
    for (p = 0; p < m; p++)
    {
        printf("row is : %d\n", m);
        
        // a[p][q];
        
        for (q = 0; q < n; q++)
        {
            printf("column is : %d\n", m);

            printf("enter value for [a(%d %d)] : \n",p, q  );
            scanf("%d", &o);
            printf("%d  has %d", a[p][q], o);
        }
    }
}



int main()
{

    // define variables
    int a[100][100], row, column, o, p, q;
    printf("Enter dimensions of the matrix\n");
    scanf("%d %d", &row, &column);
    printf("Desired number of Rows : %d\n", row);
    printf("Desired number of Column : %d\n", column);
    

    // r= 1, c = 2
    // index starts from 0  hence p = 0 
    // loop
    for (p = 0; p < row; p++)
    {
        printf("enter value for [a(%d %d)] : \n",row, column );
        printf("row is : %d\n", row);
        
        // a[p][q];
        
        for (q = 0; q < column; q++)
        {
            printf("column is : %d\n", column);

            scanf("%d", &o);
            printf("%d  has %d\n", a[p][q], o);
            a[p][q]=o;
        }
    }
}


// write a program to perform logical operations for a matrix col o


// write a program to add, substract, multiply two matrices
