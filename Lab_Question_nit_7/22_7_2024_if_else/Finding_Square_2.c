// 2)Finding Square
// Write a C program by taking one integer value from the user, if the given number's last digit is smaller than 5 then print the square of that number else print that same number.

// Case-1:
// Enter a number : 12
// Output is : 144

// Case 2 :
// Enter a number : 17
// Output is : 17

// Sample Input
// Enter a number : 12
// Sample Output: 144

#include <stdio.h>
int main()
{
    int num, m, square;
    printf("Enter the number :");
    scanf("%d", &num);
    m = num % 10;
    if (m <= 5)
    {
        square = num * num;
        printf("%d the square is ", square);
    }
    else
    {
        printf("%d", num);
    }
}