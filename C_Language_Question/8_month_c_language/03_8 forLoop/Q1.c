// Printing the given table: 
// Eg: 9
// th
// table
// 9*1=9
// 9*2=18 ...

// ...
// 9*10=90

#include<stdio.h>
int main(){
    int t,i;
    printf("Enter the table ");scanf("%d",&t);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n ",t,i,t*i);
    }
}