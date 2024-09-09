// Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.



// Input as : 

// Enter n value : 10



// Output as :

// Sum of the natural number from 1 to 10 : 55

#include <stdio.h>
int main()
{
    int num, i=1,sum=0;
    printf("Enter the natural number ");
    scanf("%d", &num);

    while (i<=num)
    {
        sum=sum+i;
       i++;
    }

    printf("natural number %d", sum);

    return 0;
}