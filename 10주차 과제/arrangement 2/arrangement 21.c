#include <stdio.h>

int main(void) {
    int a[5][5] = {0};

    a[0][0] = 1;
    a[0][2] = 1;
    a[0][4] = 1;

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int left = 0, right = 0;
            if (j > 0) left = a[i - 1][j - 1];
            if (j < 4) right = a[i - 1][j + 1];
            a[i][j] = left + right;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", a[i][j]);
            if (j < 4) printf(" ");
        }
        printf("\n");
    }

    return 0;
}