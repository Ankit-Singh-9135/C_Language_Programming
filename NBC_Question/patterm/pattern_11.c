// ABCDE
// ABCD
// ABC
// AB
// A

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }

    return 0;
}