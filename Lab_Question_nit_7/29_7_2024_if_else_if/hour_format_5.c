// 1).Write a C program that takes an hour in the 24-hour format as input and identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements. Ensure that the program also checks for invalid input, displaying an appropriate message if the entered hour is not within the valid range (0-23). Present the program with a suitable title and header for clarity. Using if else

// Input as :
// Enter the hour (24-hour format): 13

// Output as :
// It's Afternoon.

#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the hour in the 24-hour ");
    scanf("%d", &hour);
    if (hour > 0 && hour <= 12)
    {
        printf("Good morning");
    }
    else if (hour > 12 && hour <= 16)
    {
        printf("Good Afternoon");
    }
    else if (hour > 16 && hour <= 18)
    {
        printf("Good Evening");
    }
    else if (hour > 18 && hour <= 23)
    {
        printf("Good night");
    }
    return 0;
}