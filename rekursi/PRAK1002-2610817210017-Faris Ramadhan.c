#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Masukkan jumlah suku: ");
    scanf("%d", &n);

    int deret_fibonacci[n];

    for (int i = 0; i < n; i++)
    {
        deret_fibonacci[i] = fibonacci(i);
    }

    printf("Deret Fibonacci: ");

    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", deret_fibonacci[i]);

        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}