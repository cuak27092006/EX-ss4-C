#include <stdio.h>

int main() {
    int chiSoDauThang, chiSoCuoiThang, soDien;
    float tienDien = 0;

    printf("Nh?p ch? s? cu (kWh): ");
    scanf("%d", &chiSoDauThang);
    printf("Nh?p ch? s? m?i (kWh): ");
    scanf("%d", &chiSoCuoiThang
    soDien = chiSoDauThang - chiSoCuoiThang;

    if (soDien < 0) {
        printf("L?i: Ch? s? m?i ph?i l?n hon ho?c b?ng ch? s? cu.\n");
        return 1;
    }

    if (soDien <= 50) {
        tienDien = soDien * 10000;
    } else if (soDien <= 100) {
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    } else if (soDien <= 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    } else if (soDien <= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
    }

    printf("S? di?n tiêu th?: %d kWh\n", soDien);
    printf("Ti?n di?n ph?i tr?: %.2f VND\n", tienDien);

    return 0;
}
