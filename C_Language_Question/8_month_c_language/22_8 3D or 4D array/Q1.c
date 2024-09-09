// 3D-dimensional arrays: 
// Example


#include<stdio.h>
int main(){
int a[2][2][2]={1,2,3,4,5,6,7,8},b,r,c;
for ( b = 0; b < 2; b++)
{
    printf("%d-Block\n",b);
    for ( r = 0; r < 2; r++)
    {
        for ( c = 0; c < 2; c++)
        {
            printf("%4d",a[b][r][c]);
        }
        printf("\n");
        
    }
    
}

    
    return 0;
}