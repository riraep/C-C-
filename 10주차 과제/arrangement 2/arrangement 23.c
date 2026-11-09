#include <stdio.h>

int main(void) {
    int a[10][10] = {0};
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d", a[i][j]);
            if (j < i) printf(" ");
        }
        printf("\n");
    }

    return 0;
}