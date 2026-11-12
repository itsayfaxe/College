#include <stdio.h>
#include <math.h>

int main()
{
    int r, t;
    scanf("%d", &r);
    scanf("%d", &t);

    float volume, circumference, area, pi;
    pi = 22.0 / 7;
    volume = pi * r * r * t;
    circumference = 2 * pi * r;
    area = pi * r * 2 * (t + r);

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", circumference);

    return 0;
}