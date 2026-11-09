#include <stdio.h>

int main(void) {
    int a[10];
    int min = 1001;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] < min) min = a[i];
    }

    printf("%d\n", min);

    return 0;
}