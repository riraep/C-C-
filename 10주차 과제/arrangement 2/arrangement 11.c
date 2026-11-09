#include <stdio.h>

int main(void) {
    int a[4][4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            a[i][3] += a[i][j];  
            a[3][j] += a[i][j];   
        }
        a[3][3] += a[i][3];       
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d", a[i][j]);
            if (j < 3) printf(" ");
        }
        printf("\n");
    }

    return 0;
}