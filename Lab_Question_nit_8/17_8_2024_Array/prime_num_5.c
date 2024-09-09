// Write a C program to store some integers in an array and print all the prime numbers available in that array

// Input as : 1 2 3 4 5
// Output as :2 3 5

#include <stdio.h>
int main()
{
    int a[20], num;
    printf("Enter the size of array 1-100 : ");
    scanf("%d", &num);
    printf("Enter the number check prime : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("is prime no : ");
    for (int i = 0; i < num; i++)
    {
        int c = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {

            printf("%2d", a[i]);
        }
    }

    return 0;
}
