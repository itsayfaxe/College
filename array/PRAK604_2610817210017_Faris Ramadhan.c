#include <stdio.h>
#include <string.h>
int main()
{
    char message[100];
    char reply[100];
    char code[100];

    if (fgets(message, sizeof message, stdin) == NULL)
    {
        printf("Input tidak valid.\n");
        return 1;
    }
    message[strcspn(message, "\n")] = '\0';

    if (fgets(reply, sizeof reply, stdin) == NULL)
    {
        printf("Input tidak valid.\n");
        return 1;
    }
    reply[strcspn(reply, "\n")] = '\0';

    if (strlen(message) != strlen(reply))
    {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 1;
    }

    int i;
    for (i = 0; message[i] != '\0' && reply[i] != '\0'; i++)
    {
        if (message[i] == ' ' && reply[i] == ' ')
            code[i] = ' ';
        else if (message[i] == reply[i])
            code[i] = '*';
        else
            code[i] = '#';
    }
    code[i] = '\0';

    char similar = '*';
    char amongus = '#';
    int count1 = 0;
    int count2 = 0;

    for (i = 0; code[i] != '\0'; i++)
    {
        if (code[i] == similar)
        {
            count1++;
        }
        if (code[i] == amongus)
        {
            count2++;
        }
    }

    printf("%s\n", code);
    printf("%c = %d\n", similar, count1);
    printf("%c = %d\n", amongus, count2);

    if (count1 >= count2)
    {
        printf("Pesan Asli\n");
    }
    else
    {
        printf("Pesan Palsu\n");
    }

    return 0;
}