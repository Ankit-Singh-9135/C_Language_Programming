// 1)Check Positive, Negative, or Zero
//   Write a C program to check if a number is positive, negative, or zero.
// Example
// Input as:-
// Enter a number: 5
// Output as:-
// The number is positive.
// Input as:-
// Enter a number: -3
// Output as:-
// The number is negative.

#include<stdio.h>
int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
if(num>0){
  printf("The number is positive");
}else if(num<0){
  printf("The number is negative");
}else if(num==0){
  printf("The number is zero");
}
  
  return 0;
}