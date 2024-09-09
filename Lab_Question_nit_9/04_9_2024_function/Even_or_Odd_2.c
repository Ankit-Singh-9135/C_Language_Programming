// 2)Even or Odd
// Write a program in C to check if a given number is even or odd using the function.
// Sample Input
// Input any number : 5
// Sample Output
// The entered number is odd.

#include <stdio.h>
void even_odd(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    even_odd(num);
    return 0;
}

void even_odd(int num)
{
    // if (num % 2 == 0)
    // {
    //     printf("Even");
    // }
    // else
    // {
    //     printf("odd");
    // }
    // num%2==0?printf("Even"):printf("odd");
    printf("%s", num % 2 == 0 ? "even" : "odd");
}