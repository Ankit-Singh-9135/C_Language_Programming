// 4D-dimensional arrays: 
// Example


#include<stdio.h>
int main(){
int a[2][2][2][2]={1,2,3,4,5,6,7,8,7,3,9,8,7,1,3,7},s,b,r,c;
for ( s = 0; s < 2; s++)
{
    printf("%d-set\n",s);
    for ( b = 0; b < 2; b++)
    {
        printf("%d-Block\n",b);
        for ( r = 0; r < 2; r++)
        {
            for ( c = 0; c < 2; c++)
            {
                printf("%4d",a[s][b][r][c]);

            }
            
        printf("\n");
        }
        
    }
    
}

    
    return 0;
}