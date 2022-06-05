#include <stdio.h>

int main () {
    int x, total = 0, ganjil = 0, genap = 0, i = 0;

    while (total < 30) {
        i++;
        printf("Masukkan bilangan ke - %d    : ", i);
        scanf("%d", &x);

        if (x >= 0) {
            if ((x % 2) == 0) {
                genap = genap + 1; 
            }

            else if ((x % 2) != 0) {
                ganjil = ganjil + 1; 
            }

            total = total + x;
        }

        else {
            break;
        }
    }

    if (x < 0) {
        printf("Program hanya menerima bilangan positif. Coba lagi!\n");
    }

    else {
        if ((x % 2) == 0) {
                genap = genap - 1; 
            }

            else if ((x % 2) != 0) {
                ganjil = ganjil - 1; 
            }
        printf("Bil. Ganjil : %d\n", ganjil);
        printf("Bil. Genap  : %d\n", genap);
        printf("Jumlah      : %d\n", total - x);
    }
    
    return 0;
}