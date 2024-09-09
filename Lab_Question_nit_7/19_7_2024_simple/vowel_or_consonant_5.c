// 5)vowel or consonant
// write a c program to check the given character is  vowel or consonant using ternary operator

// Sample Input
// A

// Sample Output
// vowel 
#include<stdio.h>
int main(){
    char character;
    printf("Enter the vawel :");
    scanf("%c",&character);
    character=='a'||character=='e'||character=='i'||character=='o'||character=='u' || character=='A'||character=='E'||character=='I'||character=='O'||character=='U'?printf("%c is vowel",character):printf("%c is consonant",character);

    
}