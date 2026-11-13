
#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int num = 1;
    int top = 0, bottom = 2;
    int left = 0, right = 2;

    while(top <= bottom && left <= right)
    {
        for(i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        for(i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        for(i = right; i >= left; i--)
            a[bottom][i] = num++;
        bottom--;

        for(i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
