#include "stdio.h"

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int larget = a > b ? a : b;

    printf("The largest number is: %d\n", larget);

    return 0;
}