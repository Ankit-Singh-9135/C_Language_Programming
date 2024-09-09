// Write a C program to Sort the array in ascending order and print it.

// Input as :

// Enter array size : 6

// Enter 6 element : 4 3 5 6 2 1

// Output as :

// After sorting in ascending order :

// 1 2 3 4 5 6

#include <stdio.h>
int main()
{
    int a[20], num, t;
    printf("Enter the size of array 1 - 100 ");
    scanf("%d", &num);
    printf("Enter the element : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= num - 2; i++)
    {
        for (int j = i + 1; j <= num - 1; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
            printf("After sorting in ascending order :");
            for (int i = 0; i < num; i++)
            {
                printf("%3d", a[i]);
            }

    return 0;
}