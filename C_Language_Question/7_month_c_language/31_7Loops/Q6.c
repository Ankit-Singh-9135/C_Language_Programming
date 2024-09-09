
// Finding no of digits in given no:
// #include<stdio.h>
// int main(){
//     int n,c=0;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     while(n!=0){
//         c++;
//         n=n/10;
//     }
//     printf("no of digits=%d",c);
// }

// or 

#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n){
        c++;
        n=n/10;
    }
    printf("no of digits=%d",c);
}