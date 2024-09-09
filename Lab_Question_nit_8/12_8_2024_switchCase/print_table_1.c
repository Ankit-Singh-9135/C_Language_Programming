// 1)Write a C program that prompts the user to enter a number and then prints the multiplication table for that number using a     (while loop).
#include<stdio.h>
int main(){
int num,i=1;
printf("Enter the table number ");
scanf("%d",&num);
while (i<=10)
{
    printf("%d * %d = %d\n",i,num,i*num);
    i++;
}

    
    return 0;
}