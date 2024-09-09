// 2) Write a C program to check whether a character is alphabet or not uing simple if.
#include<stdio.h>
int main(){
char ch;
printf("Enter the character ");
scanf("%c",&ch);
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
    printf("alphabet");
}else{
    printf("not alphabet");
}
 
    return 0;
}