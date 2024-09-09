
// Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'||ch >= 'a' && ch <= 'z'){
        if(ch >= 'A' && ch <= 'Z') ch+=32;
    switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
           printf("consonant");
        }
    }
        else
        {
            printf("It is not an alphabet");
        }

    return 0;
}
