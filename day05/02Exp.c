#include "stdio.h"

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The uppercase of the entered letter is '%c'\n", ((int)ch - 32));
    }
    else
    {
        printf("You have entered '%c' which is already in uppercase.\n", ch);
    };

    return 0;
}