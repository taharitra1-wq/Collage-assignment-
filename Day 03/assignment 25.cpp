
#include <stdio.h>

int main()
{
    int totalDays, years, months, days;

    printf("Enter age in days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    days = totalDays % 30;

    printf("Age = %d Years, %d Months, %d Days",
           years, months, days);

    return 0;
}
