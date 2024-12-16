#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (num % 2 == 0)
        {
            printf("%d Even", num);
        }
        if (num % 2 != 0)
        {
            printf("%d odd", num);
        }
    }
}
