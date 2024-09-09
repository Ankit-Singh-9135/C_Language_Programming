// Harmonic series without using \b:
#include<stdio.h>
int main(){
    int n,i;float s=1;
    printf("Enter the number "); scanf("%d",&n);
    printf("1+");
    for(i=1; i<n;i++){
        printf("1/%d+",i,s+=1.0/i);
    }
    printf("1/%d=%.2f",i,s+=1.0/i);
}