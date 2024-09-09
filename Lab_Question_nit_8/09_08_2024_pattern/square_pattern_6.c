// Write a C program to print square pattern program 



//   2  4  6   8   10

// 12 14 16 18 20

// 22 24 26 28 30

// 32 34 36 38 40

// 42 44 46 48 50

#include <stdio.h>
int main()
{
    int num, i, j,a=2;
    printf("Enter the number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("%d ", a);
            a+=2;
        }
        printf("\n");
    }

    return 0;
}