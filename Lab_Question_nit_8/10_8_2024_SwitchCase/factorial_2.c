// 2)write a C program to find the factorial of a given number. Take the input from the user.
// Input as :
// Enter a number : 5
// Output as :

// Factoria of 5 : 120

#include<stdio.h>
int main(){
int num,fact=1;
printf("Enter the number ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    fact=fact*i;
}
printf("%d",fact);

    
    return 0;
}