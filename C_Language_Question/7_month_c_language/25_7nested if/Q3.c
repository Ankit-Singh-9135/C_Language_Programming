// IRCTC Login:
#include <stdio.h>
#include <string.h>
int main()
{
    char user[20], pass[20], cap[20];
    printf("Enter the user ");
    scanf("%s", user);
    printf("Enter the pass word ");
    scanf("%s", pass);
    printf("Enter the captcha ");
    scanf("%s", cap);

    if (strcmp(user, "Ankit") == 0)
    {
        if (strcmp(pass, "Indian") == 0)
        {
            if (strcmp(cap, "Hyd-1") == 0)
            {
                printf("Welcome to IRCTC");
            }
            else
            {
                printf("Invalid Captcha");
            }
        }
        else
        {
            printf("Invalid password");
        }
    }
    else
    {
        printf("Invalid username");
    }
}