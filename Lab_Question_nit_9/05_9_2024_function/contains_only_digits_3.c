// 3)Contains only digits.
// Create a function to check if a string contains only digits.
// Sample Input
// Input:

// String: 12345

// Input:

// String: 45A7
// Sample Output
// Output:

// The string contains only digits

// Output:

// The string contains non-digit characters.

#include <stdio.h>
#include <string.h>
void contain_only_digits(char[]);
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]s", &str);

    contain_only_digits(str);
    return 0;
}
void contain_only_digits(char str[])
{


    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
        }
        else
        {
            printf("The string contains non-digit characters.");
            return;
        }
        
    }
    printf("The string contains digit characters.");
}
// ==========================================


// #include <stdio.h>
// #include <string.h>
// void contain_only_digits(char[]);
// int main()
// {
//     char str[50];
//     printf("Enter the string : ");
//     scanf("%[^\n]s", &str);

//     contain_only_digits(str);
//     return 0;
// }
// void contain_only_digits(char str[])
// {
//     int len = strlen(str);
//     len--;
//     while (len)
//     {
//         if (str[len] >= '0' && str[len] <= '9')
//         {
//         }
//         else
//         {
//             printf("The string contains non-digit characters.");
//             return;
//         }
//         len--;
//     }
//     printf("The string contains digit characters.");
// }


// ----------------------------------------------

