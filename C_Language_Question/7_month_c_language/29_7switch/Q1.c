// Finding vowel / consonant:

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter on alphabet ");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z')
//         ch += 32;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         switch (ch)
//         {

//         case 'a':
//         case 'e':
//         case '1':
//         case 'o':
//         case 'u':
//             puts("Vowel");
//             break;

//         default:
//             puts("Consonant");
//         }
//     }

//     else
//         puts("It is not alphabet");
// }

// ------------------------------------------------

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
    else if (ch >= '0' && ch <= '9')
    {
        puts("It is a digit");
    }
    else
    {
        puts("It is a special char");
    }
}