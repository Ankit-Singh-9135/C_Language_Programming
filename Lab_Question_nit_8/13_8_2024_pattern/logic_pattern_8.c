// Write a logic for the following pattern in c?



//     1

//     2  6

//     3  7  10

//     4  8  11  13

//     5  9  12  14  15

#include<stdio.h>
int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
for (int  i = 1; i <= num; i++)
{
    int k=i;
for (int  j = 1; j <= i; j++)
{
printf("%4d",k);
k+=num-j;

}
printf("\n");
}

    
    return 0;
}


