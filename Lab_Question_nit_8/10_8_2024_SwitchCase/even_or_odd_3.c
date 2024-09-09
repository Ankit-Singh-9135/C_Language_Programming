// 1)Write a C program to check the number is even or odd by using Switch Case.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("Even");
        break;

    default:
        printf("odd");
        break;
    }

    return 0;
}