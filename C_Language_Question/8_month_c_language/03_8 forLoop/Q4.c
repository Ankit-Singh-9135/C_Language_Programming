
// Fibonacci series:
// n=5 -> 0 1 1 2 3

#include<stdio.h>
int main(){
int n,i,f1=0,f2=1,f3;
printf("Enter the no ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("%4d",f1);
    f3=f1+f2;
    f1=f2;
    f2=f3;
}
    
    return 0;
}