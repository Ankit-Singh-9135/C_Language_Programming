// Using predefined functions:

#include <stdio.h>
#include <ctype.h>
int main(){
 char ch;
printf("Enter an alphabet ");
scanf("%c", &ch);
ch = tolower(ch);
if (isalpha(ch))
{
    switch (ch)

    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        puts("Vowel");
        break;

    default:
        puts("Consonant");
    }
}
else if (isdigit(ch))
{
    puts("It is a digit");
}
else
{
    puts("It is a special char");
}
}