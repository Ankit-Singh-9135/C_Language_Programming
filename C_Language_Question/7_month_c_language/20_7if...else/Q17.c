// Using abs():
#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbre :");
    scanf("%d",&n);
    if(n<0)n=-n;
    printf("Absolute value = %d",abs(n));
}