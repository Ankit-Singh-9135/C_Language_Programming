// 3)All Prime Number
// Write a program in C to find the prime Numbers Between the given range 100 to 999
// Sample Input
// -
// Sample Output
// -
// Explanation
// -

// Note:
// Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

#include <stdio.h>
int main()
{
    int num, i, j, c ;
    // printf("Enter the number ");
    // scanf("%d", &num);
    for (i = 1; i <= 999; i++)
    {
        c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
    
    if (c == 0)
    {
        printf("%4d  ", i);
    }
    }
    return 0;
}