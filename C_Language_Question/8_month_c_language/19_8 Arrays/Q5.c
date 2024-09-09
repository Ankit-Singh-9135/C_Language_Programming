// Arranging array elements in reverse order without using 3rd variable 
// Method 1 printing in reverse order:
// #include<stdio.h>
// int main(){
// int a[100],i,n;
// printf("Enter the array of size 1-100 ");
// scanf("%d",&n);
// printf("Enter %d element ",n);
// for ( i = 0; i<n; i++)
// {
//     scanf("%d",&a[i]);
// }
// printf("Reverse order ");
// for ( n--; n >=0 ; n--)
// {
//     printf("%3d",a[n]);

   
// }
    
//     return 0;
// }

// Permanent arrangement:

#include<stdio.h>
int main(){
int a[100],i,n;
printf("Enter the array of size 1-100 ");
scanf("%d",&n);
printf("Enter %d element ",n);
for ( i = 0; i<n; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i <n/2; i++)
{
    a[i]=a[i]+a[n-i-1];
    a[n-i-1]=a[i]-a[n-i-1];
    a[i]=a[i]-a[n-i-1];
}

printf("Reverse order ");
for ( i=0; i<n ; i++)
{
    printf("%3d",a[i]);

   
}
    
    return 0;
}