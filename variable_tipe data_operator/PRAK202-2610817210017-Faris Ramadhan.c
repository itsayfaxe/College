#include <stdio.h>
int main()
{

    float first, second;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &first);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &second);

    float result;
    result = first + second;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", first, second, result);

    return 0;
}