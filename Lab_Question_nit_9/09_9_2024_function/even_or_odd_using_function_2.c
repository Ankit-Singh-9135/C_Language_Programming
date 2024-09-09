// Que 2 : Write a program in C to check if a given number is even or odd using the function.
// -------

// -> create int main() function.
// -> create bool isEvenOrOdd(int n) function.
// -> in main function read one number and call isEvenOrOdd(int n) function. here isEvenOrOdd(int n) function will perform the operation and will return true or false to the main function.
// -> in main function catch the boolean result and according that print the proper message.

// Sample input : Input any number : 5

// Sample output : The entered number is odd.

#include <stdio.h>
#include <stdbool.h>
bool isEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (isEvenOrOdd(num))
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}