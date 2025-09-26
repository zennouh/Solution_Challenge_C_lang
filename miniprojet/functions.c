
#include <string.h>
#include <stdio.h>
// #include "enums.c";

void addAirplan(int *id, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int index)
{

    printf("Enter le model de la avoin: ");
    getchar();
    fgets(model[index], 100, stdin);

    printf("Enter la capacity de l'avoi: ");
    scanf("%d", &capacity[index]);
    printf("Enter la status du l'avoin: 1. En vol, 2. Disponible, 3.En maintenance: ");
    scanf("%d", &status[index]);
    if (status[index] > 3 || status[index] <= 0)
    {
        printf("le nomber qu'est vous entrez n'est pas disponible\n");
        return;
    }
    printf("Enter la date de la enter d'avoin (jj/mm/yyyy): ");
    scanf("%s", &enterDate[index]);
    printf("L'avoin est ajouter successfully\n");
}

int getSearch(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int index)
{
    int searchType;
    printf("would like to shearch by id or model (1.id, 2.model): ");
    scanf("%d", &searchType);
    while (getchar() != '\n')
        ;

    if (searchType == 1)
    {
        printf("Enter l'id: ");
        int id;
        scanf("%d", &id);
        while (getchar() != '\n')
            ;
        if (id > index)
        {
            printf("id n'est pas existe\n");
            return -1;
        }
        char ste[10];
        switch (status[id])
        {
        case 1:
            strcpy(ste, "En vol");
            break;
        case 2:
            strcpy(ste, "Disponible");
            break;
        case 3:
            strcpy(ste, "En maintenance");
            break;

        default:
            break;
        }
        printf("model est : %s, capacity est : %d, status est %s, date d'enter est : %s\n", model[id], capacity[id], ste, enterDate[id]);
        return id;
    }
    else if (searchType == 2)
    {
        char searchModel[100];
        printf("Enter le model d'avion: ");
        fgets(searchModel, 100, stdin);
        int isExiste = 0;
        for (int i = 0; i < index; i++)
        {
            int result = strcmp(searchModel, model[i]);
            if (result == 0)
            {
                printf("L'avion est: \n");
                printf("le model est %s\n", searchModel);
                printf("le capacity est %d\n", capacity[i]);
                char ste[10];
                switch (status[i])
                {
                case 1:
                    strcpy(ste, "En vol");
                    break;
                case 2:
                    strcpy(ste, "Disponible");
                    break;
                case 3:
                    strcpy(ste, "En maintenance");
                    break;
                default:
                    break;
                }

                printf("le status est %s\n", ste);
                printf("la date d'enter est %s\n", enterDate[i]);
                isExiste = 1;
                return i;

                break;
            }
        }
        if (!isExiste)
        {
            printf("le nom de cette avoin n'est pas existe\n");
            return -1;
        }
    }

    printf("le nomber qu'est vous entrez n'est pas disponible\n");
    return -1;
}

void update(char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int currentIndex)
{
    printf("pour modifier le nome du model entez 1\n");
    printf("pour modifier la capacity d'avoin enterz 2\n");
    printf("pour modifier le status d'avoin entez 3\n");
    printf("pour modifier la date d'enter d'avoin entez 4\n");
    int userchoise;
    scanf("%d", &userchoise);
    switch (userchoise)
    {
    case 1:
    {
        char input[50];
        fgets(input, 50, stdin);

        break;
    }
    case 2:
    {

        break;
    }
    case 3:
    {

        break;
    }
    case 4:
    {

        break;
    }

    default:
    {
        printf("tu doit entrez un number inf a 4 et sup 0");
        break;
    }
    }
}