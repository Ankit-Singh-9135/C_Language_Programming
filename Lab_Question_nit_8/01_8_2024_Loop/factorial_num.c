// write a C program to find the factorial of a given number. Take the input from the user.



// Input as :

// Enter a number : 5



// Output as :

// Factoria of 5 : 120


#include <stdio.h>
int main()
{
    long num; int i=1,fact=1;
    printf("Enter the natural number ");
    scanf("%ld", &num);

    while (i<=num)
    {
        fact=fact*i;
       i++;
    }

    printf("factorial %d", fact);

    return 0;
}
