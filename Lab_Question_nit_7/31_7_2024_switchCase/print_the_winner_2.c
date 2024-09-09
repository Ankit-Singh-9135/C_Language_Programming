// Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many

// points that person won by comparing the scores. Develop this program by using switch case.

#include <stdio.h>
int main()
{
    char name1[100], name2[100];
    int score1, score2;
    printf("Enter the name ");
    scanf("%s", name1);
    printf("Enter the score ");
    scanf("%d", &score1);
    printf("Enter the name ");
    scanf("%s", name2);
    printf("Enter the score ");
    scanf("%d", &score2);

    switch (score1 > score2)
    {
    case 1:
        printf("%d won with %d points", name1, (name1 - name2));
        break;
    case 0:
    {
        switch (score1 == score2)
        {
        case 1:
            printf("Both score are equel ");
            break;
        case 0:
            printf("%s won with %d points ", name2, (score2 - score1));
            break;
        }
    }
    break;
    }
}