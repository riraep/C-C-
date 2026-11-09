#include <stdio.h>

int main(void) {
    int a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("%d %d\n", max, min);

    return 0;
}