#include <stdio.h>
int main()
{
    int column1, column2;
    if (scanf("%d %d", &column1, &column2) != 2 || column1 <= 0 || column2 <= 0)
    {
        printf("Input tidak valid.\n");
        return 1;
    }
    if (column1 != column2)
    {
        printf("Jumlah tidak sama.\n");
        return 1;
    }

    int row1[column1], row2[column2];
    for (int i = 0; i < column1; i++)
    {
        if (scanf("%d", &row1[i]) != 1)
        {
            printf("Input tidak valid.\n");
            return 1;
        }
    }
    for (int j = 0; j < column2; j++)
    {
        if (scanf("%d", &row2[j]) != 1)
        {
            printf("Input tidak valid.\n");
            return 1;
        }
    }

    for (int i = 0; i < column1; i++)
    {
        row1[i] *= row2[i];
        printf("%d ", row1[i]);
    }
    printf("\n");

    return 0;
}