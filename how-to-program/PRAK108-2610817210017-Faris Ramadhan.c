#include <stdio.h>
#include <math.h>

int main()
{
    int putaran = 5, jarak_tempuh = 14;

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("jarak tempuh Pak Dengklek = %d Kilometer\n", jarak_tempuh);
    printf("\n");
    printf("Jawaban:\n");
    float keliling = (float)jarak_tempuh / putaran;
    float jari_jari = keliling / (2 * M_PI);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}