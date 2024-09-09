
// Finding 1..n even, odd numbers sum:

#include <stdio.h>
int main()
{
    int n, es = 0, os = 0;
    printf("Enter the no ");
    scanf("%d", &n);
    while (n >= 1)
    {
        if (n % 2 == 0)
            es = es + n;
        else
            os = os + n;
        n--;
    }
    printf("Even sum=%d, Odd sum=%d", es, os);

    return 0;
}