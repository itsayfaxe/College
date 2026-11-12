#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, circumference, area;
    scanf("%d", &a);
    scanf("%d", &b);

    c = sqrt((b * b) - (a * a));
    circumference = a + b + c;
    area = 0.5 * a * c;

    printf("Alas= %d cm\n", c);
    printf("Tinggi= %d cm\n", a);
    printf("Keliling= %d cm\n", circumference);
    printf("Luas= %d cm^2\n", area);

    return 0;
}
