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

    for (int i = n - 1; i >= 0; i--) {
        printf("%d", a[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}