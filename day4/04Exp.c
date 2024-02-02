#include "stdio.h"

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int d1 = n / 100;
    int d2 = (n - (d1 * 100)) / 10;
    int d3 = n % 10;

    int sum = d1 + d2 + d3;

    printf("Sum of digits is: %d", sum);

    return 0;
}