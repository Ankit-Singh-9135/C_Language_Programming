// String concatenation:
// Enter first name: Ankit
// Enter last name: singh

// #include <stdio.h>
// int main()
// {

//     char s1[100], s2[100], s3[100];
//     int i, j;

//     printf("Enter first name ");
//     gets(s1);
//     printf("Entre last name ");
//     gets(s2);

//     for (i = 0; s1[i] != '\0'; i++)
//     {

//         s3[i] = s1[i]; /* strcpy */
//     }

//     for (s3[i++] = ' ', j = 0; s2[j] != '\0'; i++, j++)

//     {
//         s3[i] = s2[j]; /* strcat() */
//     }
//     s3[i] = '\0';

//     printf("Ur name is %s", s3);
// }

// Without space:========================

#include <stdio.h>

int main()
{

    char s1[100], s2[100], s3[100];
    int i, j;

    printf("Enter first name ");gets(s1);
    printf("Entre last name ");gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
    {

        s3[i] = s1[i]; /* strcpy */
    }

    for ( j = 0; s2[j] != '\0'; i++, j++)

    {
        s3[i] = s2[j]; /* strcat() */
    }
    s3[i] = '\0';

    printf("Ur name is %s", s3);
}