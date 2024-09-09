// 2)compresses a string
// Create a program that compresses a string by replacing repeated characters with a count of the repetition (e.g., "aaabbbcc" becomes "a3b3c2").
// Sample Input
// Input as : 

// Enter a String : aaabbccdae
// Sample Output
// Output as : 

// Resulting string is : a4b2c2

#include <stdio.h>
#include <string.h>
int main() {
        char s1[50];
        int count;
    printf("Enter Any string: ");
    scanf(" %[^\n]", s1);

    for (int i = 0; s1[i]!='\0'; i++)
        {count=1;
            for(int j=i+1;s1[j]!='\0';j++){
            if (s1[i]==s1[j])
            {
               count++;
                s1[j] = ' ';
            }
            }
            if(s1[i] != ' '){
               printf("%c is=%4d times\n",s1[i], count);
            }

        }

    return 0;
}