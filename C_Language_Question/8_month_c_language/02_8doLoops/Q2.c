// No to text conversion:

#include <stdio.h>
void main()
{
    long m, n, rev = 0;
    int c = 1, d, f = 0;
    printf("Enter a no ");
    scanf("%ld",&n);
    if (n < 0)
        printf("-", n = -n);

    m = n;
    while (m)
    {
        rev = rev * 10 + (m % 10);
        m = m / 10;
    } /* rev */
    do
    {

        switch (rev % 10)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        }
        printf(" ");
        rev = rev / 10;
    } while (rev != 0);
    while (n != 0 && n % 10 == 0)
        printf("Zero ",n = n / 10);
}
