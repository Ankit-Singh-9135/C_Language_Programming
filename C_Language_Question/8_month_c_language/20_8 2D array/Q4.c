// Reading and printing elements of a 2d array:

#include<stdio.h>
int main(){
int a[10][10],nr,nc;
printf("Enter no of rows and cols ");
scanf("%d %d",&nr,&nc);
printf("Enter %d integers\n",nr*nc);
for (int r = 0; r < nr; r++)
{
    for (int c = 0; c < nc; c++)
    {
        scanf("%d",&a[r][c]);
    }
    
}
printf("Element \n");
for (int r = 0; r < nr; r++)
{
    for (int c = 0; c < nc; c++)
    {
        printf("%6d",a[r][c]);
    }
    printf("\n");
    
}
    
    return 0;
}