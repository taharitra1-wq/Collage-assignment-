
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        printf("|");

        for(j = 1; j <= 4; j++)
        {
            if(i == 1)
            {
                if(j == 1 || j == 3 || j == 4)
                    printf("  2  ");
                else
                    printf("  3  ");
            }
            else if(i == 2)
            {
                if(j == 1 || j == 4)
                    printf("  2  ");
                else
                    printf("     ");
            }
            else
            {
                printf("     ");
            }
        }

        printf(" |");
        printf("\n");
    }

    return 0;
}
