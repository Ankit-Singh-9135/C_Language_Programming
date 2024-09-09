// Q4)Anagram
// Write a c Program to check whether two given strings are anagram of each other or not.
// Sample Input
// input 1:- listen

// input 2:- silent


// input 1:- Jack

// input 2:- Jake
// Sample Output
// this are anagram String


// this is not are anagram String

#include <stdio.h>
#include<string.h>

int main() {
  char s1[50],s2[50];
  printf("Enter the first string");
  scanf("%s",s1);
   printf("Enter the second string");
  scanf("%s",s2);
  int len=strlen(s1);
  int len1=strlen(s2);
  for(int i=0;i<len;i++)
  {
      for(int j=i+1;j<len1;j++)
      {
          if(s1[i]>s1[j])
          {
              char t=s1[i];
              s1[i]=s1[j];
              s1[j]=t;
          }
           if(s2[i]>s2[j])
          {
              char t=s2[i];
              s2[i]=s2[j];
              s2[j]=t;
          }
      }
  }
  int f=0;
   if(len==len1)
        {
            for(int i=0;i<len1;i++)
            {
                if(s1[i]==s2[i])
                {
                  f=1;  
                }else
                {
                    f=0;
                    break;
                }
            }
           (f==1) ? printf("Anagram"):printf("Not Anagram");
            
        }else
        {
           printf("Not Anagram");
        }

    return 0;
}