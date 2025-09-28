
#include <string.h>
#include <stdio.h>
// #include "enums.c";
int indexOFID(int id, int *ids, int lastID);

int addAirplan(char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int index)
{

    printf("Enter le model de la avoin: ");
    getchar();
    fgets(model[index], 100, stdin);
    /// remove \n
    model[index][strcspn(model[index], "\n")] = '\0';

    printf("Enter la capacity de l'avoi: ");
    scanf("%d", &capacity[index]);
    printf("Enter la status du l'avoin: 1. En vol, 2. Disponible, 3.En maintenance: ");
    scanf("%d", &status[index]);
    if (status[index] > 3 || status[index] <= 0)
    {
        printf("le nomber qu'est vous entrez n'est pas disponible\n");
        return 0;
    }

    printf("Enter la date de la enter d'avoin (jj/mm/yyyy): ");
    scanf("%s", &enterDate[index]);
    printf("date entrie est %s", enterDate[index]);
    printf("L'avoin est ajouter successfully\n");
    return 1;
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
        int indexOfID = indexOFID(id, ids, index);
        if (indexOfID == -1)
        {
            printf("id n'est pas existe\n");
            return -1;
        }

        char ste[10];
        switch (status[indexOfID])
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
        printf("model est : %s, capacity est : %d, status est %s, date d'enter est : %s\n", model[indexOfID], capacity[indexOfID], ste, enterDate[indexOfID]);
        return indexOfID;
    }
    else if (searchType == 2)
    {
        char searchModel[100];
        printf("Enter le model d'avion: ");
        fgets(searchModel, 100, stdin);
        searchModel[strcspn(searchModel, "\n")] = '\0';
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
    return -2;
}

void update(char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int currentIndex)
{
    printf("pour modifier le nome du model entez 1\n");
    printf("pour modifier la capacity d'avoin enterz 2\n");
    printf("pour modifier le status d'avoin entez 3\n");
    printf("pour modifier la date d'enter d'avoin entez 4\n");
    int userchoise;
    printf("votre choix est: ");
    scanf("%d", &userchoise);
    while (getchar() != '\n')
        ;

    switch (userchoise)
    {
    case 1:
    {
        char input[100];
        printf("la novelle value est: ");
        fgets(input, 100, stdin);
        strcpy(model[currentIndex], input);
        printf("\n");
        printf("module is: %s", model[currentIndex]);
        printf("\n");
        break;
    }
    case 2:
    {
        int cap;
        printf("la novelle value est: ");
        scanf("%d", &cap);
        while (getchar() != '\n')
            ;
        capacity[currentIndex] = cap;

        break;
    }
    case 3:
    {
        int sts;
        printf("la nouvelle value (1. En vol, 2. Disponible, 3.En maintenance): ");
        scanf("%d", &sts);
        while (getchar() != '\n')
            ;
        status[currentIndex] = sts;

        break;
    }
    case 4:
    {
        char input[100];
        printf("la novelle value est: ");
        fgets(input, 100, stdin);
        strcpy(enterDate[currentIndex], input);
        break;
    }

    default:
    {
        printf("tu doit entrez un number inf a 4 et sup 0");
        break;
    }
    }
}

void delete(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int currentIndex, int lastIndex)
{

    // for (int i = currentIndex; i <= lastIndex; i++)
    // {
    // char ele[100] = model[i];
    // if (i == lastIndex)
    // {
    //     strcpy(model[lastIndex], "null");
    //     capacity[lastIndex] = -1;
    //     status[lastIndex] = -1;
    //     ids[lastIndex] = -1;
    //     strcpy(enterDate[lastIndex], "null");
    // }
    // else
    // {
    //     strcpy(model[i], model[i + 1]);
    //     capacity[i] = capacity[i + 1];
    //     status[i] = status[i + 1];
    //     ids[i] = ids[i + 1];
    //     strcpy(enterDate[i], enterDate[i + 1]);
    // }
    ///////////
    // strcpy(model[currentIndex], "");
    capacity[currentIndex] = -1;
    status[currentIndex] = -1;
    ids[currentIndex] = -1;
    // strcpy(enterDate[currentIndex], "");
    // }
}

