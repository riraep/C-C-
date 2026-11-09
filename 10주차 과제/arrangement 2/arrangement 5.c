#include <stdio.h>

int main(void) {
    int f[20];

    f[0] = 1;
    f[1] = 1;

    for (int i = 2; i < 20; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d", f[i]);
        if (i < 19) printf(" ");
    }
    printf("\n");

    return 0;
}