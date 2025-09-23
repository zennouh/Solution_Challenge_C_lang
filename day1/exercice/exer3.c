
#include <stdio.h>

void main()
{
    char input[10];

    int r;

    printf("donner le rayon de la sphere: ");

    while (1)
    {
        fgets(input, sizeof(input), stdin);

        int v = sscanf(input, "%d", &r);
        if (v != 1)
        {
            printf("valeur incorrecte, donner un entier positif svp: ");
            continue;
        }
        else
        {
            if (r < 0)
            {
                printf("valeur incorrecte, donner un entier positif svp: ");
                continue;
            }

            const double pi = 3.14;
            double fraction = (double)4 / 3;

            double volume = 4.0f / 3.0f * pi * r * r * r;
            // double volume1 = (4 / 3) * pi * r * r * r;
            printf("le volume de la sphere en ustilise (4.0f/3.0f) est: %.3lf\n", volume);
            // printf("le volume11 de la sphere en ustilise (4/3) est: %.3lf\n", volume1);
            break;
        }
    }
}