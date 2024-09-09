// Selection sort ascending order

// #include <stdio.h>
// int main()
// {
//     int a[100], num, t;
//     printf("Enter the array size 1-100 ");
//     scanf("%d", &num);
//     printf("Enter %d element ", num);
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i <= num - 2; i++)
//     {
//         for (int j = i + 1; j <= num - 1; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 t = a[i];
//                 a[i] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
//     printf("Sorted element ");
//    for (int i = 0; i < 4; i++)
//    {
//     printf("%2d",a[i]);
//    }
   

//     return 0;
// }

// Descending order:

#include <stdio.h>
int main()
{
    int a[100], num, t;
    printf("Enter the array size 1-100 ");
    scanf("%d", &num);
    printf("Enter %d element ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= num - 2; i++)
    {
        for (int j = i + 1; j <= num - 1; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Sorted element ");
   for (int i = 0; i < num; i++)
   {
    printf("%2d",a[i]);
   }
   

    return 0;
}