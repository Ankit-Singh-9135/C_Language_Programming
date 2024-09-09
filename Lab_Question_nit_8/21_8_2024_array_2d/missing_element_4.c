// Write a C program to find and print all the missing elements that are not present in a given array. Given an array of integers, your task is to identify and print all the numbers that are missing within a specified range.

// For example:

// given the input array arr = [1, 4, 7, 12, 17]
// [1, 4, 7, 12, 17]
//  0  1  2   3   4

// Expected output as : 2 3 5 6 8 9 10 11 13 14 15 16

#include <stdio.h>
int main()
{
    int a[100], num, t;
    printf("Enter array of size 1-100 : ");
    scanf("%d", &num);
    printf("Enter %d element : ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            for (int j = a[i]+1; j < a[i+1]; j++)
            {
                printf("%d ",j );
            }
        }
    }

    return 0;
}