void displayTable(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int lastIndex)

{

    if (lastIndex == -1)
    {
        printf("==========>>>> nous n'avons pas encore des avoin\n");
    }
    printf("||\tid\t\t||");
    printf("\tmodel\t\t||");
    printf("\tcapacite\t||");
    printf("\tstatus\t\t||");
    printf("\tdate enter\t\t||");
    printf("\n");
    for (int i = 0; i <= lastIndex; i++)
    {
        if (capacity[i] == -1 && status[i] == -1)
            continue;
        printf("------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n");
        printf("||\t%d\t\t||", ids[i]);
        printf("\t%s\t\t||", model[i]);
        printf("\t%d\t\t||", capacity[i]);

        char ste[20];
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

        printf("\t%s\t\t||", ste);
        printf("\t%s\t\t||", enterDate[i]);
        printf("\n");
    }
}

void sort(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int lastIndex)
{
    int userChoise;
    printf("choisir votre option pour trier les avions, 1. par capacity, 2. par model: ");
    scanf("%d", &userChoise);
    if (userChoise == 1)
    {
        //// {2,3,4,1,0,9,7,6};
        for (int i = 0; i <= lastIndex; i++)
        {
            for (int j = i + 1; j <= lastIndex; j++)
            {
                if (capacity[i] >= capacity[j])
                {
                    int saveids = ids[i];
                    ids[i] = ids[j];
                    ids[j] = saveids;
                    ////////////////////////////
                    char saveModel[100];
                    strcpy(saveModel, model[i]);
                    strcpy(model[i], model[j]);
                    strcpy(model[j], saveModel);

                    ////////////////////////////
                    int saveStatus = status[i];
                    status[i] = status[j];
                    status[j] = saveStatus;
                    ////////////////////////////
                    int saveCapacity = capacity[i];
                    capacity[i] = capacity[j];
                    capacity[j] = saveCapacity;
                    ////////////////////////////
                    char saveEnterDate[100];
                    strcpy(saveEnterDate, enterDate[i]);
                    strcpy(enterDate[i], enterDate[j]);
                    strcpy(enterDate[j], saveEnterDate);
                    ////////////////////////////
                }
            }
        }
    }
    else if (userChoise == 2)
    {
        for (int i = 0; i <= lastIndex; i++)
        {
            for (int j = i + 1; j <= lastIndex; j++)
            {
                int result = strcmp(model[i], model[j]);

                if (result > 0)
                {
                    int saveids = ids[i];
                    ids[i] = ids[j];
                    ids[j] = saveids;
                    ////////////////////////////
                    char saveModel[100];
                    strcpy(saveModel, model[i]);
                    strcpy(model[i], model[j]);
                    strcpy(model[j], saveModel);

                    ////////////////////////////
                    int saveStatus = status[i];
                    status[i] = status[j];
                    status[j] = saveStatus;
                    ////////////////////////////
                    int saveCapacity = capacity[i];
                    capacity[i] = capacity[j];
                    capacity[j] = saveCapacity;
                    ////////////////////////////
                    char saveEnterDate[100];
                    strcpy(saveEnterDate, enterDate[i]);
                    strcpy(enterDate[i], enterDate[j]);
                    strcpy(enterDate[j], saveEnterDate);
                    ////////////////////////////
                }
            }
        }
    }
    else
    {
        printf("tu est enter un numero, qui est n'est pas en 1, 2 ");
        return;
    }
}

int indexOFID(int id, int *ids, int lastID)
{
    for (int i = 0; i <= lastID; i++)
    {
        if (id == ids[i])
        {
            return i;
        }
    }
    return -1;
}