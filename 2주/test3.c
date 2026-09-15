#include <stdio.h>

int main()
{
    int n, a;
    int temp;

    scanf("%d", &n);
    scanf("%d", &a);

    temp = a;
    while(temp > 0)
    {
        printf("%d", a*(temp % 10));
        temp /= 10;
    }
    printf("%d", n*a);
    return 0;
}