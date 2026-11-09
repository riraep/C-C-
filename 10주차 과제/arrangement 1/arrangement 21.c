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

    printf("%d\n", n);

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d", a[i] * 2);
        } else {
            printf("%d", a[i] / 2);
        }
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}