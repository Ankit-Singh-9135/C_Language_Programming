// 3)Divisible Or Not
// Write a program in C to take two integers as input and print whether the first one is divisible by the second one using if-else statement.

// Input as :
// Enter the first integer: 20
// Enter the second integer: 5

// Output as:

// 20 is divisible by 5
// Sample Input
// Enter the first integer: 20

// Enter the second integer: 5
// Sample Output
// 20 is divisible by 5

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);

    if(num1%num2==0){
        printf("%d is Divisible %d",num1,num2);
    }else{
          printf("%d not Divisible %d",num1,num2);
      
    }

}