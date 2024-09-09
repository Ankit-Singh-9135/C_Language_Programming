#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     printf("Before if : %d\n", i);
    //     if (num % i == 0)
    //     {
    //         count++;
    //     }
    //     printf("After if : %d\n", i);
    // }
    // if (count == 2)
    // {
    //     printf("Prime");
    // }
    // else
    // {
    //     printf("not prime");
    // }

    int ankit = 1;  //100 -> 1 and 19 -> 8
    for (int i = 2,j=1; i <= num / 2; i++,j++)
    {
        printf("Before if : %d\n", j);
        if (num % i == 0)
        {
            ankit = 0;
            break;
        }
        printf("After if : %d\n", j);
    }
    if (ankit)
    {
        printf("Prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}