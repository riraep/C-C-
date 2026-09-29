#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    print("%d", sizeof(a));
    print("%d", sizeof(a[0]));
    print("%d", sizeof(p));
    print("%d", sizeof(*p));
}