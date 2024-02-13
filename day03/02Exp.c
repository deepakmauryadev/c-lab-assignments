
#include "stdio.h"

void main()
{
    int temp_in_c;

    printf("Enter temperature in centrigrade: ");
    scanf("%d", &temp_in_c);

    float temp_in_f = (temp_in_c * 9 / 5) + 32.00;

    printf("The Fahrenheit temprature is %f\n", temp_in_f);
}