// 4)Anagrams
// Implement a function to check if two strings are anagrams of each other.
// Sample Input
// Input:
// First string: listen

// Second string: silent

// Input:

// First string: hello

// Second string: world
// Sample Output
// The strings are anagrams.

// Output:

// The strings are not anagrams.

#include <stdio.h>
#include <string.h>
void Anagrams(char[], char[]);
int main()
{
    char str1[50], str2[50];
    printf("Enter the 1st strimg : ");
    scanf("%[^\n]s", &str1);
    printf("Enter the 2st strimg : ");
    scanf(" %[^\n]s", &str2);
    Anagrams(str1, str2);
    return 0;
}
void Anagrams(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2)
    {
        // s1 --> silent //eilnst
        // s2 --> listen //eilnst
        for (int i = 0; str1[i] != '\0'; i++) // s
        {
            for (int j = i + 1; str2[j] != '\0'; j++) // l
            {
                if (str1[i] > str1[j])
                {
                    char temp = str1[j];
                    str1[j] = str1[i];
                    str1[i] = temp;
                }
                if (str2[i] > str2[j])
                {
                    char temp = str2[j];
                    str2[j] = str2[i];
                    str2[i] = temp;
                }
            }
        }

        int flag = 1;

        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 0;
                break;
            }
        }

        printf("String is %s", flag ? "an anargram" : "not an anagram");
    }
    else
    {
        printf("Not anagram!!!");
    }
}
