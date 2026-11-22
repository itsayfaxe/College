#include <stdio.h>
#include <string.h>

struct participant
{
    char name[50];
    int age;
    float score;
};

int main()
{

    struct participant data;
    printf("Nama: ");
    fgets(data.name, 50, stdin);
    data.name[strcspn(data.name, "\n")] = '\0';

    printf("Umur: ");
    scanf("%d", &data.age);

    printf("Skor: ");
    scanf("%f", &data.score);

    printf("Data Peserta: \n");
    printf("Nama: %s\n", data.name);
    printf("Umur: %d tahun\n", data.age);
    printf("Skor: %g\n", data.score);

    return 0;
}