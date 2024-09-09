// Que 5 : Write a program in C to calculate the length of a string using a pointer.
// -------

// Sample input : NareshIt26

// Sample output : The length of the given string NareshIt26 is : 10

// #include<stdio.h>
// int main(){
// char s[100],*p=&s;
// int l=0;
// printf("Enter the String : ");
// scanf("%[^\n]",s);
// for (int i = 0; p[i]!='\0'; i++)
// {
//     l++;
// }
//     printf("Length of string : %d",l);

    
//     return 0;
// }

// or 

#include<stdio.h>
int main(){
char str[50];
char *p =&str;
int i=0;
printf("Enter the String : ");
scanf("%[^\n]s",str);
for (int i = 0; p[i]!='\0'; i++);
    printf("The length of the given string %s is : %d\n",str,i);    
    return 0;
}


// #include <stdio.h>

// int main() {
//       char str[50];
//       int i=0;char  *p =&str;

//     printf("Enter the string of elements to store :- ");
//     scanf("%[^\n]s",str);
//     for ( i = 0; p[i]!='\0'; i++);
   
//     printf("The length of the given string %s is:  %d\n",str, i);
//     return 0;
// }