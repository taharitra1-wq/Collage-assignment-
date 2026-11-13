
#include <stdio.h>

int main()
{
    int marks1[5], marks2[5];
    int total1 = 0, total2 = 0;
    float per1, per2;
    int i;

    printf("Enter marks of Student 1 in five subjects:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks1[i]);
        total1 = total1 + marks1[i];
    }

    printf("Enter marks of Student 2 in five subjects:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks2[i]);
        total2 = total2 + marks2[i];
    }

    per1 = (total1 / 500.0) * 100;
    per2 = (total2 / 500.0) * 100;

    printf("\nStudent 1 Percentage = %.2f%%", per1);
    printf("\nStudent 2 Percentage = %.2f%%", per2);

    if(per1 > per2)
        printf("\nStudent 1 has the highest percentage.");
    else if(per2 > per1)
        printf("\nStudent 2 has the highest percentage.");
    else
        printf("\nBoth students have equal percentages.");

    return 0;
}
