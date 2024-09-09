// 2)Sum of Natural Number
// Write a C program to calculate the sum of natural numbers from 1 to a given positive integer by the user,take the input from the user by using scanf().
// Input as :
// Enter a positive integer: 10
// Expected output:
// The sum of natural numbers from 1 to 10 is: 55
#include <stdio.h>
int main()
{
    int natural_num, sum;
    printf("Enter a positive integer :");
    scanf("%d", &natural_num);
    sum = natural_num * (natural_num + 1) / 2; // formula
    printf("sum of natural numbers :%d", sum);
}