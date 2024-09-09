// Printing below series:
// n=10 -> 1 2 3 9 4 5 6 18 7 8 9 27 10

// #include<stdio.h>
// int main(){
// int n,i;
// printf("Enter the no ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     printf("%4d",i); if(i%3==0) printf("%4d",i*3);
// }
    
//     return 0;
// }

// =====================================

// #include<stdio.h>
// int main(){
// int n,i,s=0;
// printf("Enter the no ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//  if(i%2==0) printf("%d+",i,s=s-i); else printf("%d-",i,s=s+i);
// }
//     printf("\b=%d",s);
//     return 0;
// }

// Without \b:======================

#include<stdio.h>
int main(){
int n,i,s=0;
printf("Enter the no ");
scanf("%d",&n);
for(i=1;i<n;i++){
 if(i%2==0) printf("%d+",i,s=s-i); else printf("%d-",i,s=s+i);
}
if(i%2==0)s=s-i; else s=s+i;
    printf("%d=%d",i,s);
    return 0;
}