
#include <stdio.h>

int main()
{
    float income, tax, totalIncome;

    printf("Enter annual income: ");
    scanf("%f", &income);

    if (income < 0)
    {
        printf("Invalid income!");
        return 0;
    }

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = income * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = income * 0.10;
    }
    else
    {
        tax = income * 0.20;
    }

    totalIncome = income - tax;

    printf("\nAnnual Income = Rs. %.2f", income);
    printf("\nTax Amount = Rs. %.2f", tax);
    printf("\nIncome After Tax = Rs. %.2f", totalIncome);

    return 0;
}
