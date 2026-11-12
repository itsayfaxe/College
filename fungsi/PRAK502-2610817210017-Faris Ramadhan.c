#include <stdio.h>
#include <math.h>

int substraction(int value1, int value2)
{
    return value1 - value2;
}
int absolute_value(int number)
{
    if (number < 0)
        return -number;
    return number;
}
int main()
{
    int a, b, c, d;
    printf("Masukkan nilai x1, y1 dan x2, y2: ");
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int result = absolute_value(substraction(a, b)) + absolute_value(substraction(c, d));
    printf("%d", result);
    return 0;
}