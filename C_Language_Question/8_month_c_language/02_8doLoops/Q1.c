// Finding the no position:

// #include <stdio.h>
// int main()
// {
//     long m, n;
//     int c = 0, d, f = 0;
//     printf("Enter thr no ");
//     scanf("%ld", &n);
//     m = n;
//     printf("Enter the digit to search ");
//     scanf("%d", &d);
//     do
//     {
//         c++;
//         m = m / 10;
//     } while (m != 0); // counting no of digits
//     do
//     {
//         if (n % 10 == d)
        
//             printf("%d in %d position\n", d, c, f = 1);
//             c--;
//             n = n / 10;
//     } while (n != 0);
//         if (f == 0)
        
//             printf("%d not found", d);
        

//     return 0;
// }

// ========================================

#include <stdio.h>
int main()
{
    long m, n,rev=0;
    int c = 1, d, f = 0;
    printf("Enter thr no ");
    scanf("%ld", &n);
    m = n;
    while(m){
        rev=rev*10+(m%10); m=m/10; //rev
    }
    printf("Enter the digit to search ");
    scanf("%d", &d);
    do
    {

        if(rev%10==d)printf("%d in %d position\n",d,c,f=1);
        c++;
        rev=rev/10;
    } while (rev!=0); 
    
        if (f == 0)
        
            printf("%d not found", d);
        

    return 0;
}