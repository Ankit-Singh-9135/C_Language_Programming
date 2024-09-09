// Finding alphabet or not using if..else:

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z'|| ch>='A'&&ch<='Z')
        puts("It is Alphabet");
    else puts(" Not an  Alphabet");

    return 0;
}