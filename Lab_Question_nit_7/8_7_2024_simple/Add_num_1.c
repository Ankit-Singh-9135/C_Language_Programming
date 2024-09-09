// 1)Add 1st and Last
// Write a c program to take input of 3 digit number from the user , and add the 1st digit and last digit of that given number
// input :345
// output :8
#include<stdio.h>
int main(){
    int num,first,second;
    printf("Enter the number :");
    scanf("%d",&num);//345
    first=num%10;//5
    num=num/10; //n=34
    second=num%10; //4
    num=num/10; // n=3
    
    printf("%d",first+num);


}