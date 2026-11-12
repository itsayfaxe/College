#include <stdio.h>
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int limit = 0;
    int max = -100000;
    int min = 100000;
    int number;
    printf("Masukkan banyak jumlah input: ");
    scanf("%d", &number);
    int i = 1;
    while (limit < number)
    {
        int value;
        printf("Masukkan input ke-%d: ", i);
        scanf("%d", &value);
        max = maximum(max, value);
        min = minimum(min, value);
        limit++;
        i++;
    }
    printf("Nilai terbesar adalah \"%d\" dan nilai terkecil adalah \"%d\"", max, min);
}