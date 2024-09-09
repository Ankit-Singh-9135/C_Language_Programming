
// 5)Find the biggest
// Write a  c Program to find the biggest number among three numbers. without using loops and control flow statement
// Ex:- 1
// input :- 10 20 30
// output:- 30
// Ex:- 2
// input :- 100 20 340
// output:- 340
#include <stdio.h>
int main()
{
    int one, two, three;
    printf("Enter the first no :");
    scanf("%d", &one);
    printf("Enter the second no :");
    scanf("%d", &two);
    printf("Enter the third no :");
    scanf("%d", &three);
    one > two &&one > three &&printf("one is biggest\n");
    two > one &&two > three &&printf("two is biggest\n") || three>one && printf("three is biggest");
}