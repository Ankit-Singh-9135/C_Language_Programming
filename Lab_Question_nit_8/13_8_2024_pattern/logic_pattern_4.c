// Write a logic for the following pattern in c?

//     0

//     1 0

//     0 1 0

//     1 0 1 0

//     0 1 0 1 0
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2 == 0)
            {
                printf("%3d", 0);
            }
            else
            {
                printf("%3d", 1);
            }
        }
        printf("\n");
    }

    return 0;
}