#include <stdio.h>

int main() {
    int menu;
    

    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            printf("You selected ADD.\n");
            break;
        case 2:
            printf("You selected EDIT.\n");
            break;
        case 3:
            printf("You selected DEL.\n");
            break;
    }
    
    return 0;
}