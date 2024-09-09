// #include<stdio.h>
// int main(){
// int a[4]={9,3,1,8},i;
// for(i=0;i<4;i++){
//     printf("a[%d]  value=%d, addr=%u\n",i,a[i],&a[i]);
// }
//     return 0;
// }

// ============================= 

// #include<stdio.h>
// int main(){
// char a[4]={9,3,1,8},i;
// for(i=0;i<4;i++){
//     printf("a[%d]  value=%d, addr=%u\n",i,a[i],&a[i]);
// }
//     return 0;
// }

// ========================= 

#include<stdio.h>
int main(){
float a[4]={9,3,1,8};int i;
for(i=0;i<4;i++){
    printf("a[%d]  value=%f, addr=%u\n",i,a[i],&a[i]);
}
    return 0;
}