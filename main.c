#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_ROWS 10
#define MAX_COLS 10
#define MAX_SIZE 10

// 1. Function Prototypes
int first_logic(int num1, int num2, int num3);
int second_logic(int num1, int num2, int num3);

void run_assignment_2();

// Functions topic
void printFunctionQuestions();
void checkIfPerfectNumber();
int isPerfect(int num);
void findGreatestCommonDivisor();
int findGCD(int a, int b);
void reverseDigitsOfNumber();
void printFactorialTable();
long long calculateFactorial(int m);

// Recursion topic
void printRecursionQuestions();
long long factorialRecursive(int n);
int gcdRecursive(int a, int b);
int sumNaturalRecursive(int n);
void runRecursiveFactorial();
void runRecursiveGCD();
void runRecursiveSum();

// Array topic
void printArrayQuestions();
void transpose(int matrix[][20], int n);
void runTranspose();
void addMatrices(int a[][20], int b[][20], int n, int m);
void runMatrixAddition();
int determinant(int a[][20], int n);
void runDeterminant();
void calculateArrayAverage();
int todecimal(char bits[20], int length);
void runBinaryToDecimal();

// Sorting topic
void printSortingQuestions();
void bubbleSort(int arr[], int n);
void runBubbleSort();

// Structure topic
struct STUDENT
{
    char name[50];
    int roll;
    float marks;
};
void printStructureQuestions();
void sortByNameAsc();
void calculateFunctionDistance();
void displayDateInFormat();
void displayTimeInFormat();

struct Point
{
    float x;
    float y;
};

struct Date
{
    int day;
    int month;
    int year;
};

struct Time
{
    int hour;
    int minute;
    int second;
};

// Pointer topic
void printPointerQuestions();
void swap(int *a, int *b);
void swapAndDisplay();
void readMatrix(int *mat, int rows, int cols);
void displayMatrix(int *mat, int rows, int cols);
void multiplyMatrices(int *mat1, int *mat2, int *res, int r1, int c1, int c2);
void performMatrixMultiplication();

// Topics
char topic_1[] = "Functions";
char topic_2[] = "Recursion";
char topic_3[] = "Array";
char topic_4[] = "Sorting";
char topic_5[] = "Structures";
char topic_6[] = "Pointers";

int main()
{
    int assignment_number;
    printf("Welcome to the C assignments!\n\nPlease enter the number for the assignment you want to run (1 or 2):\n\t1. Assignment 1 \n\t2. Assignment 2 \n ");
    if (scanf("%d", &assignment_number) != 1)
        return 0;

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

// Assignment I Functions
int first_logic(int num1, int num2, int num3)
{
    return num1 + num2 - num3;
}

int second_logic(int num1, int num2, int num3)
{
    return num2 + num3 - num1;
}

// Assignment II Router
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

// TOPIC 1: FUNCTIONS
void printFunctionQuestions()
{
    char question_1[] = "Write a program to identify whether the given number is a perfect number or not using a function. 28 is a perfect number.";
    char question_2[] = "Write a program to evaluate the GCD of two given integers. Use a function that returns GCD.";
    char question_3[] = "Given a number, write a program using a while loop to reverse the digits of the number.";
    char question_4[] = "The factorial of an integer m is the product of consecutive integers from 1 to m. Write a program that computes and prints a table of factorials.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\t4. %s \n\n", question_1, question_2, question_3, question_4);
    scanf("%d", &question_number);
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
        break;
    case 4:
        printf("Question 4: %s \n\n", question_4);
        printFactorialTable();
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}

void checkIfPerfectNumber()
{
    int num;
    printf("Enter the number to check if it is a perfect number: ");
    scanf("%d", &num);
    if (isPerfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
}

int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return (sum == num && num > 0);
}

void findGreatestCommonDivisor()
{
    int num1, num2;
    printf("Enter two numbers to find their GCD: \n");
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
}

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

void reverseDigitsOfNumber()
{
    int num, reversed = 0, remainder;
    printf("Enter an integer to reverse: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed Number of %d is: %d\n", original, reversed);
}

long long calculateFactorial(int m)
{
    long long fact = 1;
    for (int i = 1; i <= m; i++)
    {
        fact *= i;
    }
    return fact;
}

void printFactorialTable()
{
    int limit;
    printf("Enter upper limit m for factorial table: ");
    scanf("%d", &limit);
    printf("\n--- Factorial Table ---\n");
    printf("Number\t|\tFactorial\n");
    printf("-------------------------\n");
    for (int i = 1; i <= limit; i++)
    {
        printf("%d\t|\t%lld\n", i, calculateFactorial(i));
    }
}

