
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int toss;

    srand(time(0));

    printf("Cricket Match Coin Toss\n");

    toss = rand() % 2;

    if (toss == 0)
    {
        printf("Toss Result: HEADS\n");
        printf("Team A wins the toss!");
    }
    else
    {
        printf("Toss Result: TAILS\n");
        printf("Team B wins the toss!");
    }

    return 0;
}
