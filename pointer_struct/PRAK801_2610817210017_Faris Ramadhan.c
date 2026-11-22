#include <stdio.h>
int main()
{
    int value;
    int *ptr = &value;
    if(scanf("%d", &value) != 1){
        printf("Input tidak valid\n");
        return 1;
    }

    printf("Nilai variabel : %d\n", value);
    printf("Alamat variabel : %p\n", &value);
    printf("Nilai melalui pointer : %d\n", *ptr);

    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer : %d\n", value);

    return 0;
}