#include <stdio.h>

int main(void) {
    char a[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}