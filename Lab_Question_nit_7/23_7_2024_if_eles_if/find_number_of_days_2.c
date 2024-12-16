// 2)Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program. 
// Sample Input
// Enter month number (1-12): 4
// Sample Output
// Number of days: 30

#include<stdio.h>
int main(){
int num;
printf("Enter the month : ");
scanf("%d",&num);
if(num==1||num==3||num==5||num==7||num==8||num==11||num==12){
    printf("number of day 31");
}
else if(num==2){
    printf("number of day 28/29");
}else{
     printf("number of day 30");

}
    
    return 0;
}