#include <stdio.h>

int main(void) {
    int a[4][2], r[4] = {0}, c[2] = {0}, t = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            r[i] += a[i][j]; c[j] += a[i][j]; t += a[i][j];
        }
    }
    printf("%d %d %d %d\n", r[0]/2, r[1]/2, r[2]/2, r[3]/2);
    printf("%d %d\n", c[0]/4, c[1]/4);
    printf("%d\n", t/8);
    return 0;
}