// Write a C program that asks the user to input an integer and count the digts and print the count of the digits.



// Input as : 

// Enter a number : 546



// Output as :

// Count of the digits is : 3

#include <stdio.h>
int main()
{
    int m, num, count = 0;
    printf("Enter the number ");
    scanf("%d", &num);

    while (num > 0)
    {
        m = num % 10;    
        count++;
        num = num / 10;
    }

    printf("sum %d", count);

    return 0;
}