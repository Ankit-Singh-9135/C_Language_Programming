// 1)Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :
// Input the number of terms : 5

// Expected Output :
// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345

#include <stdio.h>
int main()
{
    int i, num, sum = 0, num1 = 0;
    printf("Enter the no ");
    scanf("%d", &num);

    // ************ Method - 1 ********************
    // for (i = 1; i < num; i++) // 1+11+111+1111+
    // {
    //     num1 = num1 * 10 + 1;
    //     sum += num1;
    //     printf("%d+", num1);
    // }
    // num1 = num1 * 10 + 1;
    // sum += num1;
    // printf("%d", num1);
    // printf("\nThe Sum is : %d", sum);

    // ************ Method - 2 ********************
    for (i = 1; i <= num; i++) // 1+11+111+1111+
    {
        num1 = num1 * 10 + 1;
        sum += num1;
        if (i < num)
        {
            printf("%d+", num1);
        }
        else
        {
            printf("%d", num1);
            printf("\nThe Sum is : %d", sum);
        }
    }

//     return 0;
}