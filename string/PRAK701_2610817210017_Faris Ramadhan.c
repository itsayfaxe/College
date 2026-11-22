#include <stdio.h>
#include <string.h>
int main()
{
    char front[100];
    char back[100];

    printf("Nama Depan : ");
    if(fgets(front, sizeof front, stdin) == NULL)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    front[strcspn(front, "\n")] = '\0';

    printf("Nama Belakang : ");
    if (fgets(back, sizeof back, stdin) == NULL)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    back[strcspn(back, "\n")] = '\0';

    size_t panjang = strlen(front) + strlen(back);
    strcat(front, " ");
    strcat(front, back);

    printf("Nama Lengkap : %s\n", front);
    printf("Panjang Nama (tanpa spasi) : %zu\n", panjang);
    return 0;
}