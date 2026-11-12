#include <stdio.h>

int number_of_digits(int x)
{
    if (x == 0){
        return 0;
    }
    return (x % 10) + number_of_digits(x / 10);
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d", number_of_digits(x));
    return 0;
}