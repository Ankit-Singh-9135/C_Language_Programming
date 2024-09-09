// 3)Write a c program to print the pattern

//     1

//     2  3

//     4  5  6

//     7  8  9 10

//    11 12 13

//    14 15

//    16

#include <stdio.h>
int main()
{
    int num, n = 1;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2 + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-3d",n);
            n++;
        }
        printf("\n");
    }
    for (int j = num / 2; j >= 1; j--)
    {
        for (int t = 1; t <= j; t++)
        {
            printf("%-3d",n++);
        }
        printf("\n");
    }

    return 0;
}