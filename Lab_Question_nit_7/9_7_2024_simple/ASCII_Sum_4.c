// 4)ASCII Sum
// Write a C program to take two character input from the user and print the ASCII value of that two character and display its sum.
// Enter a character: a b
// ASCII value of a is : 97
// ASCII value of b is : 98
// ASCII sum of a & b is : 195
#include <stdio.h>
int main()
{
    char a, b;
    printf("ASCII value of a is :");
    scanf("%c", &a);
    printf("ASCII value of b is :");
    scanf(" %c", &b);
    printf("ASCII sum of a & b is : %d\n", a + b);
}