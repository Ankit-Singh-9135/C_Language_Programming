// Que 7 : Write a C program to check if a given year is a leap year or not using function.
// ------

// -> create int main() function
// -> create bool isLeapYear(int year) function. this function will take year as parameter suppied by main function and will check the year is leap year or not. if year is leap then return true otherwise false.

// Sample input : Enter a year: 2024

// Sample output : 2024 is a leap year.

#include<stdio.h>
#include<stdbool.h>
bool leap_year(int year){
if(year%4==0 && year%100!=0 || year%400==0){
    return true;
    }else{
    return false;
    }

}

int main(){
int year;
printf("Enter the year : ");
scanf("%d",&year);

if(leap_year(year)){
    printf("leap year : %d",year);
}else{
    printf("not leap year : %d",year);
}  
    return 0;
}