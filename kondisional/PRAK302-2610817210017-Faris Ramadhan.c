#include <stdio.h>

int main()
{
    int score;

    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Nilai tidak valid");
    }
    else if (score >= 80)
    {
        printf("A");
    }
    else if (score >= 70)
    {
        printf("B");
    }
    else if (score >= 60)
    {
        printf("C");
    }
    else if (score >= 50)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }

    return 0;
}