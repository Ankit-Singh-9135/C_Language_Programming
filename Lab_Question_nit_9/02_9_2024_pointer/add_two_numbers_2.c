// Que 2 : Write a program in C to add two numbers using pointers.
// -------

// Sample input : first number : 5
//                second number : 6

// Sample output : The sum of the entered numbers is : 11 

#include <stdio.h>
int main()
{
    int num1, num2, *p = &num1, *q = &num2,sum=0;
    printf("Enter the first number1 : ");
    scanf("%d", &num1);
    printf("Enter the second number2 : ");
    scanf("%d", &num2);
    sum=*p+*q;
    printf("The sum of the entered numbers is : %d ",sum);

    return 0;
}