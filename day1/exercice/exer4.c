
#include <stdio.h>

void main()
{
    char input[10];

    int montant;

    const int tax = 5;

    printf("donner le montant: ");

    while (1)
    {
        fgets(input, sizeof(input), stdin);

        int v = sscanf(input, "%d", &montant); // 3 . 4

        if (v != 1)
        {
            printf("valeur incorrecte, donner un entier positif svp: ");
            continue;
        }
        else
        {
            if (montant < 0)
            {
                printf("valeur incorrecte, donner un entier positif svp: ");
                continue;
            }

            int r = montant + (montant * tax / 100);

            printf("le montant avec la taxe est: %d\n", r);

            break;
        }
    }
}