// 4) Logical Operators
// read 2 numbers(a,b) from user using scanf and perform below operations and print output.
// Logical Operators
// 1) a && b
// 2) a || b
// 3) !a
// 4) !b
// input :-  
// a=1, b=0
// output:-
// a && b = 0
// a || b = 1
// !a = 0
// !b = 1
#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first num :");
    scanf("%d", &first);
    printf("Enter the second num :");
    scanf("%d", &second);
    printf("a && b = %d\n", first && second);
    printf("a || b = %d\n", first || second);
    printf("!a = %d\n", !first);
    printf("!b =%d\n",!second);
}

