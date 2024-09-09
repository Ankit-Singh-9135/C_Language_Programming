// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department

// #include <stdio.h>
// int main()
// {
//     int id;
//     printf("Enter the id no ");
//     scanf("%d", &id);
//     switch (id)
//     {
//     case 11 ... 15:
//         printf("Software department");
//         break;

//     case 16 ... 20:
//         printf(" Developer department");
//         break;

//     case 21 ... 23:
//         printf("Management department");
//         break;

//     default:
//         printf("Invaild department");
//         break;
//     }

// ------------------------------------------- or 

#include <stdio.h>
int main()
{
    int id;
    printf("Enter the id no ");
    scanf("%d", &id);
    switch (id)
    {
    case 11: case 12: case 13: case 14: case 15:   
        printf("Software department");
        break;

    case 16: case 17: case 18: case 19: case 20:
        printf(" Developer department");
        break;

    case 21: case 22: case 23:
        printf("Management department");
        break;

    default:
        printf("Invaild department");
        break;
    }

    return 0;
}

//     return 0;
// }