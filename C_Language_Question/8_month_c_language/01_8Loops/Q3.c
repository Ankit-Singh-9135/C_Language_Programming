// Reverse no:
// #include <stdio.h>
// int main()
// {
//     int n, rev = 0, r;
//     printf("Enter the number ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         r = n % 10;
//         rev = rev * 10 + r;
//         n = n / 10;
//     }
//     printf("Reverse no is %d", rev);

//     return 0;
// }

// Method2:

#include <stdio.h>
int main()
{
    int n, rev = 0, r;
    printf("Enter the number ");
    scanf("%d", &n);
    if(n<0) printf("-",n=-n);
    do{
        r = n % 10;
        printf("%d",r);
        n = n / 10;
    } while (n);

    return 0;
}
