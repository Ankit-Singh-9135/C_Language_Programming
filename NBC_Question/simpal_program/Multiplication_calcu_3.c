// #include<stdio.h>
// int main(){
// int a=10,b=15,c;
// c=a-b;
// printf("Multiplication = %d",c);

//     return 0;
// }

// ---------scanf------------
#include <stdio.h>
int main()
{
    int num1, num2, mult;
    printf("Enter the number1 : ");
    scanf("%d", &num1);
    printf("Enter the number2 : ");
    scanf("%d", &num2);
    mult = num1 * num2;
    printf("Multiplication = %d", mult);

    return 0;
}