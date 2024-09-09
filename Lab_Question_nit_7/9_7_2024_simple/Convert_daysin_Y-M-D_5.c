// 5)Convert days in Y-M-D
// Write a program in C to input number of days. Find and display number of years, weeks, months and days.
// Input as : 390
// Output as : 1 Year, 3 Weeks, 0 Month, 4 Days
#include <stdio.h>
int main()
{
    int num = 390, year, month, weeks, day;
    year = num / 365; // 390/365=1
    num = num % 365;  // 390%365=25
    month = num / 30; // 25/30=0
    num = num % 30;   // 25%30=25
    weeks = num / 7;  // 25/7=3
    day = num % 7;    // 25%7=4
    printf("%d year %d weeks %d month %d day", year, weeks, month, day);
}