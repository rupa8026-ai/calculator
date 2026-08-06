#include <stdio.h>
#include <stdlib.h>

/**
 * =======================================================================================================================
 * KATHMANDU UNIVERSITY
 * End Semester Examination [C]
 * June/July 2024
 * Course : COMP 102
 * Semester : I
 * F. M. : 40
 * =======================================================================================================================
 * 
 * SECTION "B"
 * [6Q. x 4 = 24 marks]
 * Attempt ANY SIX questions.
 * 
 * Question 1. Write in brief about conditional operators and logical operators with appropriate example. [2+2=4]
 * 
 * A. Conditional Operator (Ternary Operator ?:):
 *    - Syntactic shorthand for simple decision making that takes three operands.
 *    - Syntax: condition ? expression_if_true : expression_if_false;
 *    - Example: int max = (a > b) ? a : b;
 * 
 * B. Logical Operators:
 *    - Used to combine or invert boolean expressions (1 for true, 0 for false).
 *    1. Logical AND (&&): Returns true (1) if BOTH operands are non-zero.
 *    2. Logical OR (||): Returns true (1) if AT LEAST ONE operand is non-zero.
 *    3. Logical NOT (!): Inverts the truth state of its operand.
 * 
 *    - Example:
 *      if (age >= 18 && hasID == 1) { printf("Allowed"); }
 */

