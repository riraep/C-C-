#include <stdio.h>

int main(void) {
    int cnt[11] = {0};
    int x;

    while (scanf("%d", &x) == 1) {
        if (x == 0) break;
        cnt[x / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (cnt[i] > 0) {
            printf("%d : %d\n", i * 10, cnt[i]);
        }
    }

    return 0;
}