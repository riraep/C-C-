#include <stdio.h>

int main(void) {
    int cnt[26] = {0};
    char ch;

    while (scanf(" %c", &ch) == 1) {
        if (ch < 'A' || ch > 'Z') break;
        cnt[ch - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            printf("%c : %d\n", 'A' + i, cnt[i]);
        }
    }

    return 0;
}