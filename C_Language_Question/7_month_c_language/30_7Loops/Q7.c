// Finding 1..n even , odd numbers sum

#include <stdio.h>
int main()
{
    int n, i = 1, s = 0;
    printf("Enter the number ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            if (i % 2 != 0)
                s = s + i;
            i++;
        }
        printf("odd Sum=%d", s);
    }
    printf("Even Sum=%d", s);
}
