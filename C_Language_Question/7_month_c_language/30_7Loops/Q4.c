// Printing 1..n even numbers.

// #include <stdio.h>
// int main()
// {
//     int i = 1, n;
//     printf("Enter the number ");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%4d", i);
//         }
//             i++;
//     }
// }
// -------------------------------------- 

#include <stdio.h>
int main()
{
    int i = 2, n;
    printf("Enter the number ");
    scanf("%d", &n);
    while (i <= n)
    {
        
            printf("%4d", i);
        
            i+=2;
    }
}