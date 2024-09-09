// Lower to upper / upper to lower:

#include<stdio.h>
int main(){
char s[100];int i;
printf("Enter the string ");
gets(s);
for ( i = 0; s[i]!='\0'; i++) 
{
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]-=32;
    }else if(s[i]>='A' && s[i]<='Z')
    {
        s[i]+=32;
    }
}
    printf("Converted string %s ",s);



    return 0;
}