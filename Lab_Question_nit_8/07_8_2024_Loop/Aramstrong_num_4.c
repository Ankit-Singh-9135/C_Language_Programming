// 4)Find All Armstrong Number
// Write a C program to find all Armstrong numbers between 100 to 999.
// Sample Input
// 153
// Sample Output
// 153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.
// Explanation
// A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.

// Note:
// Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

#include<stdio.h>
int main(){
// int s=0;
 for (int i = 100; i <=999; i++)
 {
     int s=0;
     for (int j = i; j>0 ; j/=10)
     {
       int r=j%10;
        s+=r*r*r;

     }
     if(s==i)
     {
        printf("%d\n",i);
     }
     
 }
 
    
    return 0;
}