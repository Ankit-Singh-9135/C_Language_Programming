// Read n elements to n*n array and find the no of even,
// odd, zero elements row wise.

#include<stdio.h>
int main(){
int a[10][10],nr,nc,e,o,z;
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
puts("\t Even\tOdd\tZero");
puts("------------------------------------------");
printf("Element \n");
for (int r = 0; r < nr; r++)
{
    for (int c, e=o=z=c = 0; c < nc; c++)
    {
        if(a[r][c]==0){
            z++;
        }else if (a[r][c]%2==0){
            e++;
        }else{
            o++;
        }
        printf("%d-row\t %d\t%d\t%d\n",r+1,e,o,z);
    }
    
}
    
    return 0;
}