// TOPIC 2: RECURSION
void printRecursionQuestions()
{
    char question_1[] = "Write a recursive program to find the factorial of a given number.";
    char question_2[] = "Write a recursive program to find a GCD of two numbers.";
    char question_3[] = "Write a recursive program to find the sum of n natural numbers.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\n", question_1, question_2, question_3);
    scanf("%d", &question_number);
    switch (question_number)
    {
    case 1:
        printf("Question 1: %s \n\n", question_1);
        runRecursiveFactorial();
        break;
    case 2:
        printf("Question 2: %s \n\n", question_2);
        runRecursiveGCD();
        break;
    case 3:
        printf("Question 3: %s \n\n", question_3);
        runRecursiveSum();
        break;
    default:
        printf("Invalid question number.\n");
        break;
    }
}

long long factorialRecursive(int n)
{
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

void runRecursiveFactorial()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, factorialRecursive(n));
}

int gcdRecursive(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

void runRecursiveGCD()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcdRecursive(a, b));
}

int sumNaturalRecursive(int n)
{
    if (n <= 0)
        return 0;
    return n + sumNaturalRecursive(n - 1);
}

void runRecursiveSum()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d\n", n, sumNaturalRecursive(n));
}

// TOPIC 3: ARRAYS
void printArrayQuestions()
{
    char question_1[] = "Write a program to evaluate transpose of n by n matrix.";
    char question_2[] = "Write a C program for matrix addition.";
    char question_3[] = "Write a C program to determine the determinant of a square matrix.";
    char question_4[] = "Write a C program to store N numbers in a one-dimensional array and calculate its average.";
    char question_5[] = "Write a C program to convert a binary number to decimal using a character array.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\t4. %s \n\t5. %s \n\n", question_1, question_2, question_3, question_4, question_5);
    scanf("%d", &question_number);
    switch (question_number)
    {
    case 1:
        runTranspose();
        break;
    case 2:
        runMatrixAddition();
        break;
    case 3:
        runDeterminant();
        break;
    case 4:
        calculateArrayAverage();
        break;
    case 5:
        runBinaryToDecimal();
        break;
    default:
        printf("Invalid question number.\n");
        break;
    }
}

// Helper function to print matrices in a clear mathematical visual layout | a  b |
void displayVisualMatrix(int matrix[][20], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }
}
// Q1: Transpose Matrix Implementation
void transpose(int matrix[][20], int n)
{
    int trans[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }

    printf("\nTransposed Matrix Visualized:\n");
    displayVisualMatrix(trans, n, n);
}

void runTranspose()
{
    int n, matrix[20][20];
    printf("Enter dimension n for (n x n) matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nUser Input Matrix:\n");
    displayVisualMatrix(matrix, n, n);

    transpose(matrix, n);
}

void addMatrices(int a[][20], int b[][20], int n, int m)
{
    int result[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of Matrices Result:\n");
    displayVisualMatrix(result, n, m);
}
// Q2: Matrix Addition Implementation
void runMatrixAddition()
{
    int n, m, a[20][20], b[20][20];
    printf("Enter dimensions n (rows) and m (cols): ");
    scanf("%d %d", &n, &m);

    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    printf("\nMatrix A:\n");
    displayVisualMatrix(a, n, m);

    printf("\nMatrix B:\n");
    displayVisualMatrix(b, n, m);

    addMatrices(a, b, n, m);
}

// Q3: Determinant Matrix Implementation
int determinant(int a[][20], int n)
{
    int det = 0;
    int submatrix[20][20];

    if (n == 1)
        return a[0][0];
    if (n == 2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));

    for (int x = 0; x < n; x++)
    {
        int subi = 0;
        for (int i = 1; i < n; i++)
        {
            int subj = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == x)
                    continue;
                submatrix[subi][subj] = a[i][j];
                subj++;
            }
            subi++;
        }
        det += (x % 2 == 0 ? 1 : -1) * a[0][x] * determinant(submatrix, n - 1);
    }
    return det;
}

void runDeterminant()
{
    int n, a[20][20];
    printf("Enter dimension n for square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nInput Matrix Visualized:\n");
    displayVisualMatrix(a, n, n);

    int det = determinant(a, n);
    printf("\nDeterminant = %d\n", det);
}

