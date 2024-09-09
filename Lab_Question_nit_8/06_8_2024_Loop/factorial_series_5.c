// Write a C program that calculates the sum of a factorial series up to a given number of terms.



// Enter the number of terms in the factorial series: 5

// The sum of the factorial series up to 5 terms is: 153

#include<stdio.h>
int main(){
int num,fact=1,sum=0;
printf("Enter the number ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    fact=fact*i;
    sum=sum+fact;
}
printf("The factorial series= %d\nThe sum of the factorial series= %d\n",fact,sum);
    
    return 0;
}