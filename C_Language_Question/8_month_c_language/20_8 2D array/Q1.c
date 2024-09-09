// 1) Finding array address:

// #include <stdio.h>
// int main()
// {
//     int a[2][5] = {{1, 2, 3}, {4, 5, 6}};
//     printf("a value %u,a[0] stored addr=%u,a[1] stored addrs %u\n",a,a[0],a[1]);

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("a[%d][%d] address = %u\n", i, j, &a[i][j]);
//         }
//     }

//     return 0;
// }
// ======================================
// 2) Finding n*n matrix size:

#include<stdio.h>
int main(){
int a[2][4]={{1,2,3,4},{5,6,7,8}};
printf("size %d bytes",sizeof(a));

    return 0;
}