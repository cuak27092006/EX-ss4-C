#include <stdio.h>

int main() {
    int number;

    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);
    
   if (number % 2 == 0) {
        printf("S? %d là s? ch?n.\n", number);
    } else {
        printf("S? %d là s? l?.\n", number);
    }

    return 0;
}
