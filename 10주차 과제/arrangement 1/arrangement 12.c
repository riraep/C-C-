#include <stdio.h>

int main(void) {
    int a[100];
    int n = 0;

    while (n < 100) {
        int x;
        if (scanf("%d", &x) != 1) break;
        if (x == 0) break;
        a[n++] = x;
    }

    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("%d\n", max - min);

    return 0;
}   