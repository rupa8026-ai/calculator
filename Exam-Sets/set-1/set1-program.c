/**
 * =======================================================================================================================
 * KATHMANDU UNIVERSITY - End Semester Examination (June/July 2024)
 * =======================================================================================================================
 * 
 */

/**
 * Question 1: Functions, Components, and Prototypes [3+1]
    A. Function:
        A function in C is a self-contained block of statements 
            Statements --- > that performs a specific, well-defined task. 
        Functions promotes -->  modularity, 
                        -- > reusability, 
                        --> easier debugging.

    4 Main Components of a Function:
        Return Type: Specifies the type of value the function returns to the caller (e.g., int, float, void).
        Function Name: A unique identifier following standard rules for C variables.
        Parameter List (Arguments): Variables declared inside parentheses that receive values passed from the caller.
        Function Body: The block of code enclosed in {} that defines what the function does.
        Syntax Example:
            int printCurrentDatetime(Datetime date){return Datetime.now;}
            int is a Return Data Type, 
            Datetime date=  Parameter /Arguments
            return Datetime.now; =  function body -- code block enclosed within {}
            function returns current datetime from a datetime.now function property. 

    
. Function Prototypes & Importance:
Eg: 
int printCurrentDatetime(); // this guy is the prototype
.... down the line after main 

void main(){}
printCurrentDatetime(){// return current datetime; }


A function prototype (or function declaration) tells the compiler about a function's name, return type, and parameter list before its actual definition appears.

Syntax: return_type function_name(data_type1, data_type2);

Importance:
Type Checking: Helps the compiler verify if the correct number and types of arguments are passed during a function call.
Forward Declaration: Allows functions to be called before their full definitions are written in the source code.
Prevents Compilation Errors: Prevents implicit function declaration warnings or unintended return type casting.


-----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------

Question 2: Recursive Fibonacci Series [4]
Mental Model:

The Fibonacci series is 0,1,1,2,3,5,8,13,…
Base cases: Fib(0)=0, Fib(1)=1.
Recursive step: Fib(n)=Fib(n−1)+Fib(n−2).

 */


 #include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main_fibomacci() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

 

/**
 * Question 3: Operator Associativity [2+2]
    A. What is Operator Associativity?
        Operator Associativity specifies the evaluation order when an expression contains multiple operators of the same precedence level. It can be either Left-to-Right or Right-to-Left.

    B. How it affects expression evaluation:
        When operators have identical precedence, associativity determines which operator executes first to prevent ambiguity.
        Left-to-Right Example: Subtraction (-) is left-associative.
            int x = 10 - 5 - 2; // Evaluated as (10 - 5) - 2 = 5 - 2 = 3

        Right-to-Left Example: Assignment (=) is right-associative.
            a = b = 5; // Evaluated as b = 5 first, then a = b


 */

 /**
  * Question 4: Ternary Operator vs. Logical/Bitwise AND [2+2]
    Ternary Operator (?:):
        The ternary operator is C's shorthand decision-making operator that takes three operands.

    Syntax: condition ? expression_if_true : expression_if_false;

    Example: int max = (a > b) ? a : b;

    Logical AND (&&) vs. Bitwise AND (&):
        Feature	            Logical AND (&&)                                                |        Bitwise AND (&)
        Operation	        Operates on boolean truth values (non-zero = true, 0 = false).	| Operates on individual bits of integers.
        Short-circuiting	Yes (if left operand is false, right is not evaluated).	        | No (evaluates both operands always).
        Result	            Yields 1 (true) or 0 (false).	                                | Yields a bit-masked numerical value.
        Example	            (5 > 2) && (3 > 1) → 1	                                        | 5 & 3 (101 & 011) → 1 (001)
  */


  int getGreaterNumber_T(int a, int b){
    return a>b ? a:b; // Ternary Operator 
  }


  /** 
   * Question 5:
   * Explain the concept of passing an array to a function in C with example. 
   * Explain how Memory Allocation is done for Multidimensional Arrays
   * 
   *    Computer memory (RAM) is strictly linear/one-dimensional. C stores multidimensional arrays in contiguous memory blocks using Row-Major Order.
        For a 2D array int arr[2][3], all elements of Row 0 are stored sequentially, followed immediately by Row 1:
        Memory Address Order: arr[0][0]→arr[0][1]→arr[0][2]→arr[1][0]→arr[1][1]→arr[1][2]

        Formula for address of element arr[i][j] with C columns and element size S:
                [ Address=Base Address+(i×C+j)×S ] 
   */

   /**
    * Question 6: 
    * Write a program to check whether a number is palindrome or not.
    * Palindrome number remains the same when its digits are reversed.
    */
