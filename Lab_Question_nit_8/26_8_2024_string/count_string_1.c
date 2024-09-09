// 1)Count
// Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .
// Sample Input
// Enter a String : Nareshit @123
// Sample Output
// Output as :

// Vowel count is : 3

// Consonant count is : 5

// Digit count is : 3

// Special Character count is : 1

#include <stdio.h>
int main()
{
    char s[100];
    int vol = 0, con = 0, d = 0, sp = 0;
    printf("Enter a string ");
    // scanf("%[^\n]",s);
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
                vol++;
            else
                con++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else
            sp++;
    }

    printf("vovel : %d\n", vol);
    printf("constonen : %d\n", con);
    printf("digit : %d\n", d);
    printf("special character  : %d\n", sp);
}