// 1)sum of the numbers
// Write a C program to find out the sum of the numbers which is present in a given string.
// Sample Input
// Input as : 

// Enter a String : TS12ab345
// Sample Output
// Output as : 
// Sum Of the numbers is : 15

#include<stdio.h>
int main(){
char s[50];
int sum=0;
printf("Enter the string : ");
scanf("%[^\n]",s);
for (int i = 0; s[i]!='\0'; i++)
{
    if(s[i]>='0'&&s[i]<='9'){

    sum+=s[i]-48;
    }
}
    printf("sum = %d",sum);

    
    return 0;
}