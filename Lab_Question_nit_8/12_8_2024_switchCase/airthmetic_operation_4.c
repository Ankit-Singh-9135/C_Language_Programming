// 1) Write a C program to do a arithmetic operation on two numbers by using Switch Case. Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.
// Input as:
// ------------
// Enter num1 :10

// Enter num2 :20

// Enter operation : *

#include <stdio.h>
int main()
{
    int num1, num2;
    char ch;
    printf("Enter the num1 ");
    scanf("%d", &num1);
    printf("Enter the num2 ");
    scanf("%d", &num2);
    printf("Enter the chooies ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("Addition = %d", num1 + num2);
        break;
    case '-':
        printf(" Subatruction = %d", num1 - num2);
        break;
    case '*':
        printf(" Multipilication = %d", num1 * num2);
        break;
    case '/':
        printf("Divided = %d", num1 / num2);
        break;
    case '%':
        printf(" Modules = %d", num1 % num2);
        break;

    default: printf("Invaild number");
        break;
    }

    return 0;
}