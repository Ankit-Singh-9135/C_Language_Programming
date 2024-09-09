// 1) Write a C program that takes two integers as input from the user using scanf, calculates their sum, substraction, multiplication, and division, and then prints these values.

// intput -
// Enter 1st number
// 20
// Enter 2nd number
// 10
// output
// addition = 30
// multiplication = 200
// substraction = 10
// division = 2
#include <stdio.h>
int main()
{
    int first, second, sum, substraction, multiplication, division;
    printf("Enter the first number :");
    scanf("%d", &first);
    printf("Enter the second number :");
    scanf("%d", &second);
    sum = first + second;
    printf("sum :%d\n", sum);
    substraction = first - second;
    printf("substraction :%d\n", substraction);
    multiplication = first * second;
    printf("multiplication :%d\n", multiplication);
    division = first / second;
    printf("division :%d", division);
}