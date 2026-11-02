#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);

int c = (b + 100) - a;
    printf("%d\n", c);
    
    if(c > 0) {
    printf("Obesity\n");
    printf("Need control\n");
    }
    return 0;
}