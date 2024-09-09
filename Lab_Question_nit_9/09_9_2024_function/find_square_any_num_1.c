// Que 1 : Write a program in C to find the square of any number using the function.
// -------

// -> create int main() function.
// -> create int square(int n) function.
// -> in main function read one number and call square(int n) function. here square(int n) function will perform the operation and will return the square of given number as result to the main function.
// -> in main function catch the square of number which is calculate and return by square(int n) fuction and print it.

// Sample input : Input any number for square : 20

// Sample output : The square of 20 is : 400

#include <stdio.h>
int square(int num)
{
    int square = num * num;
    return square;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The square of %d is :%d", num, square(num));
    return 0;
}