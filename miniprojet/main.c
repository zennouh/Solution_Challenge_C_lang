#include <stdio.h>
#include "headers.h"
// #include "functions.c"
// #include "enums.c"

void main()
{
    int lastIndex = 0;

    int ids[100];
    char model[100][100];
    int capacities[100];
    int status[100];
    char enterDate[100][100];

    // int foundId;

    int userChoise;
    do
    {
        printf("1. saisir 1 pour la ajouter un avion\n");
        printf("2. saisir 2 pour la modifier un avion\n");
        printf("3. saisir 3 pour la supprime un avion\n");
        printf("4. saisir 4 pour la searcher un avion\n");
        printf("5. saisir 5 pour la afficher un avion\n");
        printf("6. saisir 6 pour l' order d'affiche un avion\n");
        printf("7. saisir 7 pour la sortier\n");
        printf("le choix est: ");

        scanf("%d", &userChoise);
        switch (userChoise)
        {
        case 1:

            addAirplan(ids, model, capacities, status, enterDate, lastIndex);
            ids[lastIndex] = lastIndex;
            lastIndex++;

            break;
        case 2:
        {
            int foundId = getSearch(ids, model, capacities, status, enterDate, lastIndex);
            printf("L'id est :%d\n", foundId);

            break;
        }
        case 3:
            printf("choix 3");

            break;
        case 4:
            getSearch(ids, model, capacities, status, enterDate, lastIndex);

            break;
        case 5:
            printf("choix 5");

            break;
        case 6:
            printf("choix 6");

            break;
        case 7:
            printf("choix 7");

            return;

        default:
            printf("tu est enter un mouve choix");
            break;
        }
        printf("==============Merci=======================\n");

    } while (userChoise != 0);
}
// for (int i = 0; i < lastIndex; i++) // 10 just for now
// {
//     printf("%d, %s, %d,%d, %s\n", ids[i], model[i], capacities[i], status[i], enterDate[i]);
// }