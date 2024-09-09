// Finding digits sum:

#include<stdio.h>
int main(){
int n,r,s=0;
printf("Enter the number ");
scanf("%d",&n);
while(n!=0){
r=n%10;
s=s+r;
n=n/10;
}
printf("digits sum %d",s);
    
    return 0;
}