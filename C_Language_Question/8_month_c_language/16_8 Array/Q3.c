// Bubble sort ascending order:

// #include <stdio.h>
// int main()
// {
//     int a[100], num, temp;
//     printf("Enter the array size 1-100 :");
//     scanf("%d", &num);
//     printf("Enter %d elements ", num);
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i <= num - 2; i++)
//     {
//         for (int j = 0; j <= num - i - 2; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     printf("Sorted element ");
//     for (int i = 0; i < num; i++)
//     {
//         printf("%4d", a[i]);
//     }

//     return 0;
// }

// Descending order:====================

#include <stdio.h>
int main()
{
    int a[100], num, temp;
    printf("Enter the array size 1-100 :");
    scanf("%d", &num);
    printf("Enter %d elements ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= num - 2; i++)
    {
        for (int j = 0; j <= num - i - 2; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted element ");
    for (int i = 0; i < num; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}