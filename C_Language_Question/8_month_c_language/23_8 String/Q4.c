// Reading and printing a string at runtime:

// #include<stdio.h>
// int main(){
//     char s[100];
//     printf("Enter the string");
//     scanf("%s",s);
//     printf("U entered %s",s);
    
//     return 0;
// }
// ============================
#include<stdio.h>
int main(){
    char s[100];
    printf("Enter the string");
    gets(s);
    printf("U entered ",s);puts(s);
    
    return 0;
}