//    #include <stdio.h>

int main_palindrome() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the digits
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
 * Question 7: Write a program to  count the total number of prime numbers stored in an array. 
 */

//  #include <stdio.h>
// Helper function to check prime status
int isPrime(int num) {
    // number must be +ve 
    if (num <= 1) return 0;

    // if i is 1, we return 1 or else we return 1
    // when i not 1, i.e from 2 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main_isPrime() {
    int n, primeCount = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    printf("Total number of prime numbers in the array: %d\n", primeCount);

    return 0;
}

/**
 * -----------------------------------------------------------------------------------------------------------------------
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 8: Memory Allocation, Identifiers, & Static Specifier [4 + 2 + 2]
 * 
 * A. Static Memory Allocation vs. Dynamic Memory Allocation:
 *    Feature                 | Static Memory Allocation                | Dynamic Memory Allocation
 *    ------------------------|-----------------------------------------|-----------------------------------------
 *    Allocation Time         | Handled at compile time.                | Handled at runtime.
 *    Memory Region           | Allocated on Stack or Data segment.     | Allocated on the Heap.
 *    Size Flexibility        | Fixed size; cannot change during exec.  | Resizable using functions like realloc().
 *    Functions Used          | Normal declarations (e.g., int arr[5]);| malloc(), calloc(), realloc(), free().
 *    Example                 | int x = 10;                             | int *p = (int*)malloc(5 * sizeof(int));
 * 
 * B. Variable Declaration & Rules for Identifiers:
 *    - Variable Declaration: Tells the compiler the variable's name and data type, instructing it to reserve memory space.
 *      Syntax: data_type variable_name;
 * 
 *    - Rules for Identifiers:
 *      1. Must begin with a letter (a-z, A-Z) or an underscore (_).
 *      2. Can contain digits (0-9), but cannot start with a digit.
 *      3. C is case-sensitive (e.g., 'Sum' and 'sum' are treated as different identifiers).
 *      4. Reserved C keywords (e.g., int, float, switch, return) cannot be used as variable names.
 *      5. Special characters or spaces are not allowed (except underscore _).
 * 
 * C. 'static' Storage Class Specifier:
 *    - Variables declared with 'static' preserve their value across multiple function calls throughout program execution.
 *    - Lifetime: Retained until the entire program terminates.
 *    - Default Value: Automatically initialized to 0 if not explicitly defined.
 *    - Scope: Local to the block/function where declared (if defined inside a function).
 */

// Demo helper for static storage class
void staticCounterDemo() {
    static int count = 0; // Initialized only once, preserves value between calls
    count++;
    printf("Static count value = %d\n", count);
}

