// Write a c program to sort the String in Descending Order  ,after sorting print the result in string
// format?  
// Sample Input
// Input as :- "CoreJava"
// Sample Output
// Before sorting the array

// CoreJava


// After sorting the array

// vroeaaJC

#include<stdio.h>
int main(){
char s[50];
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
{
    
for(int j=0;s[j]!='\0';j++)
{
    if(s[i]>s[j])
    {
        int t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}
}

printf("%s",s);
    
    return 0;
}