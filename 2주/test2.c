#include <stdio.h>

 int main()
 {
    int month;
        
    scanf("%d",&month);
    switch(month)
    {
        case 2:
            printf("28");
            break;
        case 4:
            printf("aaa");
        case 6:
            printf("bbb");
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("31");
    }

    return 0;
 }