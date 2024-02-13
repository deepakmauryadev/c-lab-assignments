#include "stdio.h"

int main()
{
    int t;

    printf("Enter the time (in seconds): ");
    scanf("%d", &t);

    int h = t / (60 * 60);
    int m = (t % (60 * 60)) / 60;
    int s = (t % (60 * 60)) % 60;

    printf("%d seconds = %d hours, %d minutes, %d seconds\n", t, h, m, s);

    return 0;
}