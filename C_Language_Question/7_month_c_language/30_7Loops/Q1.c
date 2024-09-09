// Eg. Printing 1..n numbers.
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the number ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%-4d  ", i);
        // printf("%4d", i++);
        i++;
    }
}