#include <stdio.h>

int main() {
    int number;

    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);
    
   if (number % 3 == 0 && number % 5 == 0) {
        printf("S? %d chia h?t cho c? 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("S? %d chia h?t cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("S? %d chia h?t cho 5.\n", number);
    } else {
        printf("S? %d không chia h?t cho 3 ho?c 5.\n", number);
    }

    return 0;
}
