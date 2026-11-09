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

    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            count++;
            sum += a[i];
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    if (count > 0) {
        printf("avg : %.1f\n", (double)sum / count);
    } else {
        printf("avg : 0.0\n");
    }

    return 0;
}