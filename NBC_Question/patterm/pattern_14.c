// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}