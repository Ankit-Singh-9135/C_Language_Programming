// 5)Palindrome String Check the given String is palindrome or not.
// Sample Input
// Input as : 

// Enter a String :  radar

// Input as : 

// Enter a String : alfha

// Sample Output
// Output as : 
// radar is a palindrome string.
// Output as : 

// radar is a not palindrome string.

#include <stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i, j;
    printf("Enter the string ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++);
   
    for (j=0; j<i/2; j++)
    {

        if (tolower(s[j]) != tolower(s[i - j - 1]))
        {
            puts("Not a palindrome ");
            return 0;
        }
    }
    puts("palindrome");
   

    return 0;
}