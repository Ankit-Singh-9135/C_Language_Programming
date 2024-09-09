// 2)Reverse All the Vowels
// Write a C program to reverse all the vowels present in a given string. Return the newly created string or modified string .
// Sample Input
// Input a string: Aeroplane
// Sample Output
// Output as : earoplenA

#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Enter the string : ");
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {

        if (s[i] == 'A' ||s[i] == 'a'|| s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (s[l] == 'A' ||s[l] == 'a'|| s[l] == 'e'|| s[l] == 'i'|| s[l] == 'o' ||s[l] == 'u')
            {
                char t = s[i];
                s[i] = s[l];
                s[l] = t;
                l--;
            }
            else
            {
                i--;
                l--;
            }
        }
    }
    printf("%s", s);
    return 0;
}