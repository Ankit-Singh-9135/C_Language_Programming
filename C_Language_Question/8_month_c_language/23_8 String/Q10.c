// #include<stdio.h>
// int main(){
// char s[100];
// int i;
// printf("Enter the string ");
// gets(s);
// for ( i = 0; s[i]!='\0'; i++)
// {
//     puts(s+i);
// }

    
//     return 0;
// }
// =============================

#include<stdio.h>
int main(){
char s[100];
int i;
printf("Enter the string ");
gets(s);
for ( i = 0; s[i]!='\0'; i++);

   for ( ; i >0; i--, s[i]='\0')
   {
    
    puts(s);
   }
   


    
    return 0;
}