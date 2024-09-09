// 6)Check Prime Number
// Write a program in C to check whether a number is a prime number or not by using the function.
// Sample Input
// Input a positive number : 5
// Sample Output
// The number 5 is a prime number.

#include <stdio.h>
void prime_number(int);
int main()
{
    int num;
    printf("Enter a positive number : ");
    scanf("%d", &num);

    prime_number(num);
    return 0;
}
void prime_number(int num)
{
    int c = 0;
    if (num == 1)
    {
        printf("%d not prime/not composit number",num);
        return ;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                c++;
            }
        }
    }
    if (c == 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is a not prime number", num);
    }
}