#include <stdio.h>

int main(void) {
    int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", a[i]);
        if (i < 9) printf(" ");
    }
    printf("\n");

    return 0;
}