// Finding +Ve / -Ve / 0 using ternary operator:

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n value ");
//     scanf("%d", &n);

//     if (n > 0)
//     {
//         puts("+Ve");
//     }
//     else if (n < 0)
//     {
//         puts("-Ve");
//     }
//     else
//     {
//         puts("Zero");
//     }
   

// }

// --------------------------------

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value ");
    scanf("%d", &n);

    puts(n > 0 ? "+Ve" : n < 0 ? "-Ve": "Zero");
}