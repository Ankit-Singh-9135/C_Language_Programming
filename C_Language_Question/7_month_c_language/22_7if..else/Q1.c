// Finding special char or not? 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        puts("It is a not special character");
    }
    else
    {
        puts("It is a special character");
    }
}

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character :");
//     scanf("%c", &ch);
//     if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'))
//     {
//         printf("It is a special character");
//     }
//     else
//     {
//         printf("It is a not special character");
//     }
// }