// Lower to upper / upper to lower:

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char ch;
//     printf("Enter  a character ");
//     ch = getchar();
//     if (islower(ch))
//         ch = toupper(ch);
//     else
//         ch = tolower(ch);
//     printf("char=%c", ch);
// }
// --------------------------------------------- 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter  a character ");
    ch = getchar();
    if (ch>='a'&& ch<='z')
        ch = ch-32;
    else if (ch>='A'&& ch<='Z')
        ch = ch+32;
    printf("char=%c", ch);
}