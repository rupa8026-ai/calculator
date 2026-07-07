
#include <stdio.h>

/* --- 1. GLOBAL / EXTERN STORAGE CLASS --- */
/* Declared outside functions. Accessible everywhere. */
int global_student_count = 0;

/* --- FUNCTION DECLARATIONS (Protypes for all 4 types) --- */
/* Type 1: No arguments, no return value */
void input_student_data(void);

/* Type 2: Arguments, no return value */
void calculate_and_display(float m1, float m2, float m3);

/* Type 3: No arguments, returns a value */
int get_student_id(void);

/* Type 4: Arguments, returns a value */
char determine_grade(float percentage);

int main()
{
    /* --- 2. AUTOMATIC (local) STORAGE CLASS --- */
    /* Default for local variables. Created on stack, destroyed on exit. */
    auto int total_students = 5;

    printf("=== STUDENT RESULT MANAGEMENT SYSTEM ===\n");

    /* Execute the program for 5 students */
    for (int i = 0; i < total_students; i++)
    {
        printf("\nProcessing Record for Student #%d:\n", i + 1);
        input_student_data();
    }

    return 0;
}

/* --- FUNCTION DEFINITIONS --- */

/* Type 1: No arguments, no return value */
void input_student_data(void)
{
    /* --- 3. REGISTER STORAGE CLASS --- */
    /* Hint to CPU to store loop counters/frequent variables in CPU registers */
    register int i;

    float marks[3];
    int id = get_student_id(); /* Calls Type 3 function */

    printf("Enter marks for 3 subjects (out of 100):\n");
    for (i = 0; i < 3; i++)
    {
        printf("  Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    /* Pass data to Type 2 function */
    calculate_and_display(marks[0], marks[1], marks[2]);
}

/* Type 3: No arguments, returns a value */
int get_student_id(void)
{
    static int system_id_generator = 1001; /* Incrementing ID tracker */
    return system_id_generator++;
}

/* Type 2: Arguments, no return value */
void calculate_and_display(float m1, float m2, float m3)
{
    /* --- 4. STATIC STORAGE CLASS --- */
    /* Preserves its value across multiple function calls */
    static int call_counter = 0;

    call_counter++; /* Track execution count */
    global_student_count++;

    float total = m1 + m2 + m3;
    float percentage = total / 3.0f;
    char grade = determine_grade(percentage); /* Calls Type 4 function */

    printf("\n--- Result Summary ---\n");
    printf("Total Marks: %.2f / 300.00\n", total);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Final Grade: %c\n", grade);
    printf("[System Log] Calculation function called %d time(s).\n", call_counter);
    printf("[System Log] Total students processed globally: %d\n", global_student_count);
}

/* Type 4: Arguments, returns a value */
char determine_grade(float percentage)
{
    if (percentage >= 85.0)
        return 'A';
    if (percentage >= 70.0)
        return 'B';
    if (percentage >= 50.0)
        return 'C';
    return 'F';
}