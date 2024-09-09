// Finding even odd zero array element 

#include <stdio.h>
int main()
{
    int a[100], even, odd, zero, num,i;
    printf("Enter array size 1-100 ");
    scanf("%d", &num);
    printf("Enter %d element ", num);
    for ( even=odd=zero=i= 0; i < num; i++)
    {
        scanf("%d",&a[i]);
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d Even %d Odd %d Zero", even, odd, zero);

    return 0;
}