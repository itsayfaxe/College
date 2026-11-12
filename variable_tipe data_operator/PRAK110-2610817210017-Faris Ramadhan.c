#include <stdio.h>
#include <math.h>

int main()
{
    int tinggi = 12, alas = 5;

    printf("Diketahui :\n");
    printf("Alas = %dcm\n", alas);
    printf("Tinggi = %dcm\n", tinggi);
    printf("\n");
    double miring = sqrt((alas * alas) + (tinggi * tinggi));
    int keliling = (alas + tinggi + miring), luas = 0.5 * alas * tinggi;
    printf("Jawab :\n");
    printf("Sisi A = %dcm\n", tinggi);
    printf("Sisi B = %.0fcm\n", miring);
    printf("Sisi C = %dcm\n", alas);
    printf("Keliling = %dcm\n", keliling);
    printf("Luas = %dcm\n", luas);
    return 0;
}