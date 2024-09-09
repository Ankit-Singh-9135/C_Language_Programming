// 2)Reverse A Number
// Write a C program to reverse 3 digit number without using any loops.
// input :- 786
// output:- 687

// #include<stdio.h>
// int main(){
//     int n=786;
//     printf("%d reverse %d",n,n%10);
//     n=n/10;
//     printf("%d%d",n%10,n/10);
// }

#include <stdio.h>        // Formula 
int main()
{
    int n, m, t, rev;
    scanf("%d",&n);
    m = n % 10;
    n = n / 10;
    t = n % 10;
    n = n / 10;
    rev = m * 100 + t * 10 + n;
    printf("%d", rev);
}
