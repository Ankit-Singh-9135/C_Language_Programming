// 3)Max Number
// Write a C program to find the biggest number between three number using the function.
// Sample Input
// Input three positive number : 13 31 19
// Sample Output
// The biggest number is 31.

// #include <stdio.h>
// void max_number(int ,int,int);
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter the number1 : ");
//     scanf("%d", &num1);
//     printf("Enter the number2 : ");
//     scanf("%d", &num2);
//     printf("Enter the number3 : ");
//     scanf("%d", &num3);

//     max_number(num1, num2, num3);
//     return 0;
// }

// void max_number(int num1, int num2, int num3)
// {
    
//     if (num1 > num2 && num1 > num3)
//     {
//         printf("max : %d", num1);
//     }
//     else if (num2 > num3)
//     {
//         printf("max : %d", num2);
//     }
//     else
//     {
//         printf("max : %d", num3);
//     }
// }

// --------------------------------------------------

// #include <stdio.h>
// void max_number(int ,int,int);
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter the number1 : ");
//     scanf("%d", &num1);
//     printf("Enter the number2 : ");
//     scanf("%d", &num2);
//     printf("Enter the number3 : ");
//     scanf("%d", &num3);

//     max_number(num1, num2, num3);
//     return 0;
// }

// void max_number(int num1, int num2, int num3)
// {
//     int max;
//     if (num1 > num2 && num1 > num3)
//     {
//         max=num1;
//     }
//     else if (num2 > num3)
//     {
//         max=num2;
//     }
//     else
//     {
//         max=num3;
//     }
//     printf("Max : %d",max);
// }


// By returning using-----------------------------------------------------------

#include <stdio.h>
int max_number(int ,int,int);
int main()
{
    int num1, num2, num3;
    printf("Enter the number1 : ");
    scanf("%d", &num1);
    printf("Enter the number2 : ");
    scanf("%d", &num2);
    printf("Enter the number3 : ");
    scanf("%d", &num3);

   printf("maximum number : %d", max_number(num1, num2, num3));
    return 0;
}

int max_number(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2 && num1 > num3)
    {
        max=num1;
    }
    else if (num2 > num3)
    {
        max=num2;
    }
    else
    {
        max=num3;
    }
   return max;
}