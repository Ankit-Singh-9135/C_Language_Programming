// Write a C program to check the given number is perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).

// Input as :

// Enter a number :28

// Output as :

// 28 is a Perfect Number

// #include<stdio.h>
// int main(){
// int num,i=1,sum=0;
// printf("Enter the number ");
// scanf("%d",&num);
// while(i< num){
//     if(num%i==0){
//         sum=sum+i;
//     }
//     i++;
// }
// if(sum==num){
//     printf("prefect");
// }else{
//     printf("not perfect");
// }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("prefect");
    }
    else
    {
        printf("not perfect");
    }

    return 0;
}