// 3)Convert UpperCase
// Write a C program to convert all the character to upper case

// from a given index to end index. If the given index is not available then print

// Index is not available.
// Sample Input
// Input as :

// Enter a String : I am a student

// Enter the starting index number : 4

// Enter the ending index number : 13
// Sample Output
// Expected output :

// Resulting String is : I am A STUDENT

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[50];
    int st, en, l = 0;
    printf("Enter any string: ");
    scanf("%[^\n]", s);
    printf("Enter the starting index number :");
    scanf("%d", &st);
    printf("Enter the ending index number :");
    scanf("%d", &en);

    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    if (en < st)
    {
        int t = st;
        st = en;
        en = t;
    }
    if (st > 0 && en < l)
    {

        for (int i = 0; i < l; i++)
        {
            if (i >= st && i <= en)
            {
                printf("%c", (toupper(s[i])));
            }
            else
            {
                printf("%c", s[i]);
            }
        }
    }
    else
    {

        printf("You enter incorrect index");
    }
    return 0;
}


