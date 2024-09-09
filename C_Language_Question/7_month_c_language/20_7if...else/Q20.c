// Find the given char is lower or not
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character :");
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//         puts("Lower case char");

//     return 0;
// }

// ------------------------------

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character :");
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//         puts("Lower case char");
//     if (ch < 'a' || ch > 'z')
//         puts(" Not a Lower char");

//     return 0;
// }
// ----------------------------------- 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
        puts("Lower case char");
    if (ch < 97 || ch > 122)
        puts(" Not a Lower char");

    return 0;
}
