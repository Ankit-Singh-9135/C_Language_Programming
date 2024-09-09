// 1)Express as Sum Of prime
// Write a program in C to check whether a number can be expressed as the sum of two prime.

// Sample Input
// Input as: 16
// Sample Output
// Output :

// 16 = 3 + 13

// 16 = 5 + 11

// #include <stdio.h>

// int main()
// {

//     int i, n, d, c, c1;
//     printf("Enter a number ");
//     scanf("%d", &n);

//     for (i = 2; i <= n/2; i++)
//     {
//         c = 0, c1 = 0, d = n - i;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//                 break;
//             }
//         }
//         for (int j = 2; j < d; j++)
//         {
//             if (d % j == 0)
//             {
//                 c1++;
//                 break;
//             }
//         }
//         printf("c1=%d\n",c1);
//         if (c == 0 && c1 == 0)
//         {
//             printf("%d = %d + %d \n", n, i, d);
//         }
//     }

//     return 0;
// }

// =======================================

// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//    int n, i, j, k, c1,c2;

//    printf("Enter a number");
//    scanf("%d",&n);

//    for(i=1;i<=n/2;i++)
//    {
//        for(j=1;j<=n;j++)
//        {
//            c1=c2=0;
//            if(i+j==n)
//            {
//                for(k=1; k<=i || k<=j ;k++)
//                {
//                    if(i % k ==0)
//                    c1++;
//                    if(j % k ==0)
//                    c2++;
//                }
//                if(c1 == 2 && c2 == 2)
//                printf("%d + %d = %d\n",i,j,i+j);
//            }
//        }
//    }
//     return 0;
// }

// ***************** Aman's Code **************************

#include <stdio.h>

int main()
{
    
    
    return 0;
}