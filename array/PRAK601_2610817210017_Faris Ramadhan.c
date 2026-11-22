#include <stdio.h>
int main()
{
    int row, column;

    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column <= 0)
    {
        printf("Input tidak valid.\n");
        return 1;
    }

    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Input tidak valid.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}