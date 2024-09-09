// Write a C program to check if a given number is a strong number. A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself. For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and determine whether it is a strong number or not.



// Input as:

// Enter a number : 145 



// Output as:

// 145 is a strong number.

#include<stdio.h>
int main(){
int num,fact=1,temp,r,sum=0;
printf("Enter the number ");
scanf("%d",&num);
temp=num;
while(num!=0){
    r=num%10;
    while(r!=0){
    fact=fact*r;
    r--;
    }
    sum=sum+fact;
    num=num/10;
    
}
if(temp==sum){
    printf("%d is a strong number ",temp);
}else{
    printf("%d is a not strong number",temp);

}
    
    return 0;
}