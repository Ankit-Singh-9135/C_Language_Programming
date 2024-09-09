// Write a C prgram that asks the user to input an integer and reverse that number and display the reverse of that given number.



// Case-1

// -------

// Input as : 

// Enter a number : 123

 

// Output as : 

// Reverse of the given number is : 321



// Case -2

// ________

// Input as :

// Enter a number : 2314



// Output as : 

// Reverse of the given number is : 4132

#include <stdio.h>
int main()
{
    int m, num, rev= 0;
    printf("Enter the  reverse number ");
    scanf("%d", &num);

    while (num > 0)
    {
        m = num % 10;    
        rev=rev*10+m;
        num = num / 10;
    }
    if(num==m);

    printf("Reverse %d", rev);

    return 0;
}