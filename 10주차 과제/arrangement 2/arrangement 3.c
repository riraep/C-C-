#include <stdio.h>

int main(void) {
    int cnt[10] = {0};
    int x;

    while (scanf("%d", &x) == 1) {
        if (x == 0) break;
        cnt[x % 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (cnt[i] > 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }

    return 0;
}