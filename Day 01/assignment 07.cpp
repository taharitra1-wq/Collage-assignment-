#include <stdio.h>

int main()
{
    int n, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n - (n / 10) * 10;

    printf("Last digit = %d", last);

    return 0;
}