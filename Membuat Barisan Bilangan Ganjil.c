#include <stdio.h>

int main () {
    int i, total = 0, n, ganjil = 1;

    printf("Masukkan banyak bilangan ganjil : ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 0; i < n; i++) {
            printf("%d", ganjil);

            if (i != (n - 1)) {
                printf(", ");
            }

            total = total + ganjil;
            ganjil = ganjil + 2;
        }
        printf("\n");
        printf("Jumlah : %d\n", total);
    }

    else {
        printf("Program hanya menerima bilangan asli. Coba lagi!\n");
    }

    return 0;
}
