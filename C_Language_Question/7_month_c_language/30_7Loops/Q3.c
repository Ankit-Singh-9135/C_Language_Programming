// Without using loop/goto label: 

#include<stdio.h>
int main(){
    int n,s;
    printf("Enter the number ");
    scanf("%d",&n);
        s=n*(n+1)/2;
    printf("Sum=%d, Avg=%.2f",s,(float)s/n);

}