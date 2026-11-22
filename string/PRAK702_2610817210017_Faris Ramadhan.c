#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[50];

    if (fgets(word, sizeof word, stdin) == NULL)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    word[strcspn(word, "\n")] = '\0';

    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = tolower(word[i]);
    }

    int left = 0;
    int right = strlen(word) - 1;
    int palindrom = 1;

    while (left < right)
    {
        if (word[left] != word[right])
        {
            palindrom = 0;
            break;
        }
        left++;
        right--;
    }

    if (palindrom)
    {
        printf("Kata \'%s\' adalah palindrom\n", word);
    }
    else
    {
        printf("Kata \'%s\' bukan palindrom\n", word);
    }
    return 0;
}