// Printing 1..n tables:
// N=3  1 to 3 tables

// #include<stdio.h>
// int main(){
// int t,n,i;
// printf("Enter the no of table ");
// scanf("%d",&n);
// for(t=1; t<=n; t++){
//     for(i=1;i<=10;i++)
//     printf("%d*%d=%d\n",t,i,t*i);
// }

//     return 0;
// }

// ==========================

// #include<stdio.h>     Error aa raha hai
// #include<time.h>
// int main(){
// int t,n,i;
// printf("Enter the no of table ");
// scanf("%d",&n);
// for(t=1; t<=n; t++){
//     for(i=1;i<=10;i++){
//     printf("%d*%d=%d\n",t,i,t*i);
//     }
//     nanosleep(2000000);
// }

//     return 0;
// }

// Tables side by side:

#include <stdio.h>
int main()
{
    int t, n, i;
    printf("Enter the no of table ");
    scanf("%d", &n);
     for (i = 1; i <= 10; i++)
    {
    for (t = 1; t <= n; t++)
        {
            printf("%d*%d=%d\t", t, i, t * i);
        }
    printf("\n");
    }

    return 0;
}