#include <stdio.h>

int main() {
    int nam;

    printf("Nh?p v�o s? nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("Nam %d l� nam nhu?n.\n", nam);
    } else {
        printf("Nam %d kh�ng ph?i l� nam nhu?n.\n", nam);
    }

    return 0;
}
