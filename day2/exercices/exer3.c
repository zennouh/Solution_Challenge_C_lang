
#include <stdio.h>
int getMinuts(char *i);
void main()
{
    int hour;
    int minuts;

    char date[15];

    char departTime[][6] = {"8:00", "9:43", "11:19", "12:47", "14:00", "15:45", "19:00", "21:45"};
    int size = sizeof(departTime) / sizeof(departTime[0]);
    printf("size: %d\n", size);
    char arriveTime[][6] = {"10:16", "11:52", "13:31", "15:00", "16:08", "17:55", "21:20", "23:58"};
    printf("Entrez une heure (24h) :");

    fgets(date, sizeof(date), stdin);

    int v = sscanf(date, "%2d:%2d", &hour, &minuts);

    int userMinuts = (hour * 60) + minuts; // user minuts;

    for (int i = 0; i < size; i++)
    {
        int timeListItem = getMinuts(departTime[i]); // 8:00

        if ((userMinuts - timeListItem) < 0)
        {
            if (i == 0)
            {
                // departTime[size - 1] = "09:45";

                // int lastTime = -userMinuts + getMinuts("09:45"); // 9:45, 1:00
                // int firstTime = +userMinuts - getMinuts(departTime[0]);

                // if (lastTime > firstTime)
                // {
                //     printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[size - 1], arriveTime[size - 1]);
                //     return;
                // }
                // else
                // {
                //     printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[0], arriveTime[0]);
                //     return;
                // }
                printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[0], arriveTime[0]);
                return;
            }
            int prevouisTime = -getMinuts(departTime[i - 1]) + userMinuts;
            int nextTime = getMinuts(departTime[i]) - userMinuts;

            printf("prev: %d time: %s \n, timeListItme: %d, time : %s \n", prevouisTime, departTime[i - 1], nextTime, departTime[i]);
            if (prevouisTime >= nextTime)
            {
                printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[i], arriveTime[i]);
                return;
            }
            else
            {
                printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[i - 1], arriveTime[i - 1]);
                return;
            }
        }

        //
        // int sousTraction = userMinuts - timeListItem;
        // if (i == 0 && sousTraction < 0)
        // {
        //     printf("L'heure de départ la plus proche est %s, arrivant %s", departTime[0], arriveTime[0]);
        //     return;
        // }
        // else
        // {

        // }
    }
}

int getMinuts(char *i)
{
    int minuts;
    int hours;
    int v = sscanf(i, "%2d:%2d", &hours, &minuts);
    int userMinuts = (hours * 60) + minuts; // user minuts;
    return userMinuts;
}