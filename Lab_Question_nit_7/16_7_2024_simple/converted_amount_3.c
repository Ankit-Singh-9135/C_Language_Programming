// 3)Write a program that converts an amount of money from one currency to another. The user should input the amount in the source currency and the exchange rate. Calculate the equivalent amount in the target currency and print it.
// formula : ( converted_amount = amount * exchange_rate )
// input :
// Enter the amount in the source currency: 4
// Enter the exchange rate (source to target): 2
// output :
// Equivalent amount in the target currency: 8.00
#include<stdio.h>
int main(){
    float source_currency,exchange_rate,converted_amount;
    printf(" Enter the amount in the source currency :");
    scanf("%f",&source_currency);
    printf("Enter the exchange rate (source to target) :");
     scanf("%f",&exchange_rate);
     converted_amount= source_currency * exchange_rate;
     printf("the equivalent amount in the target currency and print it :%f",converted_amount);
}