#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100]; printf("Kalimat: ");
    if (fgets(sentence, sizeof sentence, stdin) == NULL)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    sentence[strcspn(sentence, "\n")] = '\0';

    char vocal[] = "aiueoAIUEO";
    int count1 = 0, count2 = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        int letter = 0;
        for (int j = 0; vocal[j] != '\0'; j++)
        {
            if (sentence[i] == ' ')
                continue;
            if (sentence[i] == vocal[j])
            {
                count1++;
                letter = 1;
                break;
            }
        }
        if (!letter && ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z')))
        {
            count2++;
        }
    }

    printf("Jumlah Vokal : %d\n", count1);
    printf("Jumlah Konsonan: %d\n", count2);

    return 0;
}