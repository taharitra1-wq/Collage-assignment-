#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    printf("Ceiling value = %.0f\n", ceil(n));
    printf("Floor value = %.0f", floor(n));

    return 0;
}