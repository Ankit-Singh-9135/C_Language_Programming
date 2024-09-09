// Write a C program that modifies a given array in a wave pattern and prints the resulting array. The wave pattern requires that the previous element in the array must be greater than the next element, and the next element must be greater than the previous element.

// For example, consider the input array arr = {1, 2, 3, 4, 5}

// resulting in the array 2 1 4 3 5.

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[20], n, i;
    printf("Enter arrray of size 1-100 : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :    ", n);

    for (i = 0; i < n; i++)
    {
        // printf("element - %d :  ", i);
        scanf("%d", &a[i]);
    }

    // printf("The values store into the array are : ");
    // for (int j = 0; j < n; j++)
    // {
    //     printf("%4d", a[j]);
    // }

    printf("\n pairs in an array  : ");

    for (int i = 0; i < n - 1; i += 2)
    {
        if (a[i] < a[i + 1])
        {
            if (a[i] < a[i + 1])
            {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}