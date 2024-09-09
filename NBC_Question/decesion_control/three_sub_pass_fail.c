#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("Enter the 1st sub no : ");
    scanf("%d", &a);
    printf("Enter the 2st sub no : ");
    scanf("%d", &b);
    printf("Enter the 3st sub no : ");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    if (avg > 60)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}