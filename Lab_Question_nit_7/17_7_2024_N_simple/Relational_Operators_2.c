// 2)Relational Operators
// read 2 numbers(x,y) from user using scanf and perform below operations and print output.
// Relational Operators
// 1) x==y
// 2) x!=y
// 3) x>y
// 4) x<y
// 5) x>=y
// 6) x<=y
// input :-
// x=5 and y=8
// output:-
// x == y = 0
// x != y = 1
// x > y = 0
// x < y = 1
// x >= y = 0
// x <= y = 1
#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first num :");
    scanf("%d", &first);
    printf("Enter the second num :");
    scanf("%d", &second);
    printf("x == y= %d\n", first == second);
    printf("x != y= %d\n", first != second);
    printf("x > y= %d\n", first > second);
    printf("x < y= %d\n", first < second);
    printf(" x >= y= %d\n", first >= second);
    printf("x <= y= %d", first <= second);
}