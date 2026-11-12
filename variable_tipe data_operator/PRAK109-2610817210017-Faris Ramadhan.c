#include <stdio.h>

int main()
{
    int yu_army = 958730;
    int altar_army = 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d pasukan\n", yu_army);
    printf("Jumlah pahlawan = %d pahlawan\n", altar_army);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", yu_army / altar_army);
    return 0;
}