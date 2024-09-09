// Captcha code generation:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char s[10], sp[] = "@#$%%^*", ch;
    int i, n;

    while (1)
    {
        
        srand(time(0));
        for (i = 0; i < 5; i++)
        {
            n = rand() % 10 + 1;
            if (n == 0)
                s[i] = 97 + (rand() % 26) + 1;
            else if (n == 1)
                s[i] = 65 + (rand() % 26) + 1;
            else if (n == 2)
                s[i] = 48 + (rand() % 10) + 1;
            else
                s[i] = sp[(rand() % 6) + 1];
        }
        s[i] = '\0';
        printf("Captcha: %s\n", s);

        // flushall();
        fflush(stdin);
        printf("Refresh [y/n] ");
        scanf("%c", &ch);

        if (ch ==

                'n' ||
            ch ==

                'N')
            break;
    }
}