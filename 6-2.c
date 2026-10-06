#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {        //행
    for (int j = 5; j  >= i; j--) {     //열

            printf("*");
        }
        printf("\n");           
    }

    return 0;
}
