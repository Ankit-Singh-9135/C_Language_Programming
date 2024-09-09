// Using ascii values:

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter  a character ");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122)
        printf("lower case character");
    else if(ch>=65 && ch<=90)
        printf("upper case character");
    else if(ch>=48 && ch<=57)
        printf("Digit");
     else if(ch==32)
        printf("space");
   
    else
        puts("Special char");
}