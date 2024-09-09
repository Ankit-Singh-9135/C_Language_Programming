// #include <stdio.h>
// int main()
// {
//     int arr[4] = {4, 8, 5, 6};
//     printf("arr[0] cell add=%u and store value=%u\n", &arr[0], arr);

//         return 0;
// }

// -------------------------------

// #include <stdio.h>
// int main()
// {
//     int arr[4] = {4, 8, 5, 6},i;
//     for ( i = 0; i < 4; i++)
//      printf("arr[%d] value=%d, addr=%u\n",i,arr[i],&arr[i]);

//         return 0;
// }

// -------------------------------------

// #include <stdio.h>
// int main()
// {
//     char arr[4] = {4, 8, 5, 6},i;
//     for ( i = 0; i < 4; i++)
//      printf("arr[%d] value=%d, addr=%u\n",i,arr[i],&arr[i]);

//         return 0;
// }
// --------------------------------------

#include <stdio.h>
int main()
{
    float arr[4] = {4, 8, 5, 6};int i;
    for (i = 0; i < 4; i++)
        printf("arr[%d] value=%f, addr=%u\n", i, arr[i], &arr[i]);

    return 0;
}