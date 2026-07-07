/**
 *      Write a program to develop a Student Result Management System that performs the following tasks:
            Accept marks of a student in three subjects.
            Calculate the total marks and percentage.
            Determine the grade based on the percentage.
            Keep track of the number of times the result calculation function is called.
            Demonstrate the use of different storage classes.
            Complete this using all four types of functions and all four types of storage class.

            Now make the following observations on the above program
            Execute the program for 5 students.
            Observe the behavior of the static variable after every function call.
            Explain why register variables cannot have their address taken using &.
            Compare local (auto) and global (extern) variables.

            1. start
            2. declare variables

            3. Repeat global subject count
            prompt user input
            save user input

            prompt user input
            save user input

            prompt user input
            save user input

            4. Calculate marks and percentage
            5. Determine Grade based on percentage
            5. Determinig Result Function Call


 */

#include <stdio.h>

/* --- 1. GLOBAL / EXTERN STORAGE CLASS --- */
// Declare global variable -- this is class scoped variable
/* Declared outside functions. Accessible everywhere. */
int global_subject_count = 3;

/* --- 2. GLOBAL FUNCTIONS --- */
// prompt user input and save
void input_user_prompt();

/* --- 3. take all score process them and display Arguements, with void --- */
void calculate_and_display(int score1, int score2, int score3);

/* Type 4: Arguments, returns a value */
char calculate_grade_by_percentage(float percentage);

void input_user_prompt()
{
    register int i;

    float scores[global_subject_count]; // array of scores
    // i = global_subject_count;

    printf("Enter marks for %d subjects (out of 100):\n", global_subject_count);
    for (i = 0; i < global_subject_count; i++)
    {
        printf("\n Start Point I = %d: ", i);
        printf("\nCourse =  %d: ", i + 1);
        printf("\nAfter adding i + 1 for course = %d: \n", i + 1);
        scanf("\n%f", &scores[i]); // save the user input score in the array
        printf("\nsaved score in array %f:", scores[i]);
    }
}

int main()
{
    printf("Yuhuu");
    input_user_prompt();
    // printf("Initial global student course count is %d :", global_subject_count);

    calculate_and_display();

    return 0;
}


// function implementation 
void calculate_and_display(int score1, int score2, int score3){
    // since we need to track how many times this function is invoked, lets use the static variable to store the value of invocation 
    static int function_invocation_count= 0;
    function_invocation_count++; // add 1 to the counter 


    // lets calculate 
    float score_cumulative = score1 + score2 + score3;
    float score_percentage= score_cumulative / 0.3f;
    float score_grade = calculate_grade_by_percentage(score_percentage);
}
// function to calculate grade based on the score percentage value 
char calculate_grade_by_percentage(float score_percentage){
 
}