#include "stdio.h"
#include "windows.h"

/**
 * Create a traffic light simulation that runs in (default) every 5 seconds or the gap user wants to
// if user input is 5, the process runs with 5 second gap, first it prints yello, then red and then green the gap between the colors are 5 seconds, unless the user press another key, we keep running the simulation.
// We cannot use any control if else do while or anything
 */


// Define variables
int timeout_interval = 5;

int main()
{
    printf("*********Traffic Light Simulation*********\n");
    printf("How fast would you like to simulate (seconds)? ");
    scanf("%d", &timeout_interval);

    printf("Starting simulation with %d second gaps...\n", timeout_interval);
    printf("(Press Ctrl+C to stop)\n\n");

    // Start the process at state 0
    simulate(timeout_interval, 0);

    return 0;
}

void simulate(int seconds, int state)
{
    // Array of colors (Yellow -> Red -> Green)
    const char *colors[] = {"YELLOW", "RED", "GREEN"};

    // Print current state
    printf("Light is: [%s]\n", colors[state % 3]);

    // Wait for the user-defined interval
    // Note: On Windows use Sleep(seconds * 1000);
    sleep(seconds);

    // Recursive call: This starts the function over again
    // State + 1 moves to the next color in the array
    simulate(seconds, state + 1);
    system("cls");
}

