// 1)
// Next Multiple of 10
// Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 
// find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.
// input as 24
// output:20
// input as 36
// output:40
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    n%10>=5 && printf("%d",((n/10)+1)*10)|| printf("%d",n/10*10);
}