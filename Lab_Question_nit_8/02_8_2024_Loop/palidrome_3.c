// Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.



// Input as:

// Enter a number : 121 



// Output as:

// 121 is a Palindrome number.

#include<stdio.h>
int main(){
int num,num1,rev=0,m;
printf("Enter the number ");
scanf("%d",&num);
num1=num;
while(num){
   m=num%10;
   rev= rev*10+m;
   num=num/10;
}
if(rev==num1){
    printf("palindrom");
}else{
    printf("not palindrom");

}
    return 0;
}