#include "stdio.h"

void main()
{
    int height, base;

    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    printf("Enter base of the triangle: ");
    scanf("%d", &base);

    float area = 0.5 * height * base;

    printf("Area of the triangle is %f\n", area);
}