#include "stdio.h"

void main()
{
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2st number: ");
    scanf("%d", &num2);

    printf("Before swapping num1=%d, num2=%d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping num1=%d, num2=%d\n", num1, num2);
}