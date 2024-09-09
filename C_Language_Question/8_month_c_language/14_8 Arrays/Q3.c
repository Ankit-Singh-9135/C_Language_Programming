// Reading and printing of array elements:

// #include<stdio.h>
// int main(){
// int a[100],n;
// printf("Enter array size 1-100 ");
// scanf("%d",&n);
// if(n<1 || n>100){
//     printf("Array size 1- 100 only ");

// }else{
//     printf("Enter %d element ",n);
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter are ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%4d",a[i]);
//     }
// }

//     return 0;
// }
// =================================

#include <stdio.h>
int main()
{
    float a[100];
    int n;
    printf("Enter array size 1-100 ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Array size 1- 100 only ");
    }
    else
    {
        printf("Enter %d element ", n);
        for (int i = 0; 1 < n; i++)
        {
            scanf("%f", &a[i]);
        }
        printf("Enter are ");
        for (int i = 0; i < n; i++)
        {
            printf("%10.2f", a[i]);
        }
    }

    return 0;
}