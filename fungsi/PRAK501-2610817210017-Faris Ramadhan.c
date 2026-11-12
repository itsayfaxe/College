#include <stdio.h>

int MaxNumber(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    return max;
}

int main()
{
    int a, b, c, d;
    printf("Masukkan 4 bilangan: ")
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = MaxNumber(a, b, c, d);
    printf("%d", result);
    return 0;
}