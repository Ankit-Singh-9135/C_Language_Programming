// Finding max, min array elements:

#include<stdio.h>
int main(){
int a[100],max,min,num,i;
printf("Enter array size 1-100 ");
scanf("%d",&num);
printf("Enter %d elements ",num);
for ( i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
for ( max=min=a[0],i = 1; i < num; i++)
{
    if(max<a[i]){
        max=a[i];
    }
    if(min>a[i]){
        min=a[i];
    }
}
printf("min=%d\nmax=%d",min,max);  
    return 0;
}

// ========================================== 
// single part max 

// #include<stdio.h>
// int main(){
// int a[100],max,num,i;
// printf("Enter array size 1-100 ");
// scanf("%d",&num);
// printf("Enter %d elements ",num);
// for ( i = 0; i < num; i++)
// {
//     scanf("%d",&a[i]);
// }
// max=a[0];
// for (i = 1; i < num; i++)
// {
//     if(max<a[i]){
//         max=a[i];
//     }
    
// }
// printf("max=%d",max);  
//     return 0;
// }

// =====================================
// single part min 

// #include<stdio.h>
// int main(){
// int a[100],max,min,num,i;
// printf("Enter array size 1-100 ");
// scanf("%d",&num);
// printf("Enter %d elements ",num);
// for ( i = 0; i < num; i++)
// {
//     scanf("%d",&a[i]);
// }
// min=a[0];
// for (i = 1; i < num; i++)
// {
   
//     if(min>a[i]){
//         min=a[i];
//     }
// }
// printf("min=%d",min);  
//     return 0;
// }