// Finding lower/ upper / digit / space/ special char 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter  a character ");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')
        printf("lower case character");
    else if(ch>='A' && ch<='Z')
        printf("upper case character");
    else if(ch>='0' && ch<='9')
        printf("Digit");
     else if(ch==' ')
        printf("space");
   
    else
        puts("Special char");
}