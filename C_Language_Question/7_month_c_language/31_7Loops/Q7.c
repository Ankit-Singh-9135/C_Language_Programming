// Finding no of digits using do..while:


// #include<stdio.h>
// int main(){
//     int n,c=0;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     do{
//         c++;
//         n=n/10;
//     }while(n!=0);
//     printf("no of digits=%d",c);
// }

// Without using loop/goto label:

#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter the number ");
    scanf("%d",&n);
    c=printf("%d",n);
    if(n<0){
        c--;
    }
   
    printf("no of digits=%d",c);
}