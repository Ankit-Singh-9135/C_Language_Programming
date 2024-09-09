// 12345
// 1234
// 123
// 12
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 2; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}