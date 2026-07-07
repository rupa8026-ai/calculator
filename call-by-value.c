


#include <stdio.h>


int some_using_local(int m, int n);
int some_using_global(int m, int n);

int main(){
    
    int a= 10; int b =20; 
    printf("Initial Values A : \nInitial Values B : \n\n", a, b);
    int r_global = some_using_global(a, b);
    printf("\tA  %d \t\n B %d \t\n The output is : %d ", a, b, r_global);
    int r_local = some_using_local(a, b);
    // printf("\n\n                               (^--^)                           (^--^)                                           ");
    printf("\n\n         (^--^)                        (^--^)                (^--^)             (^--^)              (^--^)                               ");
    printf("\nThe LOCAL value of a is %d \n The value of b is %d \n The output is : %d ", a, b, r_local);
    return 0;
}

int some_using_local(int m, int n){
    int a =m;
    int b = n;
    return a*b;

}

int some_using_global(int m, int n){
    return m*n;
}

int overriding_input_values(int m, int n){
    m=100;n=200;
    return m*n;
}

     
// int some_using_local(int *m, int n){
//     // int a =m;
//     m=33;
//     int b = n;
//     return a*b;

// }
