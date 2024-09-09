// Finding prime / composite no:
// The no having 2 factors is called prime. The no divisible with 1 and itself only is called prime. 2 factors are 1, 2  prime

// 3 factors are 1, 3  prime
// 4 factors are 1, 2, 4  composite no

// #include<stdio.h>
// int main(){
// int n,i,c=0;
// printf("Enter the no ");
// scanf("%d",&n);
// if(n==1)puts("Not a prime/composite no");
// else{
//     for(i=1;i<=n;i++)if(n%i==0)c++;
//     puts(c==2?"prime no":"composite no");
// }
    
//     return 0;
// }

// // Method 2; 

// #include<stdio.h>
// int main(){
// long int n,i;
// printf("Enter the no ");
// scanf("%ld",&n);
// if(n==1)puts("Not a prime/composite no");
// else{
//     for(i=2;i<=n/2;i++)if(n%i==0){
//     puts("composite no");return 0;}
//     printf("prime no");
// }
    
//     return 0;
// }

// Method 3; 

#include<stdio.h>
int main(){
long int n,i,p=1;
printf("Enter the no ");
scanf("%ld",&n);
if(n==1)puts("Not a prime/composite no");
else{
    for(i=2;i<=n/2;i++)if(n%i==0){p=0;break;}
    puts(p?"prime no":"composite no");
}
    
    return 0;
}