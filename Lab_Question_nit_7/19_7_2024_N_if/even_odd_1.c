// 1)Even Or Odd Check
// Develop a C program that takes an integer input and checks whether it is even or odd. Print "Even" if it's even, and "Odd" if it's odd.

// Sample Input
// Enter a Integer : 20

// Sample Output
// Even
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%2!=0){
        printf("odd");
    }if(num%2==0){
        printf("Even");
    }
}