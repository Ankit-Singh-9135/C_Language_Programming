// Que 4 : Write a C program to find the biggest number between three number using the function.
// -------

// -> create int main() function.
// -> create int biggestNumber(int a, int b, int c) function.
// -> in main function read three numbers as input and call biggestNumber(int a, int b, int c) function. here biggestNumber(int a, int b, int c) function will perform the operation and will return biggest number as result to the main function.
// -> in main function catch the biggest number which is return by biggestNumber(int a, int b, int c) function print the result.

// Sample input : Input three positive number : 13 31 19

// Sample output : The biggest number is 31.

#include <stdio.h>
void biggestNumber(int a, int b, int c)
{
    if (a == b&&a == c)
    {
        printf("Both are equal ");
    }
    else if (a > b && a > c)
    {
        printf("%d is biggest", a);
    }
    else if (b > c)
    {
        printf("%d is biggest", b);
    }
    else
    {
        printf("%d is biggest", c);
    }
}
int main()
{
    int num1, num2, num3;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    printf("Enter the third number : ");
    scanf("%d", &num3);
    biggestNumber(num1, num2, num3);

    return 0;
}