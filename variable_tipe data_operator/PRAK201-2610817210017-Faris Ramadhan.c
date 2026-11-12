#include <stdio.h>

int main()
{
    char name[50], nim[14], ttl[30], address[100], hobby[50], phone_number[20];
    int paralel;

    printf("Masukkan nama Anda: ");
    scanf(" %[^\n]", name);

    printf("Masukkan NIM Anda: ");
    scanf(" %[^\n]", nim);

    printf("Masukkan kelas paralel Anda: ");
    scanf("%d", &paralel);

    printf("Masukkan tempat/tanggal lahir Anda: ");
    scanf(" %[^\n]", ttl);

    printf("Masukkan alamat Anda: ");
    scanf(" %[^\n]", address);

    printf("Masukkan hobby Anda: ");
    scanf(" %[^\n]", hobby);

    printf("Masukkan nomor HP Anda: ");
    scanf(" %[^\n]", phone_number);

    printf("\n                         \n");
    printf("Nama                     : %s\n", name);
    printf("NIM                      : %s\n", nim);
    printf("Kelas Paralel            : %d\n", paralel);
    printf("Tempat/Tanggal lahir     : %s\n", ttl);
    printf("Alamat                   : %s\n", address);
    printf("Hobby                    : %s\n", hobby);
    printf("No. HP                   : %s\n", phone_number);

    return 0;
}
