#include <stdio.h>

int main(void)
{
    char c;

    scanf(" %c", &c);

    switch (c)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Usually\n");
        break;
    default:
        printf("error\n");
        break;
    }

    return 0;
}