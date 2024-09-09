// #include<stdio.h>
// int main(){
// int num1,num2;
// printf("Enter the num1 : ");
// scanf("%d",&num1);
// printf("Enter the num2 : ");
// scanf("%d",&num2);
// if(num1>num2){
//     printf("num1 is greatest");
// }
// if(num2>num1){
//     printf("num2 is greatest");
// }
// if(num1==num2){
//     printf("Both are equel");
// }

//     return 0;
// }

// Methord 2

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("num1 is greatest");
    }
    else if (num2 > num1)
    {
        printf("num2 is greatest");
    }
    else
    {
        printf("Both are equel");
    }

    return 0;
}