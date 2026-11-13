
#include <stdio.h>

int main()
{
    int i, j, k;

    // Upper part
    for(i = 1; i <= 3; i++)
    {
        for(k = 1; k <= 3-i; k++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*   ");
        }

        printf("\n");
    }

    // Lower part
    for(i = 2; i >= 1; i--)
    {
        for(k = 1; k <= 3-i; k++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*   ");
        }

        printf("\n");
    }

    return 0;
}
