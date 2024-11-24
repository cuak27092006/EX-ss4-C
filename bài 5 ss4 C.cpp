#include <stdio.h>

int main() {
    int so1, so2, so3;

    printf("Nh?p vào s? th? nh?t: ");
    scanf("%d", &so1);
    printf("Nh?p vào s? th? hai: ");
    scanf("%d", &so2);
    printf("Nh?p vào s? th? ba: ");
    scanf("%d", &so3);

    if ((so3 > so1 && so3 < so2) || (so3 > so2 && so3 < so1)) {
        printf("S? %d n?m trong kho?ng gi?a %d và %d.\n", so3, so1, so2);
    } else {
        printf("S? %d không n?m trong kho?ng gi?a %d và %d.\n", so3, so1, so2);
    }

    return 0;
}
  
