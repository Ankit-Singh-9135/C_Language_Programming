// Write a C program to do a arithmetic operation on two numbers by using Switch Case. Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.

// Input as:

// ------------

// Enter num1 :10

// Enter num2 :20

// Enter operation : *

// O/P as :

// ---------

// Multiplication is :200

#include <stdio.h>
#include<math.h>
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
        printf("%d Additional",(num1+num2));
        break;
    case '-':
        printf("%d substraction",(num1 - num2));
        break;
    case '*':
        printf("%d multipal",(num1 * num2));
        break;
    case '/':
        printf("%d Division",(num1 / num2));
        break;
    case '%':
        printf("%d modulas",(num1%num2));
        break;

  
    }

    return 0;
}