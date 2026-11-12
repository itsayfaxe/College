#include <stdio.h>
int main()
{
    int a = 400000, b = 350000;
    float y = 0.21, x = 0.13;
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);

    printf("Sepatu A mendapat diskon %.0f%%", x * 100);
    printf(" sehingga harga sepatu A menjadi %d\n", a - (int)(a * x));

    printf("Sepatu B mendapat diskon %.0f%%", y * 100);
    printf(" sehingga harga sepatu B menjadi %d\n", b - (int)(b * y));

    return 0;
}