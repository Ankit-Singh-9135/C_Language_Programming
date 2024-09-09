// Write a C program that calculates the Highest Common Factor (HCF) of two numbers using for loops

// input as :

// Enter two numbers: 8 12

// The HCF of 8 and 12 is 4

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter 1st number : ");
//     scanf("%d", &num1);
//     printf("Enter 2nd number : ");
//     scanf("%d", &num2);

//     for (int i = num1 > num2 ? num2 : num1; i >= 1; i--)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             printf("%d is HCf", i);
//             break;
//         }
//     }

//     return 0;
// }

// ===========================method 2===============

#include <stdio.h>
int main()
{
    int num1, num2,hcf;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i<=num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf=i;
        }
    }
            printf(" HCf=%d", hcf);

    return 0;
}