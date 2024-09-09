// Que 6 : Write a program in C to count the number of vowels and consonants in a string using a pointer.
// -------

// Sample input : string

// Sample output :

// Number of vowels : 1
// Number of constant : 5

#include <stdio.h>
int main()
{
    char s[100], *p = &s;
    int c = 0, v = 0, l = 0;
    printf("Enter the String : ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= 'A' && p[i] <= 'Z')
        {
            if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' ||
                p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Number of vowels :%d\nNumber of constant : %d", v, c);

    return 0;
}