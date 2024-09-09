// 2)Write a C program to check the given number is a prime number or not.
// Input as :

// Enter a number : 13

// Expected Output :

// 13 is a Prime Number.

#include<stdio.h>
int main(){
int num,c=0,i=1;
printf("Enter the check prime no ");
scanf("%d",&num);
while(i<=num){
    if(num%i==0){
        c++;
    }
    i++;
}
if(c==2){
    printf("prime");
}else{
    printf("not prime");
}

    
    return 0;
}