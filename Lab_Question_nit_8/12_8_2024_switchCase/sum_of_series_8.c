// 1)Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :
// Input the number of terms : 5

// Expected Output :
// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345

#include <stdio.h>
int main()
{
    int num, num1=0, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);  //num=5
    for (int i = 1; i <= num; i++)
    {
        num1 = num1 * 10 + 1; //num1=1+11+111+1111+11111
        sum += num1;  //sum=12345
        if (i < num)
        {
            printf("%d+", num1);
        }
        else
        {
            printf("%d", num1);

            printf("\nThe Sum is : %d",sum);
        }
    }

    return 0;
}