void main_q1_demo() {
    int x = 10, y = 20;
    int max = (x > y) ? x : y;
    printf("Max between %d and %d is %d\n", x, y, max);

    if (x < y && y > 0) {
        printf("Both conditions are True.\n");
    }
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 2. What are control statements in c programming? Discuss its types. [1+3=4]
 * 
 * Definition:
 *   Control statements alter or dictate the flow of program execution based on specified conditions or loops.
 * 
 * 3 Primary Types of Control Statements:
 *   1. Decision Making / Selection Statements:
 *      - Direct execution down specific paths depending on boolean evaluation.
 *      - Examples: if, if-else, switch-case, ternary operator (?:).
 * 
 *   2. Iterative / Looping Statements:
 *      - Repeatedly execute a block of code while a condition remains true.
 *      - Examples: for loop, while loop, do-while loop.
 * 
 *   3. Jump / Transfer Statements:
 *      - Transfer program execution unconditionally to another location in code.
 *      - Examples: break, continue, goto, return.
 */


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 3. Write about different parts of a function definition. What is the importance of function declaration? [3+1=4]
 * 
 * A. Parts of a Function Definition:
 *    1. Return Type: Data type of the value returned by the function (e.g., int, float, void).
 *    2. Function Name: Identifier used to invoke/call the function.
 *    3. Parameter List: Comma-separated variables that receive values passed from the caller.
 *    4. Function Body: Code block enclosed in {} containing statements and an optional return statement.
 * 
 *    Example:
 *      int add(int a, int b) { // Return Type: int, Name: add, Parameters: int a, int b
 *          return a + b;       // Function Body
 *      }
 * 
 * B. Importance of Function Declaration (Prototype):
 *    - Notifies compiler of the function's name, parameters, and return type prior to definition.
 *    - Enables argument type-checking during compile time.
 *    - Allows functions to be called before their definitions appear in the source file.
 */


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 4. Write a program which can perform basic operation of a calculator (addition, subtraction, multiplication and division) between two user input numbers. Implement switch case for +,-,* and /.
 */

int main_q4_calculator() {
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator selected.\n");
    }
    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 5. Write a program to check whether a number is palindrome or not. Palindrome number remains the same when its digits are reversed.
 */

int main_q5_palindrome() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is NOT a Palindrome number.\n", originalNum);
    }

    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 6. Differentiate between arguments pass by value and pass by reference with appropriate examples.
 * 
 * Feature               | Pass by Value                           | Pass by Reference (via Pointers)
 * ----------------------|-----------------------------------------|-----------------------------------------
 * Argument Passed       | Copy of the variable's value.           | Memory address of original variable.
 * Modifications         | Local to function; caller unaffected.   | Modifies original variable in memory.
 * Syntax                | void swap(int a, int b)                 | void swap(int *a, int *b)
 * Call Syntax           | swap(x, y)                              | swap(&x, &y)
 */

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main_q6_swap_demo() {
    int x = 10, y = 20;

    swapByValue(x, y);
    printf("After Pass by Value: x = %d, y = %d\n", x, y);

    swapByReference(&x, &y);
    printf("After Pass by Reference: x = %d, y = %d\n", x, y);

    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 7. Write about storage class specifiers and their different types in C programming.
 * 
 * Definition:
 *   Storage classes determine the scope, lifetime, default initial value, and storage location of variables.
 * 
 * 4 Types of Storage Classes:
 *   1. auto (Automatic): Default for local variables inside functions. Allocated on Stack. Lifetime: Function block.
 *   2. register: Stored in CPU registers for fast access. Lifetime: Function block. Cannot use & address operator.
 *   3. static: Retains value across function calls. Lifetime: Till program termination. Initialized to 0 by default.
 *   4. extern (External): Declares global variables declared elsewhere. Lifetime: Till program termination. Scope: Global.
 */


/**
 * =======================================================================================================================
 * SECTION "C"
 * [2Q. x 8 = 16 marks]
 * Attempt ANY TWO questions.
 * =======================================================================================================================
 * 
 * Question 8.
 * a. What is recursion? What are the components for a valid recursive definition? Explain in brief. [4]
 * 
 * Definition: Recursion is a programming technique where a function calls itself directly or indirectly.
 * 
 * Components for a Valid Recursive Definition:
 *   1. Base Case (Termination Condition): Condition under which function stops recursive calls and returns a value.
 *      Prevents infinite recursion and stack overflow errors.
 *   2. Recursive Step (Reduction Step): Logic where function calls itself with modified/smaller inputs,
 *      progressively moving towards the base case.
 * 
 * b. Write in brief about constants, variables and symbolic constants in c programming. [4]
 * 
 * - Variable: Named storage location in memory whose value can change during program execution (e.g., int age = 20;).
 * - Constant: Fixed literal value that cannot be changed during program execution (e.g., 10, 'A', 3.14).
 * - Symbolic Constant: Named identifier defined using preprocessor directives (#define) or 'const' keyword to replace literals.
 *   Examples: #define PI 3.14159 or const int MAX_SIZE = 100;
 */


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 9.
 * a. What are about jump statements, discuss with appropriate examples. [4]
 * 
 * Jump statements unconditionally transfer program execution control.
 * 1. break: Immediately exits from loops (for, while, do-while) or switch cases.
 * 2. continue: Skips remaining statements in current loop iteration and jumps to the next loop evaluation.
 * 3. return: Terminates function execution and returns a value to the caller.
 * 4. goto: Unconditionally jumps to a labeled line within the same function.
 * 
 * b. Write a program to display the transpose of a given matrix using function. [4]
 */

void transposeMatrix(int rows, int cols, int matrix[10][10], int transposed[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main_q9_transpose() {
    int r, c, matrix[10][10], transposed[10][10];

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(r, c, matrix, transposed);

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 10. Write a program to store information about employees which can hold name, employee ID(int), basic salary (int), allowance(int) and net salary (basic salary + allowance). Write a function which can input information about the desired number(input) of employees and another function to display information about the employees sorted by their net salary. [4+4=8]
 */

struct Employee {
    char name[50];
    int emp_id;
    int basic_salary;
    int allowance;
    int net_salary;
};

void inputEmployees(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Basic Salary: ");
        scanf("%d", &emp[i].basic_salary);
        printf("Allowance: ");
        scanf("%d", &emp[i].allowance);

        emp[i].net_salary = emp[i].basic_salary + emp[i].allowance;
    }
}

void displaySortedEmployees(struct Employee emp[], int n) {
    struct Employee temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (emp[j].net_salary > emp[j + 1].net_salary) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("\n=========================================================\n");
    printf(" EMPLOYEE DETAILS (SORTED BY NET SALARY ASCENDING)\n");
    printf("=========================================================\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %-12s | Basic: %d | Allowance: %d | Net: %d\n",
               emp[i].emp_id, emp[i].name, emp[i].basic_salary, emp[i].allowance, emp[i].net_salary);
    }
}

int main_q10_employees() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee empList[n];

    inputEmployees(empList, n);
    displaySortedEmployees(empList, n);

    return 0;
}