#include <stdio.h>

int main() {
    int nam;

    printf("Nh?p vào s? nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("Nam %d là nam nhu?n.\n", nam);
    } else {
        printf("Nam %d không ph?i là nam nhu?n.\n", nam);
    }

    return 0;
}
