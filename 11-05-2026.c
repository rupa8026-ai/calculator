

// #include "stdio.h";
#include "stdio.h"
#include <stdbool.h> // add this if need to use BOOL

/************************************************************************** */

// check +ve or -ve
bool isPositiveOrNegative(int num1)
/************************************************************************** */
{
    if (num1 > 0)
    {
        return true;
    }
    else if (num1 < 0 || num1 == 0)
        return false;
    else
        return false;
}

void runProgram1()
{
    int num1;
    scanf("%d", &num1);

    int result = isPositiveOrNegative(num1);
    if (result == 1)
        printf("You have entered:  %d. The number is POSITIVE\n", num1, result);
    else
        printf("You have entered:  %d. The number is NEGATIVE\n", num1, result);
}

/************************************************************************************************* */
// take marks for 5 subject and calculate grade obtain
void takeScore(int state)
{
    const char *subjects[] = {"Subject 1", "Subject 2", "Subject 3", "Subject 4", "Subject 5"};
    printf("Enter the score for %d ", subjects[state % 5]);
}

char calculteGrade(int score1, int score2, int score3, int score4, int score5)
{
    int score = score1 + score2 + score3 + score4 + score5;
    printf("\n\t-------------------using IF ELSE IF ELSE--------------");
    printf("\n\tCUMULATIVE SCORE is : %d \n", score);
    printf("\n\tAVEGRAGE SCORE: %d \n", score / 5);
    if (score >= 80)
        return 'A';
    else if (score >= 70)
        return 'B';
    else if (score >= 60)
        return 'C';
    else if (score >= 50)
        return 'D';
    else
        return 'F';
}

char calculteGradeUsingSwitch(int score1, int score2, int score3, int score4, int score5)
{
    printf("-------------------using SWITCH--------------");
    int score = score1 + score2 + score3 + score4 + score5;

    printf("\n\t-------------------using SWITCH--------------");
    printf("\n\tCUMULATIVE SCORE is : %d \n", score);
    printf("\n\tAVEGRAGE SCORE: %d \n", score / 5);

    switch (score / 10)
    {
    case 10:
    case 9:
    case 8:
        return 'A';
    case 7:
        return 'B';
    case 6:
        return 'C';
    case 5:
        return 'D';
    default:
        return 'F';
    }
}

void runProgram2()
{
    int score1, score2, score3, score4, score5 = 0;
    printf("\n[ Grade Calculator ]\n");
    printf("Enter the first score: ");
    scanf("%d", &score1);
    printf("Enter the second score: ");
    scanf("%d", &score2);
    printf("Enter the third score: ");
    scanf("%d", &score3);
    printf("Enter the forth score: ");
    scanf("%d", &score4);
    printf("Enter the fifth score: ");
    scanf("%d", &score5);

    printf("\n\tThe calculated GPA is '%c' \n", calculteGrade(score1, score2, score3, score4, score5));
    printf("\n\tThe calculated GPA using SWITCH is : '%c' \n", calculteGradeUsingSwitch(score1, score2, score3, score4, score5));
}

/************************************************************************************************* */

// Design- using operators

/************************************************************************************************* */

int main()
{
    int option = 1;
    printf("Start of the program.\nWhich program would you like to run? \nPress '1' for indetifying +ve / -ve numbers.\nPress '2' for Calculating the GPA based on score.\n");

    scanf("%d", &option);

    if (option == 1)
    {
        // run program 1
        runProgram1();
    }
    else
    {
        // run program 2
        runProgram2();
    }

    printf("End of the Program.\nThank you!!");

    return 0;
}
