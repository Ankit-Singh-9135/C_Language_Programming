// Que 1 : Write a program in C to find the maximum number between two numbers using a pointer.
// -------

// Sample input : first number : 5
//                second number : 6

// Sample output : 6 is the maximum number.

#include <stdio.h>
int main()
{
    int num1, num2, *p = &num1, *q = &num2;
    printf("Enter the first number1 : ");
    scanf("%d", &num1);
    printf("Enter the second number2 : ");
    scanf("%d", &num2);
    if (*p == *q)
    {
        printf("Both are equal");
    }
    else if (*p > *q)
    {
        printf("%d is the maximum number1 ", *p);
    }
    else
    {
        printf("%d is the maximum number2", *q);
    }

  return 0;
}