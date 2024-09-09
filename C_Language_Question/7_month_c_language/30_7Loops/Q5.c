// Printing 1..n no’s in reverse order.


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    while (n>=1)
    {
        printf("%4d", n--);
      
    }
}