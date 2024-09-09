// 1)Write a C program to enter week number and print day name of week and use if-else-if statements.
// Example :-1
// Intput
// Enter week number (1-7): 3
// Output
// Wednesday
// Example :-2
// Intput
// Enter week number (1-7): 9
// Output
// Invalid input! Please enter week number between 1 and 7.
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the week number ");
    scanf("%d", &day);

    if (day == 1)
    {
        puts("sunday");
    }
    else if (day == 2)
    {
        puts("monday");
    }
    else if (day == 3)
    {
        puts("Tuesday");
    }
    else if (day == 4)
    {
        puts("Wednesday");
    }
    else if (day == 5)
    {
        puts("Thursday");
    }
    else if (day == 6)
    {
        puts("Friday");
    }
    else if (day == 7)
    {
        puts("saturday");
    }else{
        puts("Invaild day");
    }
}