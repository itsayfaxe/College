#include <stdio.h>

int main() {
    float val1, val2, hasil;

    // Input nilai pertama
    printf("Masukan nilai pertama : ");
    scanf("%f", &val1);

    // Input nilai kedua
    printf("Masukan nilai kedua : ");
    scanf("%f", &val2);

    // Proses penjumlahan
    hasil = val1 + val2;

    // Output hasil dengan format desimal
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", val1, val2, hasil);

    return 0;
}
