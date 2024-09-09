// Write the logic for thee below pattern in c ?



//  1       2       3 

//  6       5       4

//  7       8       9

//  12      11      10

//  13      14       15 

#include<stdio.h>
int main(){
int nr,nc;
int k=1;
printf("Enter the number of Rows ");
scanf("%d",&nr);
printf("Enter the number of cols ");
scanf("%d",&nc);
for (int i = 1; i <=nr; i++)
{
    for (int  j = 1; j <= nc; j++)
    {
        if(i%2!=0){
        printf("%4d",k++);

        }else{
            printf("%4d",--k);
        }
    }
        k+=nc;
    printf("\n");
    
}

    
    return 0;
}