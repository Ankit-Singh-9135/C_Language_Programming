// 1)Write a C program to display the sum of n terms of even natural numbers.
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    printf("The even numbers are :");
    for (int i = 2; i <= num * 2; i+=2)
    {
        // if (i % 2 == 0)
        // {
            sum += i;
            printf("%d ", i);
        // }
    }
       printf("\nThe Sum of even Natural Number upto 5 terms : %d", sum);

    return 0;
}