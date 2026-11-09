#include <stdio.h>

int main(void) {
    char a[26];

    for (int i = 0; i < 26; i++) {
        a[i] = 'A' + i;
    }

    for (int i = 25; i >= 0; i--) {
        printf("%c", a[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}