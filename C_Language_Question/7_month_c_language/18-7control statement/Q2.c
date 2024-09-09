// Read baby age in years, months, weeks and days and find the
// baby age in total days.
#include <stdio.h>
int main()
{
    int tday, y, m, w, d;
    printf("Enter baby age in year,month,weeks and days");
    scanf("%d%d%d%d", &y, &m, &w, &d);
    tday = y * 365 + m * 30 + w * 7 + d;
    printf("Baby age %d days ", tday);
}