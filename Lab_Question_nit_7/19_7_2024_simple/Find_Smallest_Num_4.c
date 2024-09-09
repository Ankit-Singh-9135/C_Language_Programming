// 4)Find Smallest Number
// Write a c Program to find the Smallest number among three different number using ternary operator

// Sample Input
// 10
// 20
// 5

// Sample Output
// 5 is smallest
#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter the 1st number :");
    scanf("%d", &first);
    printf("Enter the 2nd number :");
    scanf("%d", &second);
    printf("Enter the 3rd number :");
    scanf("%d", &third);
    first<second && first<third?printf("%d  is smallest",first):
    second<first && second<third?printf("%d  is smallest",second):
    printf("%d  is smallest",third);
}



