// 3)Armstrong number
// Write a C program to find all the Armstrong number in beetween 100 to 10000 by using 2 different  user defined function and one main function to display all the Armstrong number in the given range.
// Sample Input
// from:100
// upto:1000
// Sample Output
// Armstrong numbers between 100 and 10000 are:

// 153

// 370

// 371

// 407

// 1634

// 8208

// 9474
// Explanation
// Armstrong number Example : 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include<stdio.h>
#include<math.h>

int Armstrong_number(num);
int main(){
    int num;
    printf("Enter the Armstrong number : ");

    Armstrong_number(num);
    return 0;
}

int Armstrong_number(int num){
    int r,temp,sum=0;
    temp=num;
    for (int i = 100; i < 1000; i++)
    {
        r=num%10;
        // sum=sum*10+r;
        sum+=pow(r,num);
        num=num/10;
    }
   return (sum==num);
    
}
