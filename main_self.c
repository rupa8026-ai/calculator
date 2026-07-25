#include "stdio.h"
/**
a+b-c
b+c-a

1. Algorithms
2. Operations
3. Output
*/
// int a;
// int b;
// int c;

#include <stdio.h>

// 1. Function Prototypes (telling the compiler these exist)
int first_logic(int num1, int num2, int num3);
int second_logic(int num1, int num2, int num3);

void run_assignment_2();
// functions
void printFunctionQuestions();
void checkIfPerfectNumber();
int isPerfect(int num);
void findGreatestCommonDivisor();
int findGCD(int a, int b);
void reverseDigitsOfNumber();
void printFactorialTable();

// recursion
void printRecursionQuestions();
 void findFactorialOfANumber();
 void findGCDUsingRecursion();
 void findSumOfNumbers();


// Array
void printArrayQuestions();
void printSortingQuestions();
void printStructureQuestions();
void printPointerQuestions();


// Structures
void printFactorialTable(int num);
void displayTimeInFormat();
void calculateFunctionDistance();
void sortByNameAsc();
void swapAndDisplay();
void displayDateInFormat();

void readMatrix(int *mat, int rows, int cols);
void displayMatrix(int *mat, int rows, int cols);
void multiplyMatrices(int *mat1, int *mat2, int *res, int r1, int c1, int c2);
void performMatrixMultiplication();

// II Properties / Members

int main()
{

    int assignment_number;
    // ask which assignment to run
    printf("Welcome to the C assignments!\n\nPlease enter the number for the assignment you want to run (1 or 2):\n\t1. Assignment 1 \n\t2. Assignment 2 \n ");
    scanf("%d\n\n", &assignment_number);

    switch (assignment_number)
    {
    case 1:
        printf("Assignment 1 is about mathematical operations. Addition and Substraction. We have two programs. Enter program number to view the output.\n1. Program 1 \n2. Program 2 \n");
        int program_number;
        scanf("%d", &program_number);
        switch (program_number)
        {
        case 1:
        {
            printf("Program 1: This program takes three numbers and performs the operation a + b - c.\n");
            int a, b, c, output;
            printf("Enter 3 numbers (separated by spaces, e.g., 10 20 5): ");
            scanf("%d %d %d", &a, &b, &c);
            // 3. Output
            output = first_logic(a, b, c);
            printf("Logic (a + b - c): %d\n", output);
            break;
        }
        case 2:
        {
            printf("Program 2: This program takes three numbers and performs the operation b + c - a.\n");
            int a, b, c, output;
            printf("Enter 3 numbers (separated by spaces, e.g., 10 20 5): ");
            scanf("%d %d %d", &a, &b, &c);
            // 3. Output
            output = second_logic(a, b, c);
            printf("Input: %d, %d, %d\n Logic (b + c - a):\nOutput: %d\n", a, b, c, output);
            break;
        }
        default:
            printf("Invalid program number. Please enter 1 or 2.\n");
        }
        break;
    case 2:
        run_assignment_2();
        break;
    default:
        printf("Sorry , we dont have that assignment yet, reach out to Pratit if you would like to add on to the project. \n");
    }
    return 0;
}

// Assignment I _ Mathematical simplification operations
int first_logic(int num1, int num2, int num3)
{
    return num1 + num2 - num3;
}

int second_logic(int num1, int num2, int num3)
{
    return num2 + num3 - num1;
}

// Assignment II
// Topics
char topic_1[] = "Functions";
char topic_2[] = "Recursion";
char topic_3[] = "Array";
char topic_4[] = "Sorting";
char topic_5[] = "Structures";
char topic_6[] = "Pointers";

void run_assignment_2()
{
    printf("Assignment 2 is related to below topics. Enter the topic number to view the question and answers.\n\n");
    int topic_number;
    printf("1. %s \n\n2. %s \n\n3. %s \n\n4. %s \n\n5. %s \n\n6. %s \n\n\n--------------------------------------------------------------------------------------------------------------------------------------------\n\n\n", topic_1, topic_2, topic_3, topic_4, topic_5, topic_6);
    scanf("%d", &topic_number);
    printf("\n\nSelected Topic [%d]-[**%s**]:\n\n", topic_number, topic_number == 1 ? topic_1 : topic_number == 2 ? topic_2
                                                                                            : topic_number == 3   ? topic_3
                                                                                            : topic_number == 4   ? topic_4
                                                                                            : topic_number == 5   ? topic_5
                                                                                            : topic_number == 6   ? topic_6
                                                                                                                  : "Invalid Topic");

    switch (topic_number)
    {
    case 1:
        printFunctionQuestions();
        break;
    case 2:
        printRecursionQuestions();
        break;
    case 3:
        printArrayQuestions();
        break;
    case 4:
        printSortingQuestions();
        break;
    case 5:
        printStructureQuestions();
        break;
    case 6:
        printPointerQuestions();
        break;
    default:
        printf("Invalid topic number. Please enter a number between 1 and 6.\n");
    }
}

