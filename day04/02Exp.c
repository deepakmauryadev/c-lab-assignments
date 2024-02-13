#include "stdio.h"

int main()
{
    int d;

    printf("Enter the distanace (in meters): ");
    scanf("%d", &d);

    int km = d / 1000;
    int m = d % 1000;

    printf("%d meters = %d Km, %d meters", d, km, m);

    return 0;
}