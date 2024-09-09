// 1)Alphabet or Not
// write a c program to check the given character is Alphabet or Not A Alphabet using ternary operator

// Sample Input
// A

// Sample Output
// A is Alphabet 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character is Alphabet :");
    scanf("%c",&ch);
    (ch>='A' && ch<='Z')||(ch>='a' && ch<='z')?printf("%c is Alphabet",ch):printf("%c not Alphabet",ch); 
}


    

