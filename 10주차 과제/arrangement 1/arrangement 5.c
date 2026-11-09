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

    int first = 1;
    for (int i = 1; i < n; i += 2) {
        if (!first) printf(" ");
        printf("%d", a[i]);
        first = 0;
    }
    printf("\n");

    return 0;
}