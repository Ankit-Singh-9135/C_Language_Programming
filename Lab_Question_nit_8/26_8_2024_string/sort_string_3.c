// 3)Sort the string
// Write a C program to sort the string data and print it.
// Sample Input
// Input as : 

// Enter a String : apple
// Sample Output
// Output as : 

// After Sorting the String is : aelpp

#include<stdio.h>
int main(){
char s[50];
printf("Enter the string : ");
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