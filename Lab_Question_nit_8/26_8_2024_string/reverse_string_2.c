// 2)Reverse of a given String
// Write a C program to print the reverse of a given String .
// Sample Input
// Input as :

// Enter a String : NareshIT
// Sample Output
// Output as : 

// The reverse of the String is : TIhseraN
#include<stdio.h>
int main(){
char s[100];int i;
printf("Enter the string : ");
scanf("%[^\n]",s);
// scanf("%s",s);
// gets(s);
for(i=0;s[i]!='\0';i++)
{
}
printf("Reverse ");
for (i--; i >=0; i--)
{
    printf("%c",s[i]);
}



}