// finding 2 digit no or not. 
#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
if(n>=10 && n<=99 || n<=-10 && n>=-99) puts("It is a 2 digit no");
else puts("not a 2 digit no");
    
    return 0;
}