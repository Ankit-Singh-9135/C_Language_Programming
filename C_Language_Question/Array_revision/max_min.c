// #include<stdio.h>
// int main(){
// int a[100],max,num;
// printf("Enter the array of size : ");
// scanf("%d",&num);
// printf("Enter element : ");
// for (int i = 0; i < num; i++)  scanf("%d",&a[i]);
// for (int i = 0; i < num; i++)
// {
//      max=1;
//      if(max<a[i])  max=a[i];
// }
// printf("max=%d",max);
//     return 0;
// }

// ==============================

// #include<stdio.h>
// int main(){
// int a[100],num,min;
// printf("Enter the array of size : ");
// scanf("%d",&num);
// printf("Enter element : ");
// for (int i = 0; i < num; i++)  scanf("%d",&a[i]);
// for (int i = 0; i < num; i++)
// {
//     min=1;
//      if(min>a[i])  min=a[i];

// }
// printf("min=%d",min);
//     return 0;
// }

// ==============================

#include <stdio.h>
int main()
{
    int a[100], num, min, max, i;
    printf("Enter the array of size : ");
    scanf("%d", &num);
    printf("Enter element : ");
    for (i = 0; i < num; i++)
        scanf("%d", &a[i]);
    for (max = min = a[0], i = 0; i < num; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("min=%d,max=%d", min, max);
    return 0;
}