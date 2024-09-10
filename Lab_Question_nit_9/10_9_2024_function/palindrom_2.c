// Que 2 : Write a C program to check given String is palindrom or not using function.
// -------

// -> create int main() function.
// -> create bool isPalindromString(char str[]) function. this function will check given string is palindrom or not and return (true if the string is a palindrome, false otherwise).
// -> in main function read one string input and call isPalindromString function. and print the result.

// Sample input : radar
// Sample output : The string is a palindrome.

// Sample input : hello
// Sample output : The string is not a palindrome.

#include <stdio.h>
#include <stdbool.h>

bool isPalindromString(char str[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++);

    for (j = 0; j < i / 2; j++)
    {

        if (str[j] !=str[i - j - 1])
        {
            return false;
        }
    }
return true;
}
int main()
{
    char s[100];
    printf("Enter the string ");
    gets(s);
   if(isPalindromString(s)){
            printf("palindrome");
   }else{
    printf("not palindrome");
   }

    return 0;
}