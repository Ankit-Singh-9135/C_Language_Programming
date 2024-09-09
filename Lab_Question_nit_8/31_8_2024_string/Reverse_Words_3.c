// 3)Reverse Words
// Write a C program to reverse Words of the Given String?
// Sample Input
// input as : Today is Monday
// Sample Output
// Output: yadoT si yadnoM

#include<stdio.h>
int main(){
char s[100];int i;
printf("Enter the string : ");
scanf("%[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
}
printf("Reverse ");
for (i--; i >=0; i--)
{
    printf("%s",s[i]);
}



}