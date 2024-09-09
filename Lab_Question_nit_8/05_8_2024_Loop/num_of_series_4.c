// Write a program in C to find the num1 of the series 1 +11 + 111 + 1111 + .. n terms.



// Test Data :

// Input the number of terms : 5

// Expected Output :

// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345

#include<stdio.h>
int main(){
int i,num,sum=0,num1=0;
printf("Enter the no ");scanf("%d",&num);
for(i=1;i<=num;i++){
       num1=num1*10+1;
       sum+=num1;
     printf("%d+",num1);
}
    printf("\nThe Sum is : %d\b",sum);
    
    return 0;
}