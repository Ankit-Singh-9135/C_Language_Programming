// Password generation:

#include <stdio.h>
int main()
{
    char user[20], pass[20], ch;
    int i = 0;

    printf("Enter user id ");
    scanf("%s", user);
    printf("Enter pass word ");
    while ((ch = getch()) != 13)
    {
        printf("*");
        pass[i] = ch;
        i++;
    }
    pass[i] = '\0';

    printf("\nShow pass word[y/n] ");
    // flushall();
    scanf("%c", &ch);
    if (ch == 'y' || ch == 'Y')
        printf("Ur pass word %s", pass);
    else
        printf("Pass word protected");

    getch();
}