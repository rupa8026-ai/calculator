#include <stdio.h>
#include <string.h>

/**
 * =======================================================================================================================
 * KATHMANDU UNIVERSITY - End Semester Examination (September 2024)
 * =======================================================================================================================
 
 * SECTION "A"
 * Choose and encircle the most appropriate answer. Symbols have their usual meanings.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 1. Which of the following statements is true about the C language and its development?
 * a. The original C language was designed without support for structured programming and was later enhanced with these features in the C++ language.
 * b. C was standardized by the International Organization for Standardization (ISO) in 1989, and this version is known as C89 or ANSI C.
 * c. C was initially developed as a language with garbage collection capabilities, which were later removed in the transition to modern C standards.
 * d. The C language was developed with a strong emphasis on object-oriented programming, which was later incorporated into the C++ language.
 * 
 * Answer: b. C was standardized by the International Organization for Standardization (ISO) in 1989, and this version is known as C89 or ANSI C.
 * Explanation: ANSI standardized C in 1989 (ANSI X3.159-1989), often referred to as ANSI C or C89, which was subsequently adopted by ISO in 1990 (ISO/IEC 9899:1990).
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 2. Which of the following statements about float and double precision in C is correct?
 * a. float has a precision of approximately 6 decimal digits, while double has a precision of about 16 decimal digits
 * b. float and double both have the same precision but different ranges.
 * c. float and double have the same precision, but double can store larger numbers.
 * d. float has a precision of approximately 15 decimal digits, while double has a precision of about 7 decimal digits.
 * 
 * Answer: a. float has a precision of approximately 6 decimal digits, while double has a precision of about 16 decimal digits
 * Explanation:32-bit floats provide ~6-7 decimal digits of precision, whereas 64-bit doubles provide ~15-17 decimal digits.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 3. Which of the following is not a valid C variable name?
 * a. 2ndvar
 * b. int_num
 * c. _var
 * d. varName
 * 
 * Answer: a. 2ndvar
 * Explanation: Identifier rules state that variable names cannot begin with a digit (0-9).
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 4. What will be following code print?
 * printf("%d", 5 / 2);
 * a. 2.5
 * b. 2.0
 * c. 2
 * d. 5
 * 
 * Answer: c. 2
 * Explanation: Both 5 and 2 are integers, so integer division is performed, which truncates the fractional part (5/2 = 2).
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 5. What is the output of the following code?
 * int a = 5;
 * printf("%d", a << 1);
 * a. 10
 * b. 5
 * c. 20
 * d. 2
 * 
 * Answer: a. 10
 * Explanation: Left shift operation `a << 1` multiplies the integer by $2^1$. Thus, $5 \times 2 = 10$.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 6. Write the output of the following program.
 * #include <stdio.h>
 * int main() {
 *     int a = 5;
 *     int b = 3;
 *     int c = (a > b) ? (a - b) : (a + b);
 *     printf("%d\n", c);
 *     return 0;
 * }
 * a. 8
 * b. 15
 * c. 1
 * d. 2
 * 
 * Answer: d. 2
 * Explanation: Since $a (5) > b (3)$ is true, the ternary expression evaluates `a - b`, which is $5 - 3 = 2$.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 7. How do you read a single character input in C?
 * a. scanf("%c",&ch)
 * b. scanf("%c,&ch")
 * c. scanf("%d",&ch)
 * d. gets(&ch)
 * 
 * Answer: a. scanf("%c",&ch)
 * Explanation: `%c` is the format specifier for reading a single `char` in C.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 8. What is the correct way to print a floating-point number with 2 decimal places in C?
 * a. printf("%2f",num)
 * b. printf("%f",num)
 * c. printf("%2.0f",num)
 * d. printf("%.2f",num)
 * 
 * Answer: d. printf("%.2f",num)
 * Explanation: The modifier `%.2f` specifies 2 digits after the decimal point.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 9. What does break statement do in loop?
 * a. Skips the current iteration and continues with the next one
 * b. Exits from the loop entirely
 * c. Restarts the loop from beginning
 * d. Ends the program execution
 * 
 * Answer: b. Exits from the loop entirely
 * Explanation: `break` immediately terminates the innermost enclosing loop or switch statement.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 10. How to declare a for loop that iterates from 1 to 10?
 * a. for (i=0; i<=10; i++)
 * b. for (i=1; i<10; i++)
 * c. for (i=1; i<=10; i++)
 * d. for (i=0; i<=9; i++)
 * 
 * Answer: c. for (i=1; i<=10; i++)
 * Explanation: Loop starts at `i=1` and continues while `i` is less than or equal to `10` (`i<=10`).
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 11. What is the output of the following code?
 * int i = 1;
 * while (i < 5) {
 *     if (i == 3) {
 *         break;
 *     }
 *     printf("%d ", i);
 *     i++;
 * }
 * a. 1 2 3
 * b. 1 2 3 4 5
 * c. 1 2 3 4
 * d. 1 2
 * 
 * Answer: d. 1 2
 * Explanation: Iteration 1 prints 1, `i` becomes 2. Iteration 2 prints 2, `i` becomes 3. In iteration 3, `i == 3` triggers `break`, exiting the loop before printing 3.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 12. Which function is used to find length of string in C?
 * a. len()
 * b. strlen()
 * c. length()
 * d. strlength()
 * 
 * Answer: b. strlen()
 * Explanation: `strlen()` defined in `<string.h>` returns the length of a null-terminated string.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 13. How do you pass an argument by reference in C?
 * a. By using a pointer
 * b. By using a 'const'
 * c. By using an array
 * d. By using a 'void'
 * 
 * Answer: a. By using a pointer
 * Explanation: Pass-by-reference in C is simulated by passing the memory address of a variable using pointers.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 14. Which storage class allows a variable to be accessible across multiple files?
 * a. Static
 * b. Auto
 * c. Register
 * d. Extern
 * 
 * Answer: d. Extern
 * Explanation: `extern` grants global linkage, making a variable accessible across multiple translation units/files.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 15. How do you access the fifth element of an array name 'people' in C?
 * a. people [5]
 * b. people [4]
 * c. people [6]
 * d. people [0]
 * 
 * Answer: b. people [4]
 * Explanation: C uses 0-based indexing, so element 1 is `people[0]` and element 5 is `people[4]`.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 16. What will be the output of the following code?
 * int add(int a, int b) {
 *     return a + b;
 * }
 * int main() {
 *     printf("%d", add(5, 3));
 *     return 0;
 * }
 * a. 5
 * b. 15
 * c. 8
 * d. 53
 * 
 * Answer: c. 8
 * Explanation: `add(5, 3)` returns $5 + 3 = 8$, which is printed by `printf`.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 17. What does the following declaration represent?
 * int arr[3][4];
 * a. A one-dimensional array of 3 elements each containing 4 integers
 * b. A two-dimensional array with 3 rows and 4 columns
 * c. A single integer array of size 12
 * d. A pointer to an array of 4 integers
 * 
 * Answer: b. A two-dimensional array with 3 rows and 4 columns
 * Explanation: Syntax `int arr[rows][cols]` defines a 2D matrix; here, 3 rows and 4 columns.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 18. What will be output of the following code:
 * #include <stdio.h>
 * int main() {
 *     int arr[] = {1, 2, 3, 4, 5};
 *     int *p = arr + 2;
 *     printf("%d", *(p - 1));
 *     return 0;
 * }
 * a. 1
 * b. 3
 * c. 2
 * d. 4
 * 
 * Answer: c. 2
 * Explanation: `arr` points to `arr[0]` (1). `p = arr + 2` points to `arr[2]` (3). `*(p - 1)` accesses `arr[1]`, which is 2.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 19. Which of the following statements about pointer arithmetic is correct?
 * a. Incrementing a pointer moves it to the next byte in memory
 * b. Decrementing a pointer moves it to the previous element in memory
 * c. Pointers can only be incremented by 1
 * d. Pointer arithmetic depends on the data type to which the pointer points
 * 
 * Answer: d. Pointer arithmetic depends on the data type to which the pointer points
 * Explanation: Incrementing/decrementing a pointer shifts its address by `sizeof(datatype)` bytes.
 * 
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 20. What will be the output of the following code?
 * #include <stdio.h>

 * struct Date {
 *     int day;
 *     int month;
 *     int year;
 * };

 * int main() {
 *     struct Date today = {1, 8, 2024};
 *     struct Date *ptr = &today;
 *     ptr->month = 12;
 *     printf("%d-%d-%d", today.day, today.month, today.year);
 *     return 0;
 * }
 * a. 1-12-2024
 * b. 1-8-2024
 * c. 12-1-2024
 * d. 8-1-2024
 * 
 * Answer: a. 1-12-2024
 * Explanation: `ptr->month = 12` mutates `today.month` from 8 to 12. Output format `%d-%d-%d` prints `1-12-2024`.
 */

struct Date {
    int day;
    int month;
    int year;
};

int add(int a, int b) {
    return a + b;
}

// Master function to execute code snippets from Section A for verification
int main() {
    printf("--- Running Code Samples from Set 3 ---\n");

    // Q4
    printf("Q4 Output: %d\n", 5 / 2);

    // Q5
    int a5 = 5;
    printf("Q5 Output: %d\n", a5 << 1);

    // Q6
    int a6 = 5, b6 = 3;
    int c6 = (a6 > b6) ? (a6 - b6) : (a6 + b6);
    printf("Q6 Output: %d\n", c6);

    // Q11
    printf("Q11 Output: ");
    int i11 = 1;
    while (i11 < 5) {
        if (i11 == 3) {
            break;
        }
        printf("%d ", i11);
        i11++;
    }
    printf("\n");

    // Q16
    printf("Q16 Output: %d\n", add(5, 3));

    // Q18
    int arr18[] = {1, 2, 3, 4, 5};
    int *p18 = arr18 + 2;
    printf("Q18 Output: %d\n", *(p18 - 1));

    // Q20
    struct Date today = {1, 8, 2024};
    struct Date *ptr = &today;
    ptr->month = 12;
    printf("Q20 Output: %d-%d-%d\n", today.day, today.month, today.year);

    return 0;
}