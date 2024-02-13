#include "stdio.h"

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int fd = n / 100000;
    int ld = n % 10;

    int sum = fd + ld;

    printf("Sum of digit is: %d", sum);

    return 0;
}