// Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.

// Input as :

// Enter a three digit number : 123

// Output as :

// Sum of the digits : 6

#include <stdio.h>
int main()
{
    int m, num, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    // if(num>0) printf("-",num=-num);

    while (num )
    {
        m = num % 10;    
        sum = sum + m;
        num = num / 10;
    }

    printf("sum %d", sum);

    return 0;
}