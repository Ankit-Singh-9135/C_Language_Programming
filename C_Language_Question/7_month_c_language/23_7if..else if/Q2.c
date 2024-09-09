// Finding max in 2 numbers.
#include<stdio.h>
int main(){
int a,b;

// eq 1
// printf("Enter a , b values ");
// scanf("%d%d",&a,&b);
// if(a>b)printf("%d is big",a);
// else printf("%d is big",b);

// eq 2

// printf("Enter a , b values ");
// scanf("%d%d",&a,&b);
// if(a>b)printf("a is big");
// else printf("b is big");

// eq 3

printf("Enter a , b values ");
scanf("%d%d",&a,&b);
if(a>b)printf("a is big");
else if(b>a) printf("b is big");
else puts("Both are equal");
}