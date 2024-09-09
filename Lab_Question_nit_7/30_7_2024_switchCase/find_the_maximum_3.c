
// Write a C program to find the maximum between two numbers using Switch statement.

#include<stdio.h>
int main(){
int num1,num2;
printf("Enter the num1 ");
scanf("%d",&num1);
printf("Enter the num2 ");
scanf("%d",&num2);


switch (num1>num2)
{
case 1: printf("%d is big number",num1);
       break;
case 0:
{
    switch(num1==num2)
    {
        case 1: printf("Both are equal...");break;
        case 0: printf("%d is big number",num2);break;
    }

}
break;

}
 
    return 0;
}
