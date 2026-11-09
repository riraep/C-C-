#include <stdio.h>

int main(void) {
    char a[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &a[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%c", a[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}