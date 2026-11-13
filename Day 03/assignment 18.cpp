#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");

    return 0;
}