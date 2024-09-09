// 3)Assignment Operators
// ead 2 numbers(a,b) from user using scanf and perform below operations and print output.
// Assignment Operators
// 1) a += b
// 2) a -= b
// 3) a *= b
// 4) a /= b
// 5) a %= b
// input:-
// a=10 and b=5 
// output:-
// a += b: 15
// a -= b: 10
// a *= b: 50
// a /= b: 10
// a %= b: 0
#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first num :");
    scanf("%d", &first);
    printf("Enter the second num :");
    scanf("%d", &second);
    printf("a += b : %d\n", first += second);
    printf("a -= b : %d\n", first -= second);
    printf("a *= b : %d\n", first *= second);
    printf("a /= b :%d\n", first /= second);
    printf(" a %= b : %d\n", first %= second);
}
