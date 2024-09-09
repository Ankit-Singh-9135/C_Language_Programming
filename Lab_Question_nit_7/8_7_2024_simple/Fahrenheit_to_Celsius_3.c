// 3)Convert Fahrenheit to Celsius
// Write a C program to convert temperature from Fahrenheit to Celsius.
// Input as :
// Enter temperature in Fahrenheit: 100
// Expected output:
// 100.00 Fahrenheit is 37.78 Celsius.
// C= (F - 32) * (5.0 / 9.0)
#include<stdio.h>
int main(){
    float Fahrenheit,Celsius;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit - 32) * (5.0 / 9.0);
    printf("%f",Celsius);
}