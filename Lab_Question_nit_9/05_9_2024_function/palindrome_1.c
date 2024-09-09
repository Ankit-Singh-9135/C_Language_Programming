// 1)Palindrome.
// Implement a function to check if a given string is a palindrome.
// Sample Input
// Input: radar

// Input: hello
// Sample Output
// Output: The string is a palindrome.

// Output: The string is not a palindrome.

#include <stdio.h>
void palindrome_num(char []);
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    palindrome_num(str);

    return 0;
}
void palindrome_num(char str[])
{
    // char str[50];
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
        ;
    for (j = 0; str[j] != '\0'; j++)
    {
        if (str[j] != str[i - j - 1])
        {
            puts("Not a palindrome ");
            return ;
        }
    }
    puts("palindrome");
}


