#include <stdio.h>
int main()
{

    int a, b, i, j, x, y;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &x);
    scanf("%d", &y);

    float operation;
    operation = (a - b) * ((float)i / j) - (x + y);

    printf("%.3f", operation);

    return 0;
}