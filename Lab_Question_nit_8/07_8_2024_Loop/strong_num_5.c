// 5)Strong Number
// Write a C program to find all strong numbers between 1 to 500.

// Sample Input
// input =145
// Sample Output
// 145 is Strong number
// Explanation
// A Strong number whose sum of each digit's factorial is the number itself. example : 145 is an strong number. Explanation : 1!=1 4!=24 5!=120 So the sum of each digit factorial is 1+24+120 is equal to given input number that is 145.

// Note:
// Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

#include <stdio.h>
int main()
{
    int num, m, sum = 0, fact, num1;
    printf("Enter the no ");
    scanf("%d", &num);
    num1 = num;
    while (num>0)
    {
        m = num % 10;
        fact = 1;
        while (m > 0)
        {
            fact = fact * m;
            m--;
        }
        sum = sum + fact;

        num = num / 10;
    }
        if (num1 == sum)
        {
            printf("strong");
        }
        else
        {
            printf("not strong");
        }
    

    return 0;
}