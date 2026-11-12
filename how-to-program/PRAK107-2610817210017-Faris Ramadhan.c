#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4, b = 5, c = 7, harga_tanah = 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", a + b + c);
    printf("Harga tanah Per Meter adalah %d\n", harga_tanah);
    printf("\n");
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", (a + b + c) * 85000);
    return 0;
}