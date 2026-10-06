#include <stdio.h>

int main(){
    for (int i = 1; i<=6; i++)
{
    int star;
    if (i<=3)
        star =i;
    else
        star = 6-i;

    for (int j = 1; j<=star; j++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}