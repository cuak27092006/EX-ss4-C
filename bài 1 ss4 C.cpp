#include <stdio.h>

int main() {
    int number;

    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("S? %d là s? duong.\n", number);
    } else if (number < 0) {
        printf("S? %d là s? âm.\n", number);
    } else {
        printf("S? v?a nh?p là s? 0 (không ph?i âm cung không ph?i duong).\n");
    }
    return 0;
}
