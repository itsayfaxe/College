#include <stdio.h>
int main()
{
    int a = 4, b = 8, c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("hasil dari a dikali b dibagi c adalah %.6f\n", (float)(a * b) / c);

    return 0;
}