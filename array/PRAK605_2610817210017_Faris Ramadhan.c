#include <stdio.h>
int main()
{

    int ordo;

    if (scanf("%d", &ordo) != 1)
    {
        printf("Input tidak valid\n");
        return 1;
    }

    int matrixA[ordo][ordo];
    int matrixB[ordo][ordo];

    printf("Matrix A\n");
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            if (scanf("%d", &matrixA[i][j]) != 1)
            {
                printf("Input tidak valid\n");
                return 1;
            }
        }
    }

    printf("Matrix B\n");
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            if (scanf("%d", &matrixB[i][j]) != 1)
            {
                printf("Input tidak valid\n");
                return 1;
            }
        }
    }

    int matrixC[ordo][ordo];
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            matrixC[i][j] = 0;
            for (int k = 0; k < ordo; k++)
            {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Matrix AXB\n");
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            printf("%4d", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}