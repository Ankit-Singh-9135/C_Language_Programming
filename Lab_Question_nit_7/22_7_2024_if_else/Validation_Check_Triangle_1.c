// 1)Validation Check For Triangle
// Program to take a value from the user as input all sides of a triangle and check whether the triangle is valid or not. Using if-else.
// Case-1
// -----------
// Enter the lengths of the sides of the triangle:
// Side 1: 5
// Side 2: 7
// Side 3: 9
// The triangle is valid.
// Case-2
// ------------
// Enter the lengths of the sides of the triangle:
// Side 1: 3
// Side 2: 4
// Side 3: 9

// The triangle is not valid.
// Sample Input
// Case-1
// -----------
// Enter the lengths of the sides of the triangle:
// Side 1: 5
// Side 2: 7
// Side 3: 9

// Sample Output
// The triangle is valid.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the number1 :");
    scanf("%d", &num1);
    printf("Enter the number2 :");
    scanf("%d", &num2);
    printf("Enter the number3 :");
    scanf("%d", &num3);
    if (num1 + num2 >= num3 && num1 + num3 >= num2 && num2 + num3 >= num1)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
}
