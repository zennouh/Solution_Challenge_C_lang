
#include <stdio.h>

void main()
{
    char input[10];

    int montant;

    const int interet = 6;

    float debt = 20000.0;

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
            float percentageDebt1 = (debt * 0.06) / 12; // 100
            float secOne = debt - montant + percentageDebt1;

            printf("Solde restant apres le premier paiement %.2f\n", secOne);
            // float percentageDebt2 = (secOne * 0.06) / 12; // 100
            // float secTwo = percentageDebt2 - montant + percentageDebt2;

            // printf("Solde restant apres le premier paiement %.2f\n", secTwo);
            // float percentageDebt3 = (secTwo * 0.06) / 12; // 100
            // float secTree = percentageDebt3 - montant + percentageDebt3;

            // printf("Solde restant apres le premier paiement %.2f\n", secTree);

            break;
        }
    }
}