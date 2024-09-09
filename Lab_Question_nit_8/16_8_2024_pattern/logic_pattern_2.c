// Write a c program for the following pattern



//     1 

//     1 * 2

//     1 * 2 * 3

//     1 * 2 * 3 * 4

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int n=1;
        for (int j = 1; j <i+i; j++)
        {
            if(j%2==0){
                printf("%2c", '*');

            }else{
                printf("%2d",n);
                n++;
            }

            
        }

        printf("\n");
    }

    return 0;
}