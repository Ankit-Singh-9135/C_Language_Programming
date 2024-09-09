// 4)Swap Number
// Write a program in C to swap two numbers using a function.
// Sample Input
// Input 1st number : 2

// Input 2nd number : 4
// Sample Output
// Before swapping: n1 = 2, n2 = 4

// After swapping: n1 = 4, n2 = 2

#include <stdio.h>
void swap_number(int, int);
int main()
{
    int num1, num2;
    printf("Enter the number1 : ");
    scanf("%d", &num1);
    printf("Enter the number2 : ");
    scanf("%d", &num2);
    swap_number(num1, num2);
    return 0;
}

void swap_number(int num1, int num2)
{
    int temp;
    printf("Before swapping : %d %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping : %d %d", num1, num2);
}