#include <stdio.h>

int main(void) {
    int a[100];
    int n;

    scanf("%d", &n);

    a[0] = 100;
    a[1] = n;

    printf("%d %d", a[0], a[1]);

    int i = 2;
    while (a[i - 1] >= 0) {
        a[i] = a[i - 2] - a[i - 1];
        printf(" %d", a[i]);
        i++;
    }
    printf("\n");

    return 0;
}