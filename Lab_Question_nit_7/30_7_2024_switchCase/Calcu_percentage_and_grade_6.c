// Using switch statement write a C Program to take the value from the user as input marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer. Calculate percentage and grade according to the following: Percentage >= 90% : Grade A, Percentage >= 80% : Grade B, Percentage >= 70% : Grade C, Percentage >= 60% : Grade D, Percentage >= 40% : Grade E, Percentage < 40% : Grade F, Using switch statement.

// [Note:-Take All the values as Integer]
#include <stdio.h>
int main()
{
    int che, bio, math, com, phy, total;
    int avg;
    printf("Enter Chemistry ");
    scanf("%d", &che);
    printf("Enter Biology ");
    scanf("%d", &bio);
    printf("Enter Mathematics ");
    scanf("%d", &math);
    printf("Enter Computer ");
    scanf("%d", &com);
    printf("Enter Physics ");
    scanf("%d", &phy);
    total = che + bio + math + com + phy;
    avg = total / 5;
     printf("Total : %d \n",total);
     printf("Avg : %d \n",avg);

    switch (avg/10)//90/10=09 99/10=9 89/10=8 80/10=8
    {
        case 9:printf("Grade A"); break;
        case 8:printf("Grade B"); break;
        case 7:printf("Grade C"); break;
        case 6:printf("Grade D"); break;
        case 5:printf("Grade E"); break;
        default :printf("Grade F"); break;

    }
    return 0;
}