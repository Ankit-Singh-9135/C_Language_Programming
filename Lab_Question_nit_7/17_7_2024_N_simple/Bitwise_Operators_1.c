// 1)Bitwise Operators
// ead 2 numbers(a,b) from user using scanf and perform below operations and print output.
// Bitwise Operators
// 1) a & b
// 2) a | b
// 3) a ^ b
// 4) ~a
// 5) a << 1
// 6) a >> 1
// Input :-
//  a=5 and b=9
// output:-
// a & b = 1
// a | b = 13
// a ^ b = 12
// ~a = 4294967290
// a << 1 = 10
// a >> 1 = 2
#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first num :");
    scanf("%d", &first);
    printf("Enter the second num :");
    scanf("%d", &second);
    printf("a & b= %d\n", first & second);
    printf("a | b= %d\n", first | second);
    printf("a ^ b= %d\n", first ^ second);
    printf("~a= %d\n", ~first);
    printf(" a << 1= %d\n", first << second);
    printf("a >> 1= %d", first >> second);
}