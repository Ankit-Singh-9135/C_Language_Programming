// 1)Remove Characters
// Write a C Program to Remove Characters in Second String which are present in First String.
// Sample Input
// Input 1st string: apple

// Input 2nd string: aeroplane
// Sample Output
// Output as : ron

#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter the string 1 : ");
    scanf(" %[^\n]", s1);
    printf("Enter the string 2 : ");
    scanf(" %[^\n]", s2);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                s2[j] = '*';
            }
        }
    }
    for (int i = 0; s2[i] != '\0'; i++)

    {
        if (s2[i] != '*')
        {
            printf(" %c", s2[i]);
        }
    }
    return 0;
}



