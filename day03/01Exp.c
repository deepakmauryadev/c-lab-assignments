#include "stdio.h"

void main()
{
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2st number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum is %d\n", sum);
}