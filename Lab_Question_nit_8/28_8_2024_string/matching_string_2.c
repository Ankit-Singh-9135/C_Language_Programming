// 2)Given string contains a capital alphabet, small alphabet, special character and digit.
//  Write a C program to check the given string contains a capital alphabet, small alphabet, special character and digit.
// Sample Input
// Input as : 

// Enter a String : Nareshit@123


// Input as : 

// Enter a String : nareshit
// Sample Output
// Expected output :

// The given String is matching to our cases.


// Expected output :

// The given String is not matching to our cases

#include <stdio.h>
#include <string.h>
int main() {
        char s[50];
        int sm,c,d,sp;
    printf("Enter any string: ");
    scanf("%[^\n]", s);
    sm=c=d=sp=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
       
            if (s[i]>='a'&&s[i]<='z'){
                sm++;
            }else if(s[i]>='A'&&s[i]<='Z'){
                c++;
            }else if(s[i]>='0'&&s[i]<='9'){
                d++;
            }
        else{
            sp++;
        }
    }
    if(c&&sm&&d&&sp)  {
                printf("The given String is matching to our cases.");
            }else{
               printf("The given String is not matching to our cases");
            }

    return 0;
}