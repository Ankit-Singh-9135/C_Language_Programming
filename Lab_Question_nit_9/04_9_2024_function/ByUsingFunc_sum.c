#include <stdio.h>
int natural_sum(int); // function declartation
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int sum = natural_sum(num);
    printf("Sum : %d", sum); // function calling
    return 0;
}

int natural_sum(int num)
{ // function defination
  // int sum = num * (num + 1) / 2;   //method 1


    int sum = 0;                    //method 2
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}