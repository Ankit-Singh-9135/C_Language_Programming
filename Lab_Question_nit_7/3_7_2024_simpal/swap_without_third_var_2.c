// 2)Write a c program to swap the 2 numbers without using third variable ?
// input : 
// a = 10;
// b = 20;

// output:
// a=20;
// b=10;
#include<stdio.h>
int main(){
    int first=10,second=20;
    first=first+second;
    second=first-second;
    first=first-second;
    printf("%d%d",first,second);
}