// Printing 1..10 numbers without using loop:
#include<stdio.h>
int main()
{
int i=10;
abc:
if(i>=1)
{
    printf("%d\n",i);
    i--;
    goto abc;
}

    
    return 0;
}