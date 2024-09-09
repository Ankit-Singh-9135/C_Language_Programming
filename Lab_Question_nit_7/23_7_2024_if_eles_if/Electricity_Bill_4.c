// 4)Electricity Bill
// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition: 

// -> For first 50 units Rs. 0.50/unit 

// -> For next 100 units Rs. 0.75/unit 

// -> For next 100 units Rs. 1.20/unit 

// -> For unit above 250 Rs. 1.50/unit 

// An additional surcharge of 20% is added to the bill. 



// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.  

// Sample Input
// Enter the electricity units consumed: 40
// Sample Output
// Total electricity bill: Rs. 24.00

#include<stdio.h>
int main(){
float unit,bill ,total;
printf("Enter the electricity units consumed:");
scanf("%f",&unit);
if(unit<=50){
    bill=unit*0.50;
}else if(unit<=150){
    bill=(50*0.50)+(unit-50)*0.75;
}else if(unit<=250){
    bill=(50*0.50)+(100*0.75)+(unit-150)*1.20;
}else{
    bill=(50*0.50)+(100*0.75)+(150*1.20)+(unit-250)*1.50;
}
 total=bill+bill*20/100;

 printf("Total electricity bill: Rs.%0.2f",total);   
    return 0;
}