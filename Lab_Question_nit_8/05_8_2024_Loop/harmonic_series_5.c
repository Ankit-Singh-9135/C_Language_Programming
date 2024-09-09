// Write a program in C to display the n terms of a harmonic series and their sum.

// 1 -1/2 +1/3 - 1/4 + 1/5 -1/6... 1/n terms

// Test Data :

// Enter the value of n: 5

// Harmonic Series: 1 - 1/2 + 1/3 - 1/4 + 1/5

// Expected Output :

// Sum of the series: 0.783333

#include <stdio.h>
int main()
{
    int i;
    float num, s = 1;
    printf("Enter the number ");
    scanf("%f", &num);
    printf("1-");
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("1/%d+", i, s -= 1.0 / i);
        }
        else
        {

            printf("1/%d-", i, s += 1.0 / i);
        }
    }

    printf("\n\bSum of the series:=%f",s);

    return 0;
}
