
#include <stdio.h>

void main()
{
    int day_one;
    int month_one;
    int year_one;
    char date_one[15];
    ///////////
    int day_two;
    int month_two;
    int year_two;
    char date_two[15];

    printf("Entrez la premiere date (mm/jj/aa):");
    fgets(date_one, sizeof(date_one), stdin);

    printf("Entrez la deuxième date (mm/jj/aa) :");
    fgets(date_two, sizeof(date_two), stdin);

    int v_one = sscanf(date_one, "%2d/%2d/%2d", &month_one, &day_one, &year_one);
    int v_two = sscanf(date_two, "%2d/%2d/%2d", &month_two, &day_two, &year_two);

    if (year_one > year_two)
    {
        printf("%s est plus tôt que %s", &date_two, &date_one);
    }
    else if (year_one < year_two)
    {
        printf("%s est plus tôt que %s", &date_one, &date_two);
    }
    else
    {

        if (month_one > month_two)
        {
            printf("%s est plus tôt que %s", &date_two, &date_one);
        }
        else if (month_one < month_two)
        {
            printf("%s est plus tôt que %s", &date_one, &date_two);
        }
        else
        {

            if (day_one > day_two)
            {
                printf("%s est plus tôt que %s", &date_two, &date_one);
            }
            else if (day_one < day_two)
            {
                printf("%s est plus tôt que %s", &date_one, &date_two);
            }
            else
            {
                printf("les deux date  soit le meme");
            }
        }
    }
}
