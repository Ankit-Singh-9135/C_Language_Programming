// Write a program in C to display the multiplication table for a given integer. 



// Test Data :

// Input the number (Table to be calculated) : 15

// Expected Output :

// 15 X 1 = 15

// ...

// ...

// 15 X 10 = 150

#include<stdio.h>
int main(){
int i,num;
printf("Enter the number ");scanf("%d",&num);
for(i=1; i<=10; i++)

    printf("%d * %d = %d\n",num,i,num*i);

    
    return 0;
}