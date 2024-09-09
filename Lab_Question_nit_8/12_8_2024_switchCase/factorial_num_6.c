// 2)write a C program to find the factorial of a given number. Take the input from the user.
// Input as :
// Enter a number : 5
// Output as :

// Factoria of 5 : 120

#include<stdio.h>
int main(){
int num,fact=1,i=1;
printf("Enter the number ");
scanf("%d",&num);
while (i<=num)
{
    fact=fact*i;
    i++;
}
printf("%d is a factorial number ",fact);


    
    return 0;
}