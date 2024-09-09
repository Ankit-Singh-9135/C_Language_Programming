// OTP Generation:

#include<stdio.h>
#include <time.h>

int main(){
char s[10],ch;
int i;
while (1)
{
    srand(time(0));
    for ( i = 0; i < 8; i++)
    {
        s[i]=48+rand(10);
    }
    s[i]='\0';
    printf("Resend O T P [y/n]");
    scanf("%c",&ch);
    if(ch=='n' || ch=='N')break;
    
}

    
    return 0;
}

// ----------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void generateOTP(int length) {
//     // Seed the random number generator
//     srand(time(0));
    
//     printf("Your OTP is: ");
//     for (int i = 0; i < length; i++) {
//         // Generate a random digit between 0 and 9
//         int digit = rand() % 10;
//         printf("%d", digit);
//     }
//     printf("\n");
// }

// int main() {
//     int otpLength = 6; // Length of the OTP
//     generateOTP(otpLength);

//     return 0;
// }