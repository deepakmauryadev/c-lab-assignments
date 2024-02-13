
#include "stdio.h"

void main()
{
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;

    printf("Area of the circle is %f\n", area);
}