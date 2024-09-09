// 2)electricity bill
// Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.

// For the first 100 units, the rate is Rs. 3.00 per unit.
// For any additional units beyond 100, the rate is Rs. 4.50 per unit.

// Input as :
// =>Take the input from user enter the number of units consumed by the customer.
// =>Calculate the electricity bill based on the rate slabs mentioned above using the ternary operator.
// =>Display the electricity bill as output.
// Sample Input
// NO
// Sample Output
// No
#include<stdio.h>
int main(){
    float unit,bill,rate;
    printf("Enter the unit :");
    scanf("%f",&unit);
    rate=unit>=100?4.50:3.00;
    bill=unit*rate;
        printf("%f",unit);
    printf("%f",bill);
}