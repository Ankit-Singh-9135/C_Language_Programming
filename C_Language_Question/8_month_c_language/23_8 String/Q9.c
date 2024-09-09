// Read a string and replace lower / upper / digit / space/
// special char with @/#/$/*/^

#include<stdio.h>
int main(){
char s[100];int i;
printf("Enter the string ");
gets(s);
for ( i = 0; s[i]!='\0'; i++) 
{
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]='@';
    }else if(s[i]>='A' && s[i]<='Z')
    {
        s[i]='#';
    }else if(s[i]>='0' && s[i]<='9')
    {
        s[i]='$';
    }else if(s[i]==' ' )
    {
        s[i]='*';
    }else{
        s[i]='^';
    }
}
    printf("Converted string %s ",s);



    return 0;
}