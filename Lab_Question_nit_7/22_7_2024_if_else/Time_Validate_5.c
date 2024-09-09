// 5)Time Validate
// Program to take the hours and minutes as input by the user and the show that whether it is AM or PM using if-else statement
// Case-1:

// Enter the hours (in 24-hour format): 10

// Enter the minutes: 30
// The time is 10:30 AM
// Case-2:

// Enter the hours (in 24-hour format): 19

// Enter the minutes: 45
// The time is 07:45 PM

// Sample Input
// Enter the hours (in 24-hour format): 10

// Enter the minutes: 30
// Sample Output
// The time is 10:30 AM
#include <stdio.h>
int main()
{
    int hour, minutes;
    printf("Enter the hour :");
    scanf("%d", &hour);
    printf("Enter the minutes :");
    scanf("%d", &minutes);
    if (hour >= 0 && hour <= 11)
    {
        printf("%d:%d am", hour, minutes);
    }
    else
    {
        hour = hour - 12;
        printf("%d:%d pm", hour, minutes);
    }
}
