#include <stdio.h>
#include <string.h>

int main()
{
    char desc[200];

    if (fgets(desc, sizeof desc, stdin) == NULL)
    {
        printf("Input tidak valid\n");
        return 0;
    }
    desc[strcspn(desc, "\n")] = '\0';

    if (strlen(desc) > 20)
    {
        printf("%.20s...", desc);
    }
    else
    {
        printf("%s", desc);
    }

    return 0;
}