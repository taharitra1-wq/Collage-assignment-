
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity meter reading: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 150)
    {
        bill = units * 15;
    }
    else if (units <= 200)
    {
        bill = units * 20;
    }
    else
    {
        bill = units * 25;
    }

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}
