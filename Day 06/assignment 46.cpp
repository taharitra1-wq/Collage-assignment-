
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate the sum of digits raised to the power
    while (temp > 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp = temp / 10;
    }

    // Check Armstrong number
    if (sum == originalNum)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);

    return 0;
}
