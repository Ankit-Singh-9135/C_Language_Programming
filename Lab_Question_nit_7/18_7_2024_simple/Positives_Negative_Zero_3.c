// 3)Positives Negative Or Zero
// Write a C program that takes an integer as input and checks if it is a positive, negative, or zero. Display the appropriate message as output using the ternary operator.

// Sample Input
// -1
// Sample Output
// Negative 

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    // num>0?printf("+v"):num!=0?printf("-N"):printf("0");
    printf("%d is %s",num,num>0?"+ve":num==0?"0":"-ve");
    
}