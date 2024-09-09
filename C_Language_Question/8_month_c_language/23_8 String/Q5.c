// Magic / Scan set characters:

// #include <stdio.h>
// int main()
// {
//     char s[100];
//     printf("Enter the string ");
//     scanf("%[^\n]", s);
//     printf("U entered %s ", s);

//     return 0;
// }
// ====================================
// #include <stdio.h>
// int main()
// {
//     char s[100];
//     printf("Enter the string ");
//     scanf("%[^@#$*]", s);
//     printf("U entered %s ", s);

//     return 0;
// }
// ========================================
// #include <stdio.h>
// int main()
// {
//     char s[100];
//     printf("Enter the string ");
//     scanf("%[^0-9]", s);
//     printf("U entered %s ", s);

//     return 0;
// }
// =====================================
#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter the string ");
    scanf("%[^a-z 0-9]", s);
    printf("U entered %s ", s);

    return 0;
}