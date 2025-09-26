#include <stdio.h>
#include <string.h>

char checkDate(char *date)
{
    char bufferDay[11];
    char bufferMonth[11];
    char bufferYear[11];
    int day, month, year;
    int v = sscanf(date, "%d/%d/%d", &day, &month, &year);
    if (v != 3)
    {
        printf("invalid date");
    }
    else
    {
        if (day < 31 && day > 0)
        {
            printf("invalid day range");
            return;
        }
        if (month < 13 && month > 0)
        {
            printf("invalid month range");
            return;
        }
        sprintf(bufferDay, "%d", day);
        sprintf(bufferMonth, "%d", month);
        sprintf(bufferYear, "%d", year);
        strcat(bufferDay, '/');
        strcat(bufferMonth, '/');
        strcat(bufferDay, '/');
    }
}

// void seachMethod(int id, ){

// }