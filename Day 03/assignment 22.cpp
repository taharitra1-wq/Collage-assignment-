
#include <stdio.h>

int main()
{
    float monthlySalary, annualSalary;

    printf("Enter monthly salary: ");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("Annual Salary = %.2f", annualSalary);

    return 0;
}
