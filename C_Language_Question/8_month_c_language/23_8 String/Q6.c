// Reading and printing multiple strings:

#include<stdio.h>
int main(){
char s[10][100];int i,n;
puts("Enter no of string 1-10 ");
scanf("%d",&n);
printf("Enter %d strings\n ",n);
for (int i= 0; i < n; i++)
{
    gets(s[i]);

}
printf("Strings\n");
puts("-------------------------------");
for (int i = 0; i < n; i++)
{
    puts(s[i]);
}


    
    return 0;
}