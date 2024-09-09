// Print below series:

// #include<stdio.h>
// int main(){
// int n,i,s=0;
// printf("Enter the no ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//   printf("%d%c+",i,253,s=s+i*i); 
// }
//     printf("\b=%d",s);
//     return 0;
// }

// Without using \b:

// #include<stdio.h>
// int main(){
// int n,i,s=0;
// printf("Enter the no ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     s=s+i*i;
//     if(i==5)printf("%d%c=%d",i,253,s);
//     else printf("%d%c+",i,253); 
// }
    
//     return 0;
// }


// ASCII Table:

#include<stdio.h>
int main(){
int i;

for(i=0;i<256;i++)printf("%d=%c\t",i,i);
    
    
    return 0;
}