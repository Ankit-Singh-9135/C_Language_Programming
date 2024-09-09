// 3) write a  c program to add each digit of a given two digit number?
// input:	67
// output: 13
#include<stdio.h>
int main(){
    int num,first,second;
    scanf("%d",&num);
   first =num%10;
    second=num/10;
    printf("%d",first+second);
}