#include <stdio.h>

int main() {
    int number;

    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("S? %d l� s? duong.\n", number);
    } else if (number < 0) {
        printf("S? %d l� s? �m.\n", number);
    } else {
        printf("S? v?a nh?p l� s? 0 (kh�ng ph?i �m cung kh�ng ph?i duong).\n");
    }
    return 0;
}
