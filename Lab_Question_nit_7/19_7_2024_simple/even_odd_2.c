// 2)Odd Even
// Write a c Program to perform logic to check  given number is odd or even using ternary operator

// Sample Input
// 3

// Sample Output
// Odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    num%2==0?printf("odd"):printf("Even");

}