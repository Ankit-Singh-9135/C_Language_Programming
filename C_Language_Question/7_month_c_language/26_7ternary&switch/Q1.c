// Eg:Finding big in two no’s using ternary operator.


// #include <stdio.h>
// int main()
// {

//     int a, b, c;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
//     if (a > b){                               //1
//         printf("%d is big\n", a);
//     }else{
//         printf("%d is big\n", b);
//     }
//      printf("%d is big\n", a > b ? a : b);   //2
//      puts(a > b ? "a is big" : "b is big");    //3
//      a > b ? puts("a is big") : puts("b is big");  //4
//      c = a > b ? a : b;                          //5
//      printf("%d is big\n", c);
//      puts(a > b ? "a is big" : b > a ? "b is big" : "Both are equal");  //6
// }

// // ------------------------------------------------------ 

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
//     if (a > b){                               //1
//         printf("%d is big\n", a);
//     }else{
//         printf("%d is big\n", b);
//     }
    
// }

// // ---------------------------------------------------------------- 

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
   
//      printf("%d is big\n", a > b ? a : b);   //2
    
// }

// // -------------------------------------------------------

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
    
//      puts(a > b ? "a is big" : "b is big");    //3
    
// }
// // --------------------------------------------------

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
  
//      a > b ? puts("a is big") : puts("b is big");  //4
    
// }

// // ------------------------------------------------------------

// #include <stdio.h>
// int main()
// {

//     int a, b, c;
//     printf("Enter a, b values ");
//     scanf("%d %d", &a, &b);
    
//      c = a > b ? a : b;                          //5
//      printf("%d is big\n", c);
// }

// // ----------------------------------------------------------------

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter a, b values ");
    scanf("%d %d", &a, &b);
   
     puts(a > b ? "a is big" : b > a ? "b is big" : "Both are equal");  //6
}

