// 5)square of any number
// Write a program in C to find the square of any number using the function.
// Sample Input
// Input any number for square : 20
// Sample Output
// The square of 20 is : 400.00

#include<stdio.h>
float square_any_number(float);
int main(){
float num;
printf("Enter any number for square : ");
scanf("%f",&num);

    printf("%f",square_any_number(num));
    return 0;
}
float square_any_number(float num){
    int square;
    square=num*num;
    return square;
}