// 7)Finding Positive, Negative or Zero
// Write a C program to check whether the given number is negative , positive or Zero. Take the input from the user and print appropriate statement 
// as per your input. Develop it by using control flow statement.
// Case-1
// ---------
// Input as :
// Enter the number: -1
// Output as :

// The number is negative.
// Case-2
// -------
// Input as :
// Enter the number: 5
// Sample Input
// Enter the number: -1
// Sample Output

// The number is negative.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num>0){
        printf(" %d Positive number",num);
    }else if(num<0){
        printf("%d Negative number",num);
    }else{
        printf(" zero");
    }
}