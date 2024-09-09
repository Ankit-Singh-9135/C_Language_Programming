// 3)Divisible Or Not
// Write a c Program to check the given number is divisible by 5 and 11 or not divisible
 
// Sample Input
// 55

// Sample Output
// 55 is Divisible by both 5 and 11
#include<stdio.h>
int main(){
   int num;
   printf("Enter the number :");
   scanf("%d",&num);
   num%5==0 && num%11==0?printf("Divisible"):printf("not");
}