// Finding no of words in given string:
// Eg: jaanu I miss you  4 words

#include <stdio.h>

int main()
{

    char s[100];
    int i, c = 1;

    printf("Enter first name ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    
        if (s[i] == ' ' && s[i + 1] != ' ') c++;
        
        if (s[0] == ' ') c--;
        
        if (s[i - 1] == ' ') c--;
        
        if (s[0] == '\0') c--;
        
    

    printf("%d words", c);
}