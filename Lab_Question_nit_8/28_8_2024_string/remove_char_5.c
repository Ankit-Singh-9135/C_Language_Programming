// 5)remove given character from a String.
// Write a C program to remove given character from a String.
// Sample Input
// Input as : 

// Enter a String : Bookstore

// Enter the character you want to remove : o
// Sample Output
// Expected Output : 

// Resulting String is : Bkstre

#include <stdio.h>
#include<string.h>
int main() {
   char s[50],ch;
   
   printf("Enter the strigs");
   scanf(" %s",s);
   int len=strlen(s);
   printf("Enter the character you want to delete:");
   scanf(" %c",&ch);
   for(int i=0;i<len;i++)
   {
       if(s[i]==ch)
       {
           for(int j=i;j<len-1;j++)
           {
               s[j]=s[j+1];
           }
           len--;
           i--;
          
       }
       
   }
   for(int i=0;i<len;i++)
   {
       printf("%c",s[i]);
   }
   
  
   
    return 0;
}