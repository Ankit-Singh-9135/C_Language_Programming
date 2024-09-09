// Using predefined functions:

#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter  a character "); 
    ch=getchar();
    if (islower(ch)){
        printf("lower case character");
    }else if(isupper(ch)){
        printf("upper case character");
    }else if(isdigit(ch)){
        printf("Digit");
     } else if(isspace(ch)){
        printf("space");
   
     }else
        puts("Special char");

}