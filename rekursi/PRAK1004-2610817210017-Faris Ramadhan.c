#include <stdio.h>
#include <math.h>

int disc_shift(int g)
{
    if (g == 1)
    {
        return 1;
    }
    return 2 * disc_shift(g - 1) + 1;
}

int main()
{
    int g;
    scanf("%d", &g);

    printf("Jumlah langkah minimum untuk %d cakram adalah %d", g, disc_shift(g));
    return 0;
}