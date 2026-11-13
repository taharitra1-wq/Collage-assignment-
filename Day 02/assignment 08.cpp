#include <stdio.h>

int main()
{
    float r, l, w, b, h, s;
    float circle, rectangle, triangle, square;

    // Area of Circle
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    circle = 3.14 * r * r;

    // Area of Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &w);
    rectangle = l * w;

    // Area of Triangle
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &b, &h);
    triangle = 0.5 * b * h;

    // Area of Square
    printf("Enter side of square: ");
    scanf("%f", &s);
    square = s * s;

    printf("\nArea of Circle = %.2f", circle);
    printf("\nArea of Rectangle = %.2f", rectangle);
    printf("\nArea of Triangle = %.2f", triangle);
    printf("\nArea of Square = %.2f", square);

    return 0;
}