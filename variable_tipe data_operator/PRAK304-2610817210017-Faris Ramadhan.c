#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a < 0 || a >= 100)
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    else if (a == 0)
    {
        printf("Nol");
    }
    else if (a < 10)
    {
        printf("Satuan");
    }
    else if (a == 10)
    {
        printf("Puluhan");
    }
    else if (a <= 19)
    {
        printf("Belasan");
    }
    else
    {
        printf("Puluhan");
    }

    return 0;
}