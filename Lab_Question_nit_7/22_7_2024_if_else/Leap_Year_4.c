// 4)Leap Year
// Design a program that takes a year as input and determines whether it is a leap year or not. Consider the leap year rules (divisible by 4, but not divisible by 100 unless also divisible by 400) and use if-else statements to provide the appropriate output.

// Input as :

// Enter year : 2020
// Output as :

// It is a leap year.
// Sample Input
// Enter year : 2020
// Sample Output
// It is a leap year.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);
    // if (year % 100 == 0) // digine by pankaj sir
    // {
    //     if (year % 400 == 0)
    //     {
    //         printf("leap year");
    //     }
    //     else
    //     {
    //         printf("not leap year");
    //     }
      

    // }   else if (year % 4 == 0)
    // {
    //     printf("leap year");
    // }
    // else
    // {
    //     printf("not leap year");
    // }
  

    if(year%4==0 && year%100!=0 || year%400==0){
        printf("leap year");
    }else{
        printf("not leap year");
    }
}