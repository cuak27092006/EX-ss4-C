#include <stdio.h>

int main() {
    int canh1, canh2, canh3;

    printf("Nh?p v�o c?nh 1: ");
    scanf("%d", &canh1);
    printf("Nh?p v�o c?nh 2: ");
    scanf("%d", &canh2);
    printf("Nh?p v�o c?nh 3: ");
    scanf("%d", &canh3);
  
    if(canh1 > 0 && canh2 > 0 && canh3 > 0 && (canh1 + canh2 > canh3) && (canh1 + canh3 > canh2) && (canh2 + canh3 > canh1)) {
        printf("L� 3 c?nh cu? 1 tam gi�c.\n");
    } else {
        printf("Kh�ng ph?i 3 c?nh cua 1 tam gi�c.\n");
    }

    return 0;
}

