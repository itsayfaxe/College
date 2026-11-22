#include <stdio.h>
int main()
{
    int room;

    if (scanf("%d", &room) != 1 || room <= 0)
    {
        printf("Input tidak valid.\n");
        return 1;
    }

    int zetsu[room];

    for (int i = 0; i < room; i++)
    {
        if (scanf("%d", &zetsu[i]) != 1 || zetsu[i] <= 0)
        {
            printf("Input tidak valid.\n");
            return 1;
        }
        zetsu[i] = zetsu[i] * (i + 1);
    }

    for (int i = 0; i < room; i++)
    {
        printf("%d ", zetsu[i]);
    }
    printf("\n");
    
    return 0;
}