// 4)Vowel & Consonant
// Develop a C program that reads a character from the user and prints "Vowel" if the character is a vowel (a, e, i, o, u or their uppercase equivalents), and "Consonant" if it's a consonant.

// Sample Input
// Enter a character : I

// Sample Output
// Vowel
#include <stdio.h>
int main()
{
    char vol;
    printf("Enter the vowel :");
    scanf("%c", &vol);
    if (vol == 'a' || vol == 'e' || vol == 'i' || vol == 'o' || vol == 'u' || vol == 'A' || vol == 'E' || vol == 'I' || vol == 'O' || vol == 'U')
    {
        printf("%c is vowel\n", vol);
    }
    if (vol != 'a' && vol != 'e' && vol != 'i' && vol != 'o' && vol != 'u' && vol != 'A' && vol != 'E' && vol != 'I' && vol != 'O' && vol != 'U')
    {
        printf("%c is consonant", vol);
    }
}