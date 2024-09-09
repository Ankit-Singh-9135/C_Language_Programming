// Finding even/odd using ternary operator:

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n value ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         puts("Even");
//     }
//     else
//     {
//         puts("Odd");
//     }
// }
// -------------------------------------
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value ");
    scanf("%d", &n);
    puts(n % 2 ? "Odd" : "Even");
}