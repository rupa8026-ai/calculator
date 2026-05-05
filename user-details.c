#include "stdio.h"
/**
 *
 *
 * Task: Write a program that  takes input:
First Name, Last Name / Full name
Roll number
Email
Phone number

Display the results as
Hi! (Full name), Your details are:
Name:
Roll Number:
Email:
Phone Number

1. Algorithms
2. Operations
3. Output
*/

// Define variables
char full_name[100];
int student_number[10];
char email[50];
long  phone_number[10]; // why using long long, in order to include more


int main()
{
    // Variables
    char full_name[50];
    int student_number = 0;
    char email[50];
    char phone[20];

    // 1. Full Name
    printf("Enter full name: ");
    // %[^\n] tells scanf to include spaces
    if (scanf(" %[^\n]", full_name) != 1) {
        printf("Error: Name is required.\n");
        return 1;
    }

    // 2. Student ID
    printf("Enter student identification number: ");
    if (scanf("%d", &student_number) != 1) {
        printf("Error: Valid ID is required.\n");
        return 1;
    }

    // 3. Email
    printf("Enter student email address: ");
    if (scanf("%s", email) != 1) {
        printf("Error: Email is required.\n");
        return 1;
    }

    // 4. Phone Number
    printf("Enter phone number: ");
    if (scanf("%s", phone) != 1) {
        printf("Error: Phone number is required.\n");
        return 1;
    }

    // --- Tabular Output ---
    printf("\n\nSTUDENT DATA REPORT\n");
    printf("-------------------------------------------------------------\n");
    printf("NAME\t\t\t\tID\t\t\t\tEMAIL\t\t\t\tPHONE\n");
    printf("-------------------------------------------------------------\n");
    // \t creates a tab space to align columns
    printf("%s\t\t%d\t\t%s\t%s\n", full_name, student_number, email, phone);
    printf("-------------------------------------------------------------\n");

    return 0;
}

