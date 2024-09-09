// 5)Is Number Divisible ?
// Write a C program to check whether a number is divisible by 5 and 11 or not.

// Sample Input
// Enter a number : 55
// Sample Output

// 55 is divisible by both 5 and 11
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("Divisible");
    }if(num%5!=0 || num%11!=0){
        printf(" Not Divisible");
    }
}