void printFunctionQuestions()
{
    char question_1[] = "Write a program to identify whether the given number is a perfect number or not using a function. 28 is a perfect number.";
    char question_2[] = "Write a program to evaluate the GCD of two given integers. Use a function that returns GCD.";
    char question_3[] = "Given a number, write a program using a while loop to reverse the digits of the number.\nFor example, the number 12345 should be written as 54321 (Hint: Use the modulus operator to extract the last digit and the integer division by 10 to get the n-1 digit number from the n digit number.)";
    char question_4[] = "The factorial of an integer m is the product of consecutive integers from 1 to m. That is,  Factorial m = m!x(m-1)x…..x1.\nWrite a program that computes and prints a table of factorials for any given m. Write a function for the calculation and printing of factorials.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\t4. %s \n\n", question_1, question_2, question_3, question_4);
    switch (question_number)
    {
    case 1:
        printf("Question 1: %s \n\n", question_1);
        checkIfPerfectNumber();
        break;
    case 2:
        printf("Question 2: %s \n\n", question_2);
        findGreatestCommonDivisor();
        break;
    case 3:
        printf("Question 3: %s \n\n", question_3);
        reverseDigitsOfNumber();
        printf("");
        break;
    case 4:
        printf("Question 4: %s \n\n", question_4);
        findFactorialOfANumber();
        printf("");
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}

void printRecursionQuestions()
{
    char question_1[] = "Write a recursive program to find the factorial of a given number.";
    char question_2[] = "Write a recursive program to find a GCD of two numbers.";
    char question_3[] = "Write a recursive program to find the sum of n natural numbers.";
    int question_number;
    switch (question_number)
    {
    case 1:
    findFactorialOfANumber();
        break;
    case 2:
    findGCDUsingRecursion();
        break;
    case 3:
    findSumOfNumbers();
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}
void printArrayQuestions()
{
    char question_1[] = "Write a program to evaluate transpose of n by n matrix with the help of function void transpose(int matrix[][20], int n) where matrix is the matrix to be transformed and n is the dimension of the matrix.";
    char question_2[] = "Write a C program for matrix addition with the help of function add(int a[][20], int b[][20], int n, int m) where a and b are the matrix to be added and n and m are dimensions of a and b.";
    char question_3[] = "Write a C program to determine the determinant of a square matrix with the help of function int determinant(int a[][], n) where a is the matrix whose determinant is to be found and n is the dimension of a square matrix.";
    char question_4[] = "Write a C program to store N numbers in a one-dimensional array and calculate its average with the help of the function.";
    char question_5[] = "Write a C program to convert a binary number to decimal with the help of the function int todecimal(char bits[20], int length) where bits is the character array to represent bits of binary numbers and length is the number of bits in the binary number.";
}
void printSortingQuestions()
{
    char question_1[] = "Write a program to arrange the numbers (array) in ascending order using bubble sort.";
}
void printStructureQuestions()
{
   
    char question_1[] = "Write a program that defines a structure called STUDENT with suitable attributes and reads the data for 5 students. Your program should display the records in ascending order according to the name of the students.";
    char question_2[] = "Consider a plane graph. Write a program that uses the function to return a distance between the given point and the origin.";
    char question_3[] = "Define a structure data type named date containing three integer members a day, month and year. Write a program that would assign values to the individual members and display the date in the following form: April 29, 2002";
    char question_4[] = "Define a structure data type named time containing three members integer hour, integer minute and integer second. Develop a program that would assign value to the individual members and display the time in the following form: 16:40:51";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\t4. %s \n\n", question_1, question_2, question_3, question_4);

    // run program based on the question number
    switch (question_number)
    {
    case 1:
        printf("Question 1: %s \n\n", question_1);
        sortByNameAsc();
        break;
    case 2:
        printf("Question 2: %s \n\n", question_2);
        calculateFunctionDistance();
        break;
    case 3:
        printf("Question 3: %s \n\n", question_3);
        displayDateInFormat();
        printf("");
        break;
    case 4:
        printf("Question 4: %s \n\n", question_4);
        displayTimeInFormat();
        printf("");
        break;
    case 5:
        swapAndDisplay();
        printf("");
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}
void printPointerQuestions()
{
    char question_1[] = "Write a program that swaps two variables. Use functions and pointers.";
    char question_2[] = "Solve the matrix multiplication Programming using pointers.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\n", question_1, question_2);
    scanf("%d", &question_number);

    // run program based on the question number
    switch (question_number)
    {
    case 1:
        printf("Question 1: %s \n\n", question_1);
        checkIfPerfectNumber();
        break;
    case 2:
        printf("Question 2: %s \n\n", question_2);
        printf("");
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}

// Function to check if a number is perfect
void checkIfPerfectNumber()
{
    int num, sum;
    printf("Enter the number to check if it is a perfect number: ");
    scanf("%d\n", &num);
    if (isPerfect(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
}
// Function to check if a number is perfect
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

void findGreatestCommonDivisor()
{
    int num1, num2;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
}
// Function to calculate GCD using Euclidean algorithm
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void findFactorialOfANumber()
{
    int num;
    printf("Enter any natural number to calculate its Factorial..\n");
    scanf("%d\n", &num);
    printFactorialTable(num);
}

void printFactorialTable(int m) {
    printf("\n--- Factorial Table (1 to %d) ---\n", m);
    printf("Number\t|\tFactorial\n");
    printf("---------------------------\n");

    long long fact = 1;
    for (int i = 1; i <= m; i++) {
        fact *= i;
        printf("%d\t|\t%lld\n", i, fact);
    }
}
// Assignment II _ pointers
// Function to swap two numbers by modifying memory directly
void swap(int *a, int *b)
{
    int temp;
    temp = *a; // Store value at address 'a' in temp
    *a = *b;   // Copy value at address 'b' into address 'a'
    *b = temp; // Copy temp value into address 'b'
}
void swapAndDisplay()
{
    int num1, num2, temp;
    printf("Enter two numbers to swap:\n ");

    printf("Enter value for first number: ");
    scanf("%d", &num1);
    printf("Enter value for second number: ");
    scanf("%d", &num2);

    printf("\n--- Before Swapping ---\n");
    printf("First number = %d, Second Number = %d\n", num1, num2);
    printf("| %d | %d | \n", num1, num2);

    // Pass the memory addresses of x and y using '&'
    swap(&num1, &num2);

    printf("\n--- After Swapping ---\n");
    printf("First number = %d, Second number = %d\n", num1, num2);
    printf("| %d | %d | \n", num1, num2);
}

// # are Preprocessor Directives.
#define MAX_ROWS 10
#define MAX_COLS 10
#define MAX_SIZE 10

// Function to perform matrix multiplication using pointers
void performMatrixMultiplication()
{

    // matrix multiplication is a mathematical operation that takes two matrices as input and produces a new matrix as output. The number of columns in the first matrix must be equal to the number of rows in the second matrix for the multiplication to be valid. The resulting matrix will have dimensions equal to the number of rows of the first matrix and the number of columns of the second matrix.
    // [1,2] is a 1x2 matrix [RXC]

    // |1, 2, 3|
    // |4, 5, 6| is a 2x3 matrix
    // we have 2 rows and 3 columns in the second matrix. The resulting matrix will have dimensions equal to the number of rows of the first matrix (1) and the number of columns of the second matrix (3). Therefore, the resulting matrix will be a 1x3 matrix.

    // define matrices to be multiplied with dimension
    // since we using 2X2 matrces, its output will also be 2X2 matrix
    int matrix_1[2][2], matrix_2[2][2], matrix_result[2][2];
    int row_1, col_1, row_2, col_2;
    // take inputs
    scanf("%d %d", &row_1, &col_1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row_2, &col_2);

    // matrix multiplication validation
    // Number of columns in the first matrix  must be equal to the number of rows in the second matrix
    if (col_1 != row_2)
    {
        printf("\nError:  # of Column of 1st matrix must equal # of Row of 2nd matrix!\n");
        // return 1;
    }

    // fill in matrix with values
    printf("\n--- Enter data for Matrix A (%dx%d) ---\n", row_1, col_1);
    readMatrix((int *)matrix_1, row_1, col_1);

    printf("\n--- Enter data for Matrix B (%dx%d) ---\n", row_2, col_2);
    readMatrix((int *)matrix_2, row_2, col_2);

    // Perform multiplication using pointers
    multiplyMatrices((int *)matrix_1, (int *)matrix_2, (int *)matrix_result, row_1, col_1, col_2);

    printf("\n--- Resultant Matrix (%dx%d) ---\n", row_2, col_2);
    displayMatrix((int *)matrix_result, row_2, col_2);
}

// Read matrix elements using pointer arithmetic
void readMatrix(int *mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (mat + i * MAX_SIZE + j));
        }
    }
}

// Display matrix elements using pointer dereferencing
void displayMatrix(int *mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *(mat + i * MAX_SIZE + j));
        }
        printf("\n");
    }
}

// Multiply matrices via pointers
void multiplyMatrices(int *mat1, int *mat2, int *res, int r1, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(res + i * MAX_SIZE + j) = 0; // Initialize cell
            for (int k = 0; k < c1; k++)
            {
                *(res + i * MAX_SIZE + j) += (*(mat1 + i * MAX_SIZE + k)) * (*(mat2 + k * MAX_SIZE + j));
            }
        }
    }
}
