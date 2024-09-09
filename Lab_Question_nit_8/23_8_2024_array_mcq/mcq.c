// #include <stdio.h> //Q1
// int main()
// {
//     int array1[] = {2, 3};
//     int array2[3] = {9};
//     printf("%d, %d", array1[1], array2[2]);
//     return 0;
// }

// ====================================
// #include<stdio.h>   //2
// int main()
// {
//   int i; int arr[6]={1};
//   for(i=0;i<6;i++)
//   {
//      printf("%2d",arr[i]);
//   }
// return 0;
// }
// =======================================

// #include<stdio.h>   //Q3
// int main(){
// int arr[3]={1,2,3};
// printf("%d",arr[0]);

//     return 0;
// }
// =======================================
// #include<stdio.h>  //4
// int main()
// {
// int ary[4];
// ary[4] ={1,2,3,4};
// printf("%d", ary[2]);
// return 0;
// }

// ========================================
// #include<stdio.h>        //5 Error
// int main(){
// char grade={'A','B','c'};
// printf("%c",grade[0]);

//     return 0;
// }
// =====================

// #include<stdio.h>  //6
// int main(){
// int a[3]={20,30,40};
// a[0]++; //20   21
// int i=0;
// while(i<3) // 0<3 1<3 2<3 3<3X
// {
//     printf("%d",i[a]); //21 30 40
//     i++;
// }

//     return 0;
// }

// ===============================

// #include<stdio.h>  //7
// int main(){
// int a[3]={10,12,14};
// a[1]=20;
// int i=0;
// while(i<3)
// {
//     printf("%d",a[i]);
//     i++;
// }

//     return 0;
// }
// =============================
// #include<stdio.h> //8
// int main()
// {
// int a[5]={5,10,15,20,25};
// int i=5,sum=0;
// while(i>2)
// sum=sum+a[--i];
// printf("sum=%d\n",sum);
// return 0;
// }
// ==============================

// #include<stdio.h>  //9
// int main( )
// {
// float a[ ] = { 13.24, 1.5, 1.5, 5.4, 3.5 } ;
// float j;
//  j = 2.0 ;
// a = a + j ;
// printf("%f",a[j]);
// return 0;
// }

// ===============================
// #include<stdio.h>   //10
// int main(){

//     int arr[]={2,4,3,4};

//    for(int i=0;i<4;i++)
//     {
//         for(int j=i;j<4;j++)
//         {
//             if(arr[i]+arr[j]==6)
//             {
//                 printf("(%d,%d)\n",arr[i],arr[j]);
//             }
//         }
//     }
//     return 0;
// }

// ====================================
// #include <stdio.h> //11
// int main()
// {
//     int arr[] = {2, 4, 3, 4};
//     int n = 4;
//     for (int i = 0, j = n - 1; i < n / 2; i++, j--)
//     {
//         printf("(%d,%d)\n", arr[i], arr[j]);
//     }
//     return 0;
// }
// =======================================

// #include <stdio.h>  //12
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     for (int i = 0, j = 4 - 1; i < n / 2; i++, j--)
//     {
//         printf("(%d,%d)\n", arr[i], arr[j]);
//     }
//     return 0;
// }
// ===========================================

// #include<stdio.h>            //14
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int element=3,j,size=5;
//      for (int i = 0,  j = 0; i < size; i++) {
//         if (arr[i] != element) {
//             arr[j++] = arr[i];
//             printf("j=%d\n",j);
//         }
//     }
//     size--;
//     for(int i=0;i<size;i++)
//     {
//         printf("%4d",arr[i]);
//     }
//     return 0;
// }
// ===========================================

//   #include <stdio.h>  //15
//     void main()
//     {
//         int a[2][3] = {1, 2, 3, 4, 5};
//         int i = 0, j = 0;
//         for (i = 0; i < 2; i++)
//         for (j = 0; j < 3; j++)
//         printf("%d", a[i][j]);
//     }
// ================================================
// #include <stdio.h>  //16
   
//     void main()
//     {
//         int a[2][3] = {0};
//          a[0][1] = 3;
//         int i = 0, j = 0;
//         for (i = 0; i < 2; i++)
//         for (j = 0; j < 3; j++)
//         printf("%d", a[i][j]);
//     }
// ===============================================
// #include<stdio.h>        //17
// int main()
// {
//     int i;
//     int arr[5] = {1};
//     for (i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// =============================================

// #include<stdio.h>  //18
// int main(){

//     int i;
//     int arr[5] = {1,3,5,6,7};
//     int size=5,Position=2,Value=7;
//        for (i = size; i >Position; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[Position] = Value;
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
// ============================================


// #include<stdio.h>  //19
// int main(){

//     int i;
//     int arr[5] = {1,2,3,9};
//     int size=4,Position=3,Value=0;
//        for (i = size; i >Position; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[Position] = Value;
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
// ========================================
// #include<stdio.h> //20

// int main(){

//     int i;
//     int arr[5] = {1,6,4,9};
//    int Position=3,size=5,Value=4;
//     //get the insert possition
//     for (i = 0; i < size; i++) {
//         if (Value < arr[i]) {
//             Position = i;//insert possition
//             break;
//         }
//     }
//    printf("%d",Position);
//     return 0;
// }
// ==============================================
// #include<stdio.h>  //21

// int main()

// {

//    int a[]={'x','y','z','b'};

//    int i;

//     for(i=0;i<=3;i++)

//      printf("%d\n",a[i]);

//     return 0;

// }
// ================================
// #include<stdio.h>   //26

// int main()

// {

//     int n[3][3]={2,4,3,6,8,5,3,5,1};

//     int i,j;

//     for(i=0;i<=2;i++)

//     {

//         for(j=0;j<=2;j++)

//         {

//             printf("%d",n[j][i]);

//         }

//     }

//     return 0;

// }
// ===================================
    // #include <stdio.h>  //27

    // int main()

    // {

    //     int ary[2][3];

    //     ary[][] = {{1, 2, 3}, {4, 5, 6}};

    //     printf("%d\n", ary[1][0]);

    // }
// =====================================
// #include<stdio.h> // 28
// int main()

// {

//    int a[]={1,2,3,4,5};
//      printf("%d\n",2[a]);
//     return 0;

// }
// ========================================
// #include<stdio.h> // 29
// int main()

// {

//    int a[]={1,2,3,4,5};
//      printf("%d\n",4[a]);
//     return 0;

// }
// ===============================================
#include<stdio.h> // 28
int main()

{

   int a[]={1,2,3,4,5};
     printf("%d\n",1[a]);
    return 0;

}