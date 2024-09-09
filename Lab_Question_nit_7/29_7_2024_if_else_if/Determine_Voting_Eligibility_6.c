// 2)Determine Voting Eligibility using if else
// Write a C program to check if a person is eligible to vote. A person is eligible to vote if their age is 18 or older.
// Example
// Input as:-
// Enter your age: 20
// Output as:-
// You are eligible to vote.
// Input as:-
// Enter your age: 16
// Output as:-
// You are not eligible to vote.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the voting ");
    scanf("%d", &num);
    if (num >= 18)
    {
        printf("You are eligible to vote");
    }
    else if (num <= 16)
    {
        printf("You are not eligible to vote");
    }

    return 0;
}