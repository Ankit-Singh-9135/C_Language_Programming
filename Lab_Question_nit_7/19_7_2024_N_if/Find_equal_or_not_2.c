// 2)Find equal or not equal
// Create a C program that reads two integers from the user and prints "Equal" if they are equal, and "Not Equal" otherwise.

// Sample Input
// Enter a number : 10 10

// Sample Output
// Equal
#include<stdio.h>
int main(){
    int first,second;
    printf("Enter the first number :");
    scanf("%d",&first);
     printf("Enter the second number :");
    scanf("%d",&second);
    if(first==second){
        printf("equal");
    }if(first!=second){
        printf("not equal");
    }
}