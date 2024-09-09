
// Finding weekday name:

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a week day no between 1-7 ");
    scanf("%d", &n);
    switch (n)
    {

    case 1:
        puts("Sunday");
        break;

    case 2:
        puts("Monday");
        break;

    case 3:
        puts("Tuesday");
        break;

    case 4:
        puts("Wednesday");
        break;

    case 5:
        puts("Thrusday");
        break;

    case 6:
        puts("Friday");
        break;

    case 7:
        puts("Saturday");
        break;

    default:
        puts("Invalid_day");
    }
}