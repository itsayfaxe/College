#include <stdio.h>
void change(int *andi, int *budi)
{
    int temp;
    temp = *andi;
    *andi = *budi;
    *budi = temp;
}

int main()
{
    int ticket_andi, ticket_budi;
    if (scanf("%d %d", &ticket_andi, &ticket_budi) != 2)
    {
        printf("Input tidak valid\n");
        return 0;
    }
    if (ticket_andi < 1 || ticket_budi < 1)
    {
        printf("Input tidak valid\n");
        return 0;
    }

    printf("Sebelum ditukar: Andi: %d, Budi: %d\n", ticket_andi, ticket_budi);

    change(&ticket_andi, &ticket_budi);

    printf("Sesudah ditukar: Andi: %d, Budi: %d\n", ticket_andi, ticket_budi);

    return 0;
}