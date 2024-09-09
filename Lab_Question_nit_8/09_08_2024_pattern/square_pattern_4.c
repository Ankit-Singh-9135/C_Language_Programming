// Write a C program to print square pattern program

//    1   3   5   7  9

//   11 13 15 17 19

//   21 23 25 27 29

//   31 33 35 37 39

#include <stdio.h>
int main()
{
    int num, i, j,a=1;
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