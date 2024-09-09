// Finding Armstrong no: 

#include<stdio.h>
#include<math.h>
int main(){
    int n,m,c=0,r,s=0;
    printf("Enter the no ");scanf("%d",&n);
    m=n;
    while(m!=0){
        c++;
        m=m/10;
    }
    m=n;
    while(m){
        r=m%10; s+=pow(r,c);m=m/10;
    }

    printf(n==s?"Aramstrong no" : "Not An Armstrong no");
}