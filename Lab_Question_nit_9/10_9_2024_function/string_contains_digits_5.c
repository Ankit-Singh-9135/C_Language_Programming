// Que 5 : Write a C program to check if a string contains only digits.
// --------

// -> create int main() function.
// -> create bool isContainsDigits(char str[]) function. this function will take string as input and will return (true if String contains only digits otherwise return false).
// -> in main function read String and pass it to isContainsDigits fuction by calling it and print the result.

// Sample input  : 12345
// Sample output : The string contains only digits.

// Sample input : 45A7
// Sample output : The string contains non-digit characters.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool contain_only_digits(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]s", &str);

    if (contain_only_digits(str))
    {
        printf("The string contains non-digit characters.");
    }
    else
    {
        printf("The string contains digit characters.");
    }
    return 0;
}
