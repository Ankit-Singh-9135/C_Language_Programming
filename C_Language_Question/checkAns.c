// #include<stdio.h>         
// int main(){
// // int a=5,b=6;
// //   printf("Before a=5,b=6 After a=%d b= %d",b,a); //1

// // int a=5,b=6,c;
// // c=a;       //2
// // a=b;
// // b=c;
// // printf("%d %d",a,b);

// int a=5,b=6,c;
// c=a-(-b);
// printf("%d",c);

//     return 0;
// }

// ---------------------------------------
// 1) write a  c program to reverse a two digit number without using loop ?

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no :");
// scanf("%d",&n);
// // printf("%d%d",n%10,n/10);          //1

// // printf("%d",n%10);                    //2
// // n=n/10;
// // printf("%d%d",n%10,n/10);   

// printf("%d Reverse %d",n,n%10);                    //3
// n=n/10;
// printf("%d",n%10);   
// n=n/10;
// printf("%d%d",n%10,n/10); 
//     return 0;
// }

// --------------------------------------------------------
// 2) write a  c program to find the previous multiple of 100 of a given three digit ?

#include<stdio.h>
int main(){
int n=234;
n%10>=5&&printf("%d",((n/10)+1)*10)||printf("%d",n/10*10);

    
    return 0;
}