// Q4: Array Average Calculation
void calculateArrayAverage()
{
    int n;
    float arr[100], sum = 0.0;
    printf("Enter total number of elements N: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("\nVisualized Array Format:\n[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("]\n");

    printf("\nAverage = %.2f\n", sum / n);
}

// Q5: Binary to Decimal Conversion
int todecimal(char bits[20], int length)
{
    int dec = 0;
    for (int i = 0; i < length; i++)
    {
        if (bits[i] == '1')
            dec += pow(2, length - 1 - i);
    }
    return dec;
}
void runBinaryToDecimal()
{
    char bits[20];
    printf("Enter binary number (bits): ");
    scanf("%s", bits);

    int length = strlen(bits);
    int decimal_val = todecimal(bits, length);

    printf("\nBinary Representation: [ %s ]\n", bits);
    printf("Decimal Equivalent = %d\n", decimal_val);
}
// TOPIC 4: SORTING
void printSortingQuestions()
{
    char question_1[] = "Write a program to arrange the numbers (array) in ascending order using bubble sort.";
    int question_number;
    printf("Enter question number:\n\t1. %s\n", question_1);
    scanf("%d", &question_number);
    if (question_number == 1)
    {
        runBubbleSort();
    }
    else
    {
        printf("Invalid selection.\n");
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void runBubbleSort()
{
    int n, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// TOPIC 5: STRUCTURES
void printStructureQuestions()
{
    char question_1[] = "Write a program that defines a structure called STUDENT with suitable attributes and reads the data for 5 students. Your program should display the records in ascending order according to the name of the students.";
    char question_2[] = "Consider a plane graph. Write a program that uses the function to return a distance between the given point and the origin.";
    char question_3[] = "Define a structure data type named date containing three integer members a day, month and year. Write a program that would assign values to the individual members and display the date in the following form: April 29, 2002";
    char question_4[] = "Define a structure data type named time containing three members integer hour, integer minute and integer second. Develop a program that would assign value to the individual members and display the time in the following form: 16:40:51";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\t3. %s \n\t4. %s \n\n", question_1, question_2, question_3, question_4);
    scanf("%d", &question_number);

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
        break;
    case 4:
        printf("Question 4: %s \n\n", question_4);
        displayTimeInFormat();
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}

void sortByNameAsc()
{
    struct STUDENT s[5], temp;
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Records (Ascending by Name):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
}

void calculateFunctionDistance()
{
    struct Point p;
    printf("Enter x coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);
    float dist = sqrt(p.x * p.x + p.y * p.y);
    printf("Distance from Origin (0,0) = %.2f\n", dist);
}

void displayDateInFormat()
{
    struct Date d;
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    printf("Enter day month year (e.g. 29 4 2002): ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    if (d.month >= 1 && d.month <= 12)
        printf("Formatted Date: %s %d, %d\n", months[d.month - 1], d.day, d.year);
    else
        printf("Invalid Month Entry.\n");
}

void displayTimeInFormat()
{
    struct Time t;
    printf("Enter hour minute second (e.g. 16 40 51): ");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);
    printf("Formatted Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
}

// TOPIC 6: POINTERS
void printPointerQuestions()
{
    char question_1[] = "Write a program that swaps two variables. Use functions and pointers.";
    char question_2[] = "Solve the matrix multiplication Programming using pointers.";
    int question_number;
    printf("Enter the question number to view the solution.\n\t1. %s \n\t2. %s \n\n", question_1, question_2);
    scanf("%d", &question_number);

    switch (question_number)
    {
    case 1:
        printf("Question 1: %s \n\n", question_1);
        swapAndDisplay();
        break;
    case 2:
        printf("Question 2: %s \n\n", question_2);
        performMatrixMultiplication();
        break;
    default:
        printf("Invalid number detected..Enter numbers for the question provided in the list above.\n\n");
        break;
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapAndDisplay()
{
    int num1, num2;
    printf("Enter value for first number: ");
    scanf("%d", &num1);
    printf("Enter value for second number: ");
    scanf("%d", &num2);

    printf("\n--- Before Swapping ---\n");
    printf("First number = %d, Second Number = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("\n--- After Swapping ---\n");
    printf("First number = %d, Second number = %d\n", num1, num2);
}

void performMatrixMultiplication()
{
    int matrix_1[MAX_SIZE][MAX_SIZE], matrix_2[MAX_SIZE][MAX_SIZE], matrix_result[MAX_SIZE][MAX_SIZE];
    int row_1, col_1, row_2, col_2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &row_1, &col_1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row_2, &col_2);

    if (col_1 != row_2)
    {
        printf("\nError: Column of 1st matrix must equal Row of 2nd matrix!\n");
        return;
    }

    printf("\n--- Enter data for Matrix A (%dx%d) ---\n", row_1, col_1);
    readMatrix((int *)matrix_1, row_1, col_1);

    printf("\n--- Enter data for Matrix B (%dx%d) ---\n", row_2, col_2);
    readMatrix((int *)matrix_2, row_2, col_2);

    multiplyMatrices((int *)matrix_1, (int *)matrix_2, (int *)matrix_result, row_1, col_1, col_2);

    printf("\n--- Resultant Matrix (%dx%d) ---\n", row_1, col_2);
    displayMatrix((int *)matrix_result, row_1, col_2);
}

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

void multiplyMatrices(int *mat1, int *mat2, int *res, int r1, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(res + i * MAX_SIZE + j) = 0;
            for (int k = 0; k < c1; k++)
            {
                *(res + i * MAX_SIZE + j) += (*(mat1 + i * MAX_SIZE + k)) * (*(mat2 + k * MAX_SIZE + j));
            }
        }
    }
}