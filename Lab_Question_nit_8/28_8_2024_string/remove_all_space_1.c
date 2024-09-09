// 1) remove all the Spaces from a given String.
// Write a C program to remove all the Spaces from a given String.
// Sample Input
// Input as :

// Enter a String : Black cat on a mat
// Sample Output
// Expected output : Blackcatonamat

#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter the string : ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}