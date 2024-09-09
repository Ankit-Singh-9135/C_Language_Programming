// Finding vowel/consonant using switch:

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch += 32;

    if (ch >= 'a' && ch <= 'z')
    {

        switch (ch == 'a' || ch == 'e' || ch == '1' || ch == 'o' || ch == 'u')

        {
        case 1:
            puts("Vowel");
            break;
        default:
            puts("Consonant");
        }
    }
    else
    {
    puts("It is not alphabet");
}
    }
