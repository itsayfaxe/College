#include <stdio.h>

int main()
{

    int sec_per_minute = 60;
    int sec_per_hour = 60 * 60;
    int sec_per_day = 24 * 60 * 60;

    int sec;
    scanf("%d", &sec);

    if (sec < 0)
    {
        printf("Waktu tidak valid\n");
    }
    else
    {
        int day = sec / sec_per_day;
        int remain_sec = sec % sec_per_day;

        int hour = remain_sec / sec_per_hour;
        remain_sec = remain_sec % sec_per_hour;

        int minute = remain_sec / sec_per_minute;
        int final_sec = remain_sec % sec_per_minute;

        char time[10];
        sprintf(time, "%02d:%02d:%02d", hour, minute, final_sec);

        if (day > 0)
        {
            printf("%d hari %s\n", day, time);
        }
        else
        {
            printf("%s\n", time);
        }
    }

    return 0;
}