// 4)Count the number of alphabet
// Write a C program to count the number of alphabet present in a given String .
// Sample Input
// Input as : Apple
// Sample Output
// Output as : The count of alphabet is : 5

#include<stdio.h>
int main(){
char s[20],c=0;
printf("Enter the string : ");
// scanf("%[^\n]",s);
scanf("%s",s);


for(int i=0;s[i]!='\0';i++)
{
     if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')  ){
        c++;
     }
    
}
printf("%d",c);

    
    return 0;
}