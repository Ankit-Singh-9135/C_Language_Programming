//   ABCDE
//    ABCD
//     ABC
//      AB
//       A
//      AB
//     ABC
//    ABCD
//   ABCDE

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int k = i - 1; k <= num; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    for (int i = 2; i <= num; i++)
    {
        for (int k = i - 1; k <= num; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }

        printf("\n");
    }

    return 0;
}