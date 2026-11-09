#include <stdio.h>

int main(void) {
    int a[10];
    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            odd += a[i];    // 홀수 번째 입력 (인덱스 0, 2, 4, ...)
        } else {
            even += a[i];   // 짝수 번째 입력 (인덱스 1, 3, 5, ...)
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}