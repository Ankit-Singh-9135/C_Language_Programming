// Input make of three subject of a student caclu average and printf result According to following
//  Avg > = 75 =>Distinction
// 75>Avg>50=good
// otherwise=>fail

#include <stdio.h>
int main()
{
    int num1, num2, num3, avg;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    printf("Enter the num3 : ");
    scanf("%d", &num3);
    avg = (num1 + num2 + num3) / 3;
    if (avg > 75)
    {
        printf("Distinction");
    }
    else if (avg > 50)
    {
        printf("Good");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}