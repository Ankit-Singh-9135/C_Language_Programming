// Q2)String in Ascending
// Write a c program to sort the String in ascending order ,after sorting print the result in string
// format? 
// Sample Input
// Input as :- "CoreJava"
// Sample Output
// output as:-

// Before sorting the array

// CoreJava


// After sorting the array

// CJaaeorv

#include<stdio.h>
int main(){
char s[50];
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
{
    
for(int j=i+1;s[j]!='\0';j++)
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