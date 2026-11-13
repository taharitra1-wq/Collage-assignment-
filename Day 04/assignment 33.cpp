
#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    if (totalSeconds >= 0)
    {
        hours = totalSeconds / 3600;
        totalSeconds = totalSeconds % 3600;

        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;

        printf("Time = %d Hours, %d Minutes, %d Seconds",
               hours, minutes, seconds);
    }
    else
    {
        printf("Invalid input!");
    }

    return 0;
}
