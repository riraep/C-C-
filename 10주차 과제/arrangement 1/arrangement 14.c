#include <stdio.h>

int main(void) {
    int score[10];
    int sum = 0;
    int oddSum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            sum += score[i];      // 짝수 번째 입력 (인덱스 1, 3, 5, ...)
        } else {
            oddSum += score[i];   // 홀수 번째 입력 (인덱스 0, 2, 4, ...)
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", oddSum / 5.0);

    return 0;
}