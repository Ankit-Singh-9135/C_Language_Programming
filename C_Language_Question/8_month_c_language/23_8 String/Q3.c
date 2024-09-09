// Storing of multiple strings:
// #include<stdio.h>
// int main(){
// char a[5][20]={"Virat kohli","Rohit sharam","Sachin","Dhoni","Gill"};
// int i;
// puts("Name");
// puts("-------------------------");
// for (int i = 0; i < 5; i++)
// {
//     puts(a[i]);
// }


    
//     return 0;
// }
// =============================
#include<stdio.h>
int main(){
char a[5][20]={"Virat kohli","Rohit sharam","Sachin","Dhoni","Gill"};
int i;
puts("Name");
puts("-------------------------");
for (int i = 0; i < 5; i++)
{
    printf("%c",a[i][i]);
}


    
    return 0;
}