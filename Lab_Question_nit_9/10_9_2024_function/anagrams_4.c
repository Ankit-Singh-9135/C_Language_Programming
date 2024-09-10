// Que 4: Write a C program to check if two strings are anagrams of each other or not using function.
// ------

// -> create int main() function.
// -> create bool isAnagram(char str1[],char str2[]) function. this function will take two string as input and will return true if both String are anagram otherwise will return false.
// -> in main function read two Strings and pass it to isAnagram fuction by calling it and print the result.

// Sample input:
//              First string : listen
//              Second string: silent

// Sample output: The strings are anagrams.

// Sample input:
//              First string : hello
//              Second string: world

// Sample output: The strings are not anagrams.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool Anagrams(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2)
    {

        for (int i = 0; str1[i] != '\0'; i++)
        {
            for (int j = i + 1; str2[j] != '\0'; j++)
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
