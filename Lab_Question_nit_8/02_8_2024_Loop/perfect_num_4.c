// Write a C program to check the given number is a perfect number or not?

// If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

// 6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

// 6 is a perfect number.

#include <stdio.h>
int main()
{
    int num, i = 1, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    printf("Sum of multiples = ");
    while (i < num)
    {
        if (num % i == 0)
        {
            printf("%d + ",i);
            sum = sum + i;
        }
        i++;
    }
    if (sum == num)
    {
        printf(" = %d",sum);
        printf("\n%d is a perfect number or its sum = %d ", num, sum);
    }
    else
    {
        printf("%d is a not perfect number", num);
    }

    return 0;
}