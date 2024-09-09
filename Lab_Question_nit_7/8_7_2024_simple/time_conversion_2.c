// 2)Time Conversion
// Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.
// input:- Enter the number of seconds: 3671
// output:-3671 seconds is equivalent to 1 hours, 1 minutes, and 11 seconds.
#include <stdio.h>
int main()
{
    int second,hour,minutes;
    printf("Enter the number of seconds:");
    scanf("%d",&second);
    hour = second / 3600;
    second = second % 3600;
    minutes=second/60;
    second=second%60;
    printf("hour=%d,minutes=%d,second=%d", hour,minutes,second);
}