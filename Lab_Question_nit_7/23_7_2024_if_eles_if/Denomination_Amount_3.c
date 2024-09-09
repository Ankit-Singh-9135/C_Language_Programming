// 3)Denomination Amount
// Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program

// Sample Input
// Enter the amount: 1275
// Sample Output
// Rs. 500 notes: 2

// Rs. 100 notes: 2

// Rs. 50 notes: 1

// Rs. 20 notes: 1

// Rs. 10 coins: 0

// Rs. 5 coins: 1

// Rs. 2 coins: 0

// Rs. 1 coins: 0


#include<stdio.h>
int main(){
int amount;
printf("Enter the amount :");
scanf("%d",&amount);
if(amount/500>=0){
    printf("Rs. 500 notes:%d\n",amount/500);
    amount=amount%500;
}

if(amount/100>=0){
    printf("Rs. 100 notes:%d \n",amount/100);
    amount=amount%100;
}
if(amount/50>=0){
    printf("Rs. 50 notes:%d \n",amount/50);
    amount=amount%50;
} 
if(amount/20>=0){
    printf("Rs. 20 notes:%d \n",amount/20);
    amount=amount%20;
}   
if(amount/10>=0){
    printf("Rs. 10 coins:%d \n",amount/10);
    amount=amount%10;
}  
if(amount/5>=0){
    printf("Rs. 5 coins:%d \n",amount/5);
    amount=amount%5;
}  
if(amount/2>=0){
    printf("Rs. 2 coins:%d \n",amount/2);
    amount=amount%2;
}  
if(amount/1>=0){
    printf("Rs. 1 coins:%d \n",amount/1);
    amount=amount%1;
}  
}
