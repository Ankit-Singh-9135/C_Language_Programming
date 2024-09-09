// Even or odd 
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number ");
//     scanf("%d",&num);
//     if(num%2==0){
//         puts("Even");
//     }else{
//         puts("odd");
//     }
// }

// -------------------------- method 2

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number ");
//     scanf("%d",&num);
//     if(num%2){
//         puts("Odd");
//     }else{
//         puts("Even");
//     }
// }

// ------------------------------method 3

// WITHOUT USING %:

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number ");
//     scanf("%d",&num);
//     if(num/2*2==num){
//         puts("Even");
//     }else{
//         puts("Odd");
//     }
// }

// Without using arithmetic operators:

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    if((num&1)==0){
        puts("Even");
    }else{
        puts("Odd");
    }
}