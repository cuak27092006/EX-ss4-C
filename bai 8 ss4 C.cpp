#include <stdio.h>

int main() {
    int canh1, canh2, canh3;

    printf("Nh?p vào c?nh 1: ");
    scanf("%d", &canh1);
    printf("Nh?p vào c?nh 2: ");
    scanf("%d", &canh2);
    printf("Nh?p vào c?nh 3: ");
    scanf("%d", &canh3);
  
    if(canh1 > 0 && canh2 > 0 && canh3 > 0 && (canh1 + canh2 > canh3) && (canh1 + canh3 > canh2) && (canh2 + canh3 > canh1)) {
        printf("Là 3 c?nh cu? 1 tam giác.\n");
    } else {
        printf("Không ph?i 3 c?nh cua 1 tam giác.\n");
    }

    return 0;
}

