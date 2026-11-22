#include <stdio.h>
#include <string.h>

struct data
{
    char name[50];
    int age;
    float score;
};

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    if (n < 1 || n > 10)
    {
        printf("Input tidak valid\n");
        return 1;
    }

    struct data participants[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %f", participants[i].name, &participants[i].age, &participants[i].score);
    }

    struct data highest;
    strcpy(highest.name, participants[0].name);
    highest.age = participants[0].age;
    highest.score = participants[0].score;

    for (int i = 1; i < n; i++)
    {
        if (participants[i].score > highest.score)
        {
            highest = participants[i];
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %g\n", highest.name, highest.score);

    return 0;
}