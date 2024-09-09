// Finding palindrome string using single string:

// #include <stdio.h>
// #include<ctype.h>
// int main()
// {
//     char s[100];
//     int i, j;
//     printf("Enter the string ");
//     gets(s);
//     for (i = 0; s[i] != '\0'; i++)
//         ;

//     for (j=0; j<i/2; j++)
//     {

//         if (tolower(s[j]) != tolower(s[i - j - 1]))
//         {
//             puts("Not a palindrome ");
//             return 0;
//         }
//     }
//     puts("palindrome");

//     return 0;
// }

// =================Using 2 strings:==============

#include <stdio.h>
#include <ctype.h>
int main()
{
    char s1[100], s2[100];
    int i, j;

    printf("Enter the string ");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
        ;/* strlen */

    for (s2[i--] = '\0', j = 0; i >= 0; i--, j++)

        s2[j] = s1[i]; /* strrev + copy */

    for (i = 0; s1[i] != '\0'; i++)

    {

        if (tolower(s1[i]) != tolower(s2[i]))
        {
            puts("Not a Palindrome");
            return 0;
        }
    }
    puts("Palindrome");
}