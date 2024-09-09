// 1) write a  c program to reverse a two digit number without using loop ?
// input:	13
// output: 31
// #include <stdio.h>
// int main()
// {
//     int num = 13, first, reverse;    //formula
//     first = num % 10;
//     num = num / 10;
//     reverse = first *  10 + num;
//     printf("%d", reverse);
// }

#include <stdio.h>
int main()
{
// int n = 12;                                    //two number
// printf("%d%d", n % 10, n / 10);

// int n = 123;                               //three number
// printf("%d reverse %d", n, n % 10);
// n = n / 10;
// printf("%d%d", n % 10,n/10);

  int n = 1234;                               //fourth number
printf("%d reverse %d", n, n % 10);
n = n / 10;
printf("%d", n % 10);
n = n / 10;
printf("%d%d", n % 10,n/10);
}