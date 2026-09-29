#include <stdio.h>

int main(){
    int cut[7] = {0};
    int num;

    for(int i = 0; i <10; i++){
        scanf("%d", &num);
        cut[num]++;
    }
    for(int i = 1; i<=6; i++)
    {
        printf("%d : %d\n", i, cut[i]);
    }
}