int main_q8_demo() {
    printf("Executing Static Specifier Demo:\n");
    staticCounterDemo();
    staticCounterDemo();
    staticCounterDemo(); // Will output 1, 2, 3 consecutively
    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 9: if-else Ladder vs. Switch Case & Binary/Decimal Converter [4 + 4]
 * 
 * A. if-else Ladder vs. switch-case:
 *    Feature                 | if-else Ladder                          | switch-case
 *    ------------------------|-----------------------------------------|-----------------------------------------
 *    Expression Evaluation   | Evaluates ranges, conditions, floats,   | Evaluates discrete integer or character 
 *                            | and logical/relational expressions.     | constants only.
 *    Execution Flow          | Sequential line-by-line evaluation.     | Jump tables created by compiler (faster).
 *    Fall-through            | Not applicable.                         | Requires explicit 'break;' statements to 
 *                            |                                         | avoid fall-through into next cases.
 * 
 *    Syntax Comparison:
 *      if (condition1) { ... }                 switch (choice) {
 *      else if (condition2) { ... }                case 1: ... break;
 *      else { ... }                                default: ...
 *                                              }
 * 
 * B. Binary to Decimal & Decimal to Binary Converter Program
 *    0001 to 4 bit binary to decimal 1
 */

void binaryToDecimal() {
    long long binary;
    int decimal = 0, i = 0, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;
    while (temp != 0) {
        remainder = temp % 10;
        decimal += remainder * (1 << i); // Using bit-shift equivalent of 2^i
        temp /= 10;
        i++;
    }
    printf("Decimal equivalent: %d\n", decimal);
}

void decimalToBinary() {
    int decimal, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;
    if (temp == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main_q9_converter() {
    int choice;
    printf("\n--- Number Base Converter ---\n");
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            binaryToDecimal(); 
            break;
        case 2: 
            decimalToBinary(); 
            break;
        default: 
            printf("Invalid choice selection!\n");
    }
    return 0;
}


/**
 * -----------------------------------------------------------------------------------------------------------------------
 * -----------------------------------------------------------------------------------------------------------------------
 * Question 10: Employee Structure & Salary Sorting [8]
 * 
 * Requirements:
 * 1. Define 'struct Employee' with name, emp_id, basic_salary, allowance, net_salary.
 * 2. Function to input information for user-specified N employees using structure pointers.
 * 3. Function to display sorted employee records by net_salary in ascending order.
 * 4. Demonstrate passing structure pointers and accessing members with arrow operator (->).
 */

struct Employee {
    char name[50];
    int emp_id;
    int basic_salary;
    int allowance;
    int net_salary;
};

// Function prototypes passing structure pointers
void inputEmployees(struct Employee *empPtr, int n);
void displaySortedEmployees(struct Employee *empPtr, int n);

int main_q10_employees() {
    int n;
    printf("\nEnter total number of employees: ");
    scanf("%d", &n);

    // Array of structures
    struct Employee employees[n];

    // Input data passing array base pointer
    inputEmployees(employees, n);

    // Display sorted records passing array base pointer
    displaySortedEmployees(employees, n);

    return 0;
}

// Function to input details using structure pointer arithmetic & arrow operator ->
void inputEmployees(struct Employee *empPtr, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", (empPtr + i)->name);
        printf("Employee ID: ");
        scanf("%d", &(empPtr + i)->emp_id);
        printf("Basic Salary: ");
        scanf("%d", &(empPtr + i)->basic_salary);
        printf("Allowance: ");
        scanf("%d", &(empPtr + i)->allowance);

        // Calculate net salary using arrow operator ->
        (empPtr + i)->net_salary = (empPtr + i)->basic_salary + (empPtr + i)->allowance;
    }
}

// Function to sort employees by net_salary ascending and print
void displaySortedEmployees(struct Employee *empPtr, int n) {
    struct Employee temp;

    // Bubble sort using pointer dereferencing
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((empPtr + j)->net_salary > (empPtr + j + 1)->net_salary) {
                temp = *(empPtr + j);
                *(empPtr + j) = *(empPtr + j + 1);
                *(empPtr + j + 1) = temp;
            }
        }
    }

    printf("\n=========================================================\n");
    printf(" EMPLOYEE DETAILS (SORTED BY NET SALARY ASCENDING)\n");
    printf("=========================================================\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %-12s | Basic: %d | Allowance: %d | Net: %d\n",
               (empPtr + i)->emp_id,
               (empPtr + i)->name,
               (empPtr + i)->basic_salary,
               (empPtr + i)->allowance,
               (empPtr + i)->net_salary);
    }
}