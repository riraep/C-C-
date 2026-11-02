#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n == 0)
        printf("zero\n");
    else if (n > 0)
        printf("plus\n");
    else
        printf("minus\n");

    return 0;
}