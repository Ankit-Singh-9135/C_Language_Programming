// 1)Convert Centimeter to Inches
// Write a program that takes input from the user, take some input for centimeter and convert that into inches .
// input :- 1
// output:-0.3937
// input :- 20
// output:-7.87
#include <stdio.h>
int main()
{
    float centimeter, inches;
    printf("Enter the centimeter :");
    scanf("%f", &centimeter);
    inches = centimeter / 2.54;
    printf("convert that into inches :%